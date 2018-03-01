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

        SqlDataAdapter da = new SqlDataAdapter();
        DataSet ds = new DataSet();

        SqlDataAdapter da1 = new SqlDataAdapter();
        DataSet ds1 = new DataSet();

        public Form1()
        {
            InitializeComponent();
            da.SelectCommand = new SqlCommand("SELECT * FROM USR", connection);
            ds.Clear();
            da.Fill(ds);
            dataGridView1.DataSource = ds.Tables[0];
        }

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {
            int selectedIndex = e.RowIndex;

            // Need to check this for pressing the header and getting index out of range error.
            if (e.RowIndex == -1) return;

            this.getDataForSelectedRowsOrCells(selectedIndex);
            this.displayChildRecords(selectedIndex);
        }

        private void dataGridView1_CellClick(object sender, DataGridViewCellEventArgs e)
        {
            int selectedIndex = e.RowIndex;
            
            // Need to check this for pressing the header and getting index out of range error.
            if (e.RowIndex == -1) return;

            this.getDataForSelectedRowsOrCells(selectedIndex);
            this.displayChildRecords(selectedIndex);


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
        private void getDataForSelectedRowsOrCells(int selectedIndex)
        {
            DataGridViewRow selectedRow = dataGridView1.Rows[selectedIndex];

            textBoxCustomersID.Text = selectedRow.Cells[0].Value.ToString();
            textBoxCustomersFN.Text = selectedRow.Cells[1].Value.ToString();
            textBoxCustomersLN.Text = selectedRow.Cells[2].Value.ToString();
            textBoxCustomersAddress.Text = selectedRow.Cells[3].Value.ToString();
            textBoxCustomersPhone.Text = selectedRow.Cells[4].Value.ToString();
        }

        // Populates with all the orders
        private void populateBtnOrders_Click(object sender, EventArgs e)
        {
            da1.SelectCommand = new SqlCommand("SELECT * FROM ORDR", connection);
            ds1.Clear();
            da1.Fill(ds1);
            dataGridView2.DataSource = ds1.Tables[0];
            forCustomerLbl.Text = "Orders";
        }
    }
}
