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
            this.button1 = new System.Windows.Forms.Button();
            this.label7 = new System.Windows.Forms.Label();
            this.label8 = new System.Windows.Forms.Label();
            this.textBoxCustomersID = new System.Windows.Forms.TextBox();
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
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(1104, 427);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(189, 51);
            this.button1.TabIndex = 14;
            this.button1.Text = "Add new Order";
            this.button1.UseVisualStyleBackColor = true;
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
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(12F, 25F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.AutoSize = true;
            this.ClientSize = new System.Drawing.Size(2402, 1229);
            this.Controls.Add(this.textBoxCustomersID);
            this.Controls.Add(this.label8);
            this.Controls.Add(this.label7);
            this.Controls.Add(this.button1);
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
            this.Text = "Form1";
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
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.Label label8;
        private System.Windows.Forms.TextBox textBoxCustomersID;
    }
}

