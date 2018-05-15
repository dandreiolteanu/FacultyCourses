namespace SGBD
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
            this.ShopView = new System.Windows.Forms.DataGridView();
            this.PopulateButton = new System.Windows.Forms.Button();
            this.label3 = new System.Windows.Forms.Label();
            this.folderBrowserDialog1 = new System.Windows.Forms.FolderBrowserDialog();
            this.button2 = new System.Windows.Forms.Button();
            this.EmployeeView = new System.Windows.Forms.DataGridView();
            this.OfficeView = new System.Windows.Forms.DataGridView();
            this.CarView = new System.Windows.Forms.DataGridView();
            ((System.ComponentModel.ISupportInitialize)(this.ShopView)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.EmployeeView)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.OfficeView)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.CarView)).BeginInit();
            this.SuspendLayout();
            // 
            // ShopView
            // 
            this.ShopView.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.ShopView.Location = new System.Drawing.Point(37, 59);
            this.ShopView.Name = "ShopView";
            this.ShopView.RowTemplate.Height = 24;
            this.ShopView.Size = new System.Drawing.Size(243, 568);
            this.ShopView.TabIndex = 0;
            // 
            // PopulateButton
            // 
            this.PopulateButton.Font = new System.Drawing.Font("Microsoft Sans Serif", 12.10084F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.PopulateButton.Location = new System.Drawing.Point(37, 668);
            this.PopulateButton.Name = "PopulateButton";
            this.PopulateButton.Size = new System.Drawing.Size(243, 49);
            this.PopulateButton.TabIndex = 1;
            this.PopulateButton.Text = "Populate";
            this.PopulateButton.UseVisualStyleBackColor = true;
            this.PopulateButton.Click += new System.EventHandler(this.button1_Click);
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Microsoft Sans Serif", 12.10084F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label3.Location = new System.Drawing.Point(101, 31);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(108, 25);
            this.label3.TabIndex = 7;
            this.label3.Text = "Car stores:";
            this.label3.Click += new System.EventHandler(this.label3_Click);
            // 
            // button2
            // 
            this.button2.Font = new System.Drawing.Font("Microsoft Sans Serif", 12.10084F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.button2.Location = new System.Drawing.Point(421, 31);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(144, 61);
            this.button2.TabIndex = 14;
            this.button2.Text = "Display information";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click_1);
            // 
            // EmployeeView
            // 
            this.EmployeeView.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.EmployeeView.Location = new System.Drawing.Point(316, 448);
            this.EmployeeView.Name = "EmployeeView";
            this.EmployeeView.RowTemplate.Height = 24;
            this.EmployeeView.Size = new System.Drawing.Size(405, 260);
            this.EmployeeView.TabIndex = 15;
            this.EmployeeView.CellContentClick += new System.Windows.Forms.DataGridViewCellEventHandler(this.EmployeeView_CellContentClick);
            // 
            // OfficeView
            // 
            this.OfficeView.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.OfficeView.Location = new System.Drawing.Point(763, 31);
            this.OfficeView.Name = "OfficeView";
            this.OfficeView.RowTemplate.Height = 24;
            this.OfficeView.Size = new System.Drawing.Size(405, 415);
            this.OfficeView.TabIndex = 16;
            // 
            // CarView
            // 
            this.CarView.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.CarView.Location = new System.Drawing.Point(316, 124);
            this.CarView.Name = "CarView";
            this.CarView.RowTemplate.Height = 24;
            this.CarView.Size = new System.Drawing.Size(405, 279);
            this.CarView.TabIndex = 13;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1591, 746);
            this.Controls.Add(this.CarView);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.OfficeView);
            this.Controls.Add(this.EmployeeView);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.PopulateButton);
            this.Controls.Add(this.ShopView);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            ((System.ComponentModel.ISupportInitialize)(this.ShopView)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.EmployeeView)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.OfficeView)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.CarView)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.DataGridView ShopView;
        private System.Windows.Forms.Button PopulateButton;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.FolderBrowserDialog folderBrowserDialog1;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.DataGridView EmployeeView;
        private System.Windows.Forms.DataGridView OfficeView;
        private System.Windows.Forms.DataGridView CarView;
        private System.Windows.Forms.GroupBox groupBox4;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.Label label8;
        private System.Windows.Forms.Button button3;
        private System.Windows.Forms.TextBox UpdateNewPrice;
        private System.Windows.Forms.TextBox UpdateCarID;
        private System.Windows.Forms.GroupBox groupBox3;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.TextBox DeleteCarID;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.Label label14;
        private System.Windows.Forms.TextBox AddCarStoreID;
        private System.Windows.Forms.Label label13;
        private System.Windows.Forms.TextBox AddCarHorsePower;
        private System.Windows.Forms.Label label12;
        private System.Windows.Forms.TextBox AddCarFabricationDate;
        private System.Windows.Forms.Label label11;
        private System.Windows.Forms.TextBox AddCarEngineCapacity;
        private System.Windows.Forms.Label label10;
        private System.Windows.Forms.TextBox AddCarColor;
        private System.Windows.Forms.Label label9;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.TextBox AddCarPrice;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button AddButton;
        private System.Windows.Forms.TextBox AddCarModel;
        private System.Windows.Forms.TextBox AddCarID;
    }
}

