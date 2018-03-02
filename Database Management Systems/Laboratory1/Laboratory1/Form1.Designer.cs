namespace Laboratory1
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.dataGridView1 = new System.Windows.Forms.DataGridView();
            this.label1 = new System.Windows.Forms.Label();
            this.forCustomerLbl = new System.Windows.Forms.Label();
            this.dataGridView2 = new System.Windows.Forms.DataGridView();
            this.label3 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.label6 = new System.Windows.Forms.Label();
            this.textBoxCustomersFN = new System.Windows.Forms.TextBox();
            this.textBoxCustomersLN = new System.Windows.Forms.TextBox();
            this.textBoxCustomersAddress = new System.Windows.Forms.TextBox();
            this.textBoxCustomersPhone = new System.Windows.Forms.TextBox();
            this.populateBtnOrders = new System.Windows.Forms.Button();
            this.addNewOrderBtn = new System.Windows.Forms.Button();
            this.label7 = new System.Windows.Forms.Label();
            this.label8 = new System.Windows.Forms.Label();
            this.textBoxCustomersID = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.label9 = new System.Windows.Forms.Label();
            this.label10 = new System.Windows.Forms.Label();
            this.label11 = new System.Windows.Forms.Label();
            this.label12 = new System.Windows.Forms.Label();
            this.label13 = new System.Windows.Forms.Label();
            this.updateOrderBtn = new System.Windows.Forms.Button();
            this.deleteBtn = new System.Windows.Forms.Button();
            this.checkBoxCash = new System.Windows.Forms.CheckBox();
            this.checkBoxCreditCard = new System.Windows.Forms.CheckBox();
            this.textBoxOrderOID = new System.Windows.Forms.TextBox();
            this.textBoxOrderRestaurant = new System.Windows.Forms.TextBox();
            this.textBoxOrderUID = new System.Windows.Forms.TextBox();
            this.textBoxOrderTotal = new System.Windows.Forms.TextBox();
            this.textBoxOrderTimeStamp = new System.Windows.Forms.TextBox();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView2)).BeginInit();
            this.SuspendLayout();
            // 
            // dataGridView1
            // 
            this.dataGridView1.BackgroundColor = System.Drawing.SystemColors.ControlLightLight;
            this.dataGridView1.BorderStyle = System.Windows.Forms.BorderStyle.None;
            this.dataGridView1.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView1.Location = new System.Drawing.Point(12, 677);
            this.dataGridView1.Name = "dataGridView1";
            this.dataGridView1.RowTemplate.Height = 33;
            this.dataGridView1.Size = new System.Drawing.Size(1086, 540);
            this.dataGridView1.TabIndex = 1;
            this.dataGridView1.CellClick += new System.Windows.Forms.DataGridViewCellEventHandler(this.dataGridView1_CellClick);
            this.dataGridView1.CellContentClick += new System.Windows.Forms.DataGridViewCellEventHandler(this.dataGridView1_CellContentClick);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 16.125F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.Location = new System.Drawing.Point(12, 608);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(240, 51);
            this.label1.TabIndex = 2;
            this.label1.Text = "Customers";
            // 
            // forCustomerLbl
            // 
            this.forCustomerLbl.AutoSize = true;
            this.forCustomerLbl.Font = new System.Drawing.Font("Microsoft Sans Serif", 16.125F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.forCustomerLbl.Location = new System.Drawing.Point(1107, 617);
            this.forCustomerLbl.Name = "forCustomerLbl";
            this.forCustomerLbl.Size = new System.Drawing.Size(159, 51);
            this.forCustomerLbl.TabIndex = 3;
            this.forCustomerLbl.Text = "Orders";
            // 
            // dataGridView2
            // 
            this.dataGridView2.BackgroundColor = System.Drawing.SystemColors.ControlLightLight;
            this.dataGridView2.BorderStyle = System.Windows.Forms.BorderStyle.None;
            this.dataGridView2.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView2.Location = new System.Drawing.Point(1104, 677);
            this.dataGridView2.Name = "dataGridView2";
            this.dataGridView2.RowTemplate.Height = 33;
            this.dataGridView2.Size = new System.Drawing.Size(1288, 540);
            this.dataGridView2.TabIndex = 4;
            this.dataGridView2.CellClick += new System.Windows.Forms.DataGridViewCellEventHandler(this.dataGridView2_CellClick);
            this.dataGridView2.CellContentClick += new System.Windows.Forms.DataGridViewCellEventHandler(this.dataGridView2_CellContentClick);
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(24, 248);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(116, 25);
            this.label3.TabIndex = 5;
            this.label3.Text = "First Name";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(412, 313);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(155, 25);
            this.label4.TabIndex = 6;
            this.label4.Text = "Phone Number";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(412, 236);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(91, 25);
            this.label5.TabIndex = 7;
            this.label5.Text = "Address";
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(24, 313);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(115, 25);
            this.label6.TabIndex = 8;
            this.label6.Text = "Last Name";
            // 
            // textBoxCustomersFN
            // 
            this.textBoxCustomersFN.Location = new System.Drawing.Point(166, 245);
            this.textBoxCustomersFN.Name = "textBoxCustomersFN";
            this.textBoxCustomersFN.Size = new System.Drawing.Size(186, 31);
            this.textBoxCustomersFN.TabIndex = 9;
            // 
            // textBoxCustomersLN
            // 
            this.textBoxCustomersLN.Location = new System.Drawing.Point(166, 310);
            this.textBoxCustomersLN.Name = "textBoxCustomersLN";
            this.textBoxCustomersLN.Size = new System.Drawing.Size(186, 31);
            this.textBoxCustomersLN.TabIndex = 10;
            // 
            // textBoxCustomersAddress
            // 
            this.textBoxCustomersAddress.Location = new System.Drawing.Point(608, 230);
            this.textBoxCustomersAddress.Name = "textBoxCustomersAddress";
            this.textBoxCustomersAddress.Size = new System.Drawing.Size(210, 31);
            this.textBoxCustomersAddress.TabIndex = 11;
            // 
            // textBoxCustomersPhone
            // 
            this.textBoxCustomersPhone.Location = new System.Drawing.Point(608, 313);
            this.textBoxCustomersPhone.Name = "textBoxCustomersPhone";
            this.textBoxCustomersPhone.Size = new System.Drawing.Size(210, 31);
            this.textBoxCustomersPhone.TabIndex = 12;
            // 
            // populateBtnOrders
            // 
            this.populateBtnOrders.Location = new System.Drawing.Point(1842, 611);
            this.populateBtnOrders.Name = "populateBtnOrders";
            this.populateBtnOrders.Size = new System.Drawing.Size(160, 48);
            this.populateBtnOrders.TabIndex = 13;
            this.populateBtnOrders.Text = "Populate";
            this.populateBtnOrders.UseVisualStyleBackColor = true;
            this.populateBtnOrders.Click += new System.EventHandler(this.populateBtnOrders_Click);
            // 
            // addNewOrderBtn
            // 
            this.addNewOrderBtn.Location = new System.Drawing.Point(1104, 427);
            this.addNewOrderBtn.Name = "addNewOrderBtn";
            this.addNewOrderBtn.Size = new System.Drawing.Size(189, 51);
            this.addNewOrderBtn.TabIndex = 14;
            this.addNewOrderBtn.Text = "Add new Order";
            this.addNewOrderBtn.UseVisualStyleBackColor = true;
            this.addNewOrderBtn.Click += new System.EventHandler(this.addNewOrderBtn_Click);
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.Font = new System.Drawing.Font("Microsoft Sans Serif", 19.875F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label7.Location = new System.Drawing.Point(1039, 9);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(243, 61);
            this.label7.TabIndex = 15;
            this.label7.Text = "Foodster";
            // 
            // label8
            // 
            this.label8.AutoSize = true;
            this.label8.Location = new System.Drawing.Point(24, 185);
            this.label8.Name = "label8";
            this.label8.Size = new System.Drawing.Size(32, 25);
            this.label8.TabIndex = 16;
            this.label8.Text = "ID";
            // 
            // textBoxCustomersID
            // 
            this.textBoxCustomersID.Location = new System.Drawing.Point(166, 185);
            this.textBoxCustomersID.Name = "textBoxCustomersID";
            this.textBoxCustomersID.Size = new System.Drawing.Size(186, 31);
            this.textBoxCustomersID.TabIndex = 17;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(1104, 198);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(48, 25);
            this.label2.TabIndex = 18;
            this.label2.Text = "OID";
            // 
            // label9
            // 
            this.label9.AutoSize = true;
            this.label9.Location = new System.Drawing.Point(1723, 248);
            this.label9.Name = "label9";
            this.label9.Size = new System.Drawing.Size(47, 25);
            this.label9.TabIndex = 19;
            this.label9.Text = "UID";
            // 
            // label10
            // 
            this.label10.AutoSize = true;
            this.label10.Location = new System.Drawing.Point(1104, 251);
            this.label10.Name = "label10";
            this.label10.Size = new System.Drawing.Size(126, 25);
            this.label10.TabIndex = 20;
            this.label10.Text = "Time Stamp";
            // 
            // label11
            // 
            this.label11.AutoSize = true;
            this.label11.Location = new System.Drawing.Point(1104, 319);
            this.label11.Name = "label11";
            this.label11.Size = new System.Drawing.Size(150, 25);
            this.label11.TabIndex = 21;
            this.label11.Text = "Payment Type";
            // 
            // label12
            // 
            this.label12.AutoSize = true;
            this.label12.Location = new System.Drawing.Point(1723, 195);
            this.label12.Name = "label12";
            this.label12.Size = new System.Drawing.Size(60, 25);
            this.label12.TabIndex = 22;
            this.label12.Text = "Total";
            // 
            // label13
            // 
            this.label13.AutoSize = true;
            this.label13.Location = new System.Drawing.Point(1723, 316);
            this.label13.Name = "label13";
            this.label13.Size = new System.Drawing.Size(117, 25);
            this.label13.TabIndex = 23;
            this.label13.Text = "Restaurant";
            // 
            // updateOrderBtn
            // 
            this.updateOrderBtn.Location = new System.Drawing.Point(1572, 427);
            this.updateOrderBtn.Name = "updateOrderBtn";
            this.updateOrderBtn.Size = new System.Drawing.Size(189, 51);
            this.updateOrderBtn.TabIndex = 25;
            this.updateOrderBtn.Text = "Update Order";
            this.updateOrderBtn.UseVisualStyleBackColor = true;
            this.updateOrderBtn.Click += new System.EventHandler(this.updateOrderBtn_Click);
            // 
            // deleteBtn
            // 
            this.deleteBtn.Location = new System.Drawing.Point(1972, 427);
            this.deleteBtn.Name = "deleteBtn";
            this.deleteBtn.Size = new System.Drawing.Size(189, 51);
            this.deleteBtn.TabIndex = 26;
            this.deleteBtn.Text = "Delete Order";
            this.deleteBtn.UseVisualStyleBackColor = true;
            this.deleteBtn.Click += new System.EventHandler(this.deleteBtn_Click);
            // 
            // checkBoxCash
            // 
            this.checkBoxCash.AutoSize = true;
            this.checkBoxCash.Location = new System.Drawing.Point(1292, 318);
            this.checkBoxCash.Name = "checkBoxCash";
            this.checkBoxCash.Size = new System.Drawing.Size(94, 29);
            this.checkBoxCash.TabIndex = 27;
            this.checkBoxCash.Text = "Cash";
            this.checkBoxCash.UseVisualStyleBackColor = true;
            this.checkBoxCash.Click += new System.EventHandler(this.chk_Click);
            // 
            // checkBoxCreditCard
            // 
            this.checkBoxCreditCard.AutoSize = true;
            this.checkBoxCreditCard.Location = new System.Drawing.Point(1431, 319);
            this.checkBoxCreditCard.Name = "checkBoxCreditCard";
            this.checkBoxCreditCard.Size = new System.Drawing.Size(153, 29);
            this.checkBoxCreditCard.TabIndex = 28;
            this.checkBoxCreditCard.Text = "Credit Card";
            this.checkBoxCreditCard.UseVisualStyleBackColor = true;
            this.checkBoxCreditCard.Click += new System.EventHandler(this.chk_Click);
            // 
            // textBoxOrderOID
            // 
            this.textBoxOrderOID.Location = new System.Drawing.Point(1292, 192);
            this.textBoxOrderOID.Name = "textBoxOrderOID";
            this.textBoxOrderOID.Size = new System.Drawing.Size(292, 31);
            this.textBoxOrderOID.TabIndex = 29;
            // 
            // textBoxOrderRestaurant
            // 
            this.textBoxOrderRestaurant.Location = new System.Drawing.Point(1869, 310);
            this.textBoxOrderRestaurant.Name = "textBoxOrderRestaurant";
            this.textBoxOrderRestaurant.Size = new System.Drawing.Size(292, 31);
            this.textBoxOrderRestaurant.TabIndex = 30;
            // 
            // textBoxOrderUID
            // 
            this.textBoxOrderUID.Location = new System.Drawing.Point(1869, 245);
            this.textBoxOrderUID.Name = "textBoxOrderUID";
            this.textBoxOrderUID.Size = new System.Drawing.Size(292, 31);
            this.textBoxOrderUID.TabIndex = 31;
            // 
            // textBoxOrderTotal
            // 
            this.textBoxOrderTotal.Location = new System.Drawing.Point(1869, 189);
            this.textBoxOrderTotal.Name = "textBoxOrderTotal";
            this.textBoxOrderTotal.Size = new System.Drawing.Size(292, 31);
            this.textBoxOrderTotal.TabIndex = 32;
            // 
            // textBoxOrderTimeStamp
            // 
            this.textBoxOrderTimeStamp.Location = new System.Drawing.Point(1292, 248);
            this.textBoxOrderTimeStamp.Name = "textBoxOrderTimeStamp";
            this.textBoxOrderTimeStamp.Size = new System.Drawing.Size(292, 31);
            this.textBoxOrderTimeStamp.TabIndex = 33;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(12F, 25F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.AutoSize = true;
            this.ClientSize = new System.Drawing.Size(2402, 1229);
            this.Controls.Add(this.textBoxOrderTimeStamp);
            this.Controls.Add(this.textBoxOrderTotal);
            this.Controls.Add(this.textBoxOrderUID);
            this.Controls.Add(this.textBoxOrderRestaurant);
            this.Controls.Add(this.textBoxOrderOID);
            this.Controls.Add(this.checkBoxCreditCard);
            this.Controls.Add(this.checkBoxCash);
            this.Controls.Add(this.deleteBtn);
            this.Controls.Add(this.updateOrderBtn);
            this.Controls.Add(this.label13);
            this.Controls.Add(this.label12);
            this.Controls.Add(this.label11);
            this.Controls.Add(this.label10);
            this.Controls.Add(this.label9);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.textBoxCustomersID);
            this.Controls.Add(this.label8);
            this.Controls.Add(this.label7);
            this.Controls.Add(this.addNewOrderBtn);
            this.Controls.Add(this.populateBtnOrders);
            this.Controls.Add(this.textBoxCustomersPhone);
            this.Controls.Add(this.textBoxCustomersAddress);
            this.Controls.Add(this.textBoxCustomersLN);
            this.Controls.Add(this.textBoxCustomersFN);
            this.Controls.Add(this.label6);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.dataGridView2);
            this.Controls.Add(this.forCustomerLbl);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.dataGridView1);
            this.Name = "Form1";
            this.Text = "Laboratory 1";
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView2)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion
        private System.Windows.Forms.DataGridView dataGridView1;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label forCustomerLbl;
        private System.Windows.Forms.DataGridView dataGridView2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.TextBox textBoxCustomersFN;
        private System.Windows.Forms.TextBox textBoxCustomersLN;
        private System.Windows.Forms.TextBox textBoxCustomersAddress;
        private System.Windows.Forms.TextBox textBoxCustomersPhone;
        private System.Windows.Forms.Button populateBtnOrders;
        private System.Windows.Forms.Button addNewOrderBtn;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.Label label8;
        private System.Windows.Forms.TextBox textBoxCustomersID;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label9;
        private System.Windows.Forms.Label label10;
        private System.Windows.Forms.Label label11;
        private System.Windows.Forms.Label label12;
        private System.Windows.Forms.Label label13;
        private System.Windows.Forms.Button updateOrderBtn;
        private System.Windows.Forms.Button deleteBtn;
        private System.Windows.Forms.CheckBox checkBoxCash;
        private System.Windows.Forms.CheckBox checkBoxCreditCard;
        private System.Windows.Forms.TextBox textBoxOrderOID;
        private System.Windows.Forms.TextBox textBoxOrderRestaurant;
        private System.Windows.Forms.TextBox textBoxOrderUID;
        private System.Windows.Forms.TextBox textBoxOrderTotal;
        private System.Windows.Forms.TextBox textBoxOrderTimeStamp;
    }
}

