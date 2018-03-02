using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Data.SqlClient;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Laboratory1
{
    public partial class Form1 : Form
    {
        // First we are creating a connection
        SqlConnection connection = new SqlConnection("Data Source = OLTEANUANDR9310\\SQLEXPRESS; Initial Catalog = Foodster; Integrated Security = True");

        // Adapter and DataSet
        SqlDataAdapter da = new SqlDataAdapter();
        DataSet ds = new DataSet();

        // Adapter and DataSet
        SqlDataAdapter da1 = new SqlDataAdapter();
        DataSet ds1 = new DataSet();

        int OID;
        
        public Form1()
        {
            InitializeComponent();
            this.displayCustomers();
        }

        // Deletes a record from Orders and displays the new data
        private void deleteBtn_Click(object sender, EventArgs e)
        {
            try
            {
                if (OID != 0)
                {
                    connection.Open();
                    da1.DeleteCommand = new SqlCommand("DELETE FROM OrderToDishes WHERE OID = @id", connection);
                    da1.DeleteCommand.Parameters.AddWithValue("@id", this.OID);
                    da1.DeleteCommand.ExecuteNonQuery();
                    da1.DeleteCommand = new SqlCommand("DELETE FROM ORDR WHERE OID = @id", connection);
                    da1.DeleteCommand.Parameters.AddWithValue("@id", this.OID);
                    da1.DeleteCommand.ExecuteNonQuery();

                    MessageBox.Show("Order Deleted Successfully!");
                    this.displayOrders();
                    this.ClearOrderTextboxData();
                }
                else
                {
                    MessageBox.Show("Please Select Record to Delete");
                }

            } catch (Exception exception)
            {
                MessageBox.Show(exception.Message);
            } finally
            {
                connection.Close();
            }
            
        }

        private void updateOrderBtn_Click(object sender, EventArgs e)
        {
            try
            {
                connection.Open();
                da1.UpdateCommand = new SqlCommand("UPDATE ORDR SET OID = @oid, timeStamp = @timeStamp, paymentType = @paymentType, total = @total, UID = @uid, RID = @rid WHERE OID = @oid", connection);
                da1.UpdateCommand.Parameters.AddWithValue("@oid", this.OID);
                da1.UpdateCommand.Parameters.AddWithValue("@timeStamp", textBoxOrderTimeStamp.Text);
                if (checkBoxCash.Checked == true)
                {
                    da1.UpdateCommand.Parameters.AddWithValue("@paymentType", checkBoxCash.Text);
                } else
                {
                    da1.UpdateCommand.Parameters.AddWithValue("@paymentType", checkBoxCreditCard.Text);
                }
                da1.UpdateCommand.Parameters.AddWithValue("@total", Convert.ToInt32(textBoxOrderTotal.Text));
                da1.UpdateCommand.Parameters.AddWithValue("@UID", Convert.ToInt32(textBoxOrderUID.Text));
                da1.UpdateCommand.Parameters.AddWithValue("@RID", textBoxOrderRestaurant.Text);
                da1.UpdateCommand.ExecuteNonQuery();

                MessageBox.Show("Order Updated Successfully!");
                this.displayOrders();
                this.ClearOrderTextboxData();

            } catch (Exception exception)
            {
                MessageBox.Show(exception.Message);
            } finally
            {
                connection.Close();
            }
        }



        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {
            int selectedIndex = e.RowIndex;

            // Need to check this for pressing the header and getting index out of range error.
            if (e.RowIndex == -1) return;

            this.populateCustomerTextboxesFromIndex(selectedIndex);
            this.displayChildRecords(selectedIndex);
            this.ClearOrderTextboxData();
        }

        private void dataGridView1_CellClick(object sender, DataGridViewCellEventArgs e)
        {
            int selectedIndex = e.RowIndex;
            
            // Need to check this for pressing the header and getting index out of range error.
            if (e.RowIndex == -1) return;

            this.populateCustomerTextboxesFromIndex(selectedIndex);
            this.displayChildRecords(selectedIndex);
            this.ClearOrderTextboxData();


        }

        // Displays all the parents records
        private void displayCustomers()
        {
            da.SelectCommand = new SqlCommand("SELECT * FROM USR", connection);
            ds.Clear();
            da.Fill(ds);
            dataGridView1.DataSource = ds.Tables[0];
        }


        // Displays all the orders taken by a certain customer, by ID
        private void displayChildRecords(int forCustomerID)
        {
            da1.SelectCommand = new SqlCommand("SELECT * FROM ORDR WHERE UID = @id", connection);
            da1.SelectCommand.Parameters.AddWithValue("@id", getCustomerID(forCustomerID));
            ds1.Clear();
            da1.Fill(ds1);
            dataGridView2.DataSource = ds1.Tables[0];
        }

        // Returns the ID of the customer which was pressed
        string getCustomerID(int forCustomerID)
        {
            DataGridViewRow selectedRow = dataGridView1.Rows[forCustomerID];
            forCustomerLbl.Text = "Orders for " + selectedRow.Cells[1].Value.ToString() + " " + selectedRow.Cells[2].Value.ToString();
            return selectedRow.Cells[0].Value.ToString();
        }


        // Gets the data from a selected index and displays it in the textBoxes
        private void populateCustomerTextboxesFromIndex(int selectedIndex)
        {
            DataGridViewRow selectedRow = dataGridView1.Rows[selectedIndex];

            textBoxCustomersID.Text = selectedRow.Cells[0].Value.ToString();
            textBoxCustomersFN.Text = selectedRow.Cells[1].Value.ToString();
            textBoxCustomersLN.Text = selectedRow.Cells[2].Value.ToString();
            textBoxCustomersAddress.Text = selectedRow.Cells[3].Value.ToString();
            textBoxCustomersPhone.Text = selectedRow.Cells[4].Value.ToString();
        }

        private void populateOrderTextboxesFromIndex(int selectedIndex)
        {
            DataGridViewRow selectedRow = dataGridView2.Rows[selectedIndex];

            textBoxOrderOID.Text = selectedRow.Cells[0].Value.ToString();
            textBoxOrderTimeStamp.Text = selectedRow.Cells[1].Value.ToString();
            textBoxOrderTotal.Text = selectedRow.Cells[3].Value.ToString();
            textBoxOrderUID.Text = selectedRow.Cells[4].Value.ToString();
            textBoxOrderRestaurant.Text = selectedRow.Cells[5].Value.ToString();

            string paymentType = selectedRow.Cells[2].Value.ToString();
            if (paymentType == "Cash")
            {
                checkBoxCash.Checked = true;
                checkBoxCreditCard.Checked = false;
                lastChecked = checkBoxCash;
            }
            else
            {
                checkBoxCash.Checked = false;
                checkBoxCreditCard.Checked = true;
                lastChecked = checkBoxCreditCard;
            }
            try
            {
                this.OID = Convert.ToInt32(selectedRow.Cells[0].Value.ToString());
            }
            catch (Exception ex)
            {
                new ApplicationException("Select a valid Row!");
            }

        }

        // Populates with all the orders
        private void populateBtnOrders_Click(object sender, EventArgs e)
        {
            this.displayOrders();
        }

        // Function that displays all the orders
        private void displayOrders()
        {
            //connection.Open();
            da1.SelectCommand = new SqlCommand("SELECT * FROM ORDR", connection);
            ds1.Clear();
            da1.Fill(ds1);
            dataGridView2.DataSource = ds1.Tables[0];
            forCustomerLbl.Text = "Orders";
            //connection.Close();
        }

        private void dataGridView2_CellClick(object sender, DataGridViewCellEventArgs e)
        {
            int selectedIndex = e.RowIndex;

            // Need to check this for pressing the header and getting index out of range error.
            if (e.RowIndex == -1) return;

            this.populateOrderTextboxesFromIndex(selectedIndex);
        }

        private void dataGridView2_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {
            int selectedIndex = e.RowIndex;

            // Need to check this for pressing the header and getting index out of range error.
            if (e.RowIndex == -1) return;

            this.populateOrderTextboxesFromIndex(selectedIndex);
        }

        // Clears the data
        private void ClearOrderTextboxData()
        {
            textBoxOrderOID.Text = "";
            textBoxOrderTimeStamp.Text = "";
            textBoxOrderTotal.Text = "";
            textBoxOrderUID.Text = "";
            textBoxOrderRestaurant.Text = "";
            checkBoxCash.Checked = false;
            checkBoxCreditCard.Checked = false;
            OID = 0;
        }

        // Helper, for the CheckBoxes. Allowing only one at a time.
        CheckBox lastChecked;
        private void chk_Click(object sender, EventArgs e)
        {
            CheckBox activeCheckBox = sender as CheckBox;
            if (activeCheckBox != lastChecked && lastChecked != null) lastChecked.Checked = false;
            lastChecked = activeCheckBox.Checked ? activeCheckBox : null;
        }
    }
}
