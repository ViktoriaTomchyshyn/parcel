#pragma once
using namespace System::Runtime::InteropServices;
#include "NP.h"
namespace oopLab8 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	char *FirstName1;
	char *LastName1;
	char *Num1;
	long num1;
	char *City1;
	char *Street1;
	int NumOfHouse1;

	char *FirstName2;
	char *LastName2;
	char *Num2;
	long num2;
	char *City2;
	char *Street2;
	int NumOfHouse2;

	bool IsPaid = false;
	bool IsPaidSum = false;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Vidpravnyk;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Otrymuvatch;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Vidpravnyk = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Otrymuvatch = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(51, 53);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(148, 28);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(51, 114);
			this->textBox2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(148, 28);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(51, 177);
			this->textBox3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(148, 28);
			this->textBox3->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(250, 53);
			this->textBox4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(148, 28);
			this->textBox4->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(250, 114);
			this->textBox5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(148, 28);
			this->textBox5->TabIndex = 4;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(250, 177);
			this->textBox6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(148, 28);
			this->textBox6->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(46, 26);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 22);
			this->label1->TabIndex = 6;
			this->label1->Text = L"First name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(46, 87);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 22);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Last name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(46, 153);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(108, 22);
			this->label3->TabIndex = 8;
			this->label3->Text = L"NumOfMobile";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(246, 26);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(38, 22);
			this->label4->TabIndex = 9;
			this->label4->Text = L"City";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(246, 87);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(57, 22);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Street";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(246, 150);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(105, 22);
			this->label6->TabIndex = 11;
			this->label6->Text = L"NumOfHouse";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(501, 75);
			this->textBox7->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(148, 28);
			this->textBox7->TabIndex = 12;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(480, 48);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(62, 22);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Weight";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(480, 125);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(108, 22);
			this->label8->TabIndex = 14;
			this->label8->Text = L"PriceOfParcel";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(501, 153);
			this->textBox8->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(148, 28);
			this->textBox8->TabIndex = 15;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(726, 87);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(123, 22);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Sum for sending";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(730, 114);
			this->textBox9->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(148, 28);
			this->textBox9->TabIndex = 17;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightBlue;
			this->button1->Location = System::Drawing::Point(51, 255);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(150, 39);
			this->button1->TabIndex = 18;
			this->button1->Text = L"SaveVidpravnyk";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightBlue;
			this->button2->Location = System::Drawing::Point(240, 255);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(160, 39);
			this->button2->TabIndex = 19;
			this->button2->Text = L"SaveOtrymuvatch";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::LightBlue;
			this->button3->Location = System::Drawing::Point(488, 255);
			this->button3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(164, 39);
			this->button3->TabIndex = 20;
			this->button3->Text = L"Create parcel";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::LightBlue;
			this->button4->Location = System::Drawing::Point(730, 255);
			this->button4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(168, 39);
			this->button4->TabIndex = 21;
			this->button4->Text = L"Create perekaz";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(78, 357);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(49, 22);
			this->label10->TabIndex = 22;
			this->label10->Text = L"Price:";
			// 
			// textBox10
			// 
			this->textBox10->Enabled = false;
			this->textBox10->Location = System::Drawing::Point(82, 385);
			this->textBox10->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(148, 28);
			this->textBox10->TabIndex = 23;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(78, 455);
			this->label11->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(74, 22);
			this->label11->TabIndex = 24;
			this->label11->Text = L"Komisiya:";
			// 
			// textBox11
			// 
			this->textBox11->Enabled = false;
			this->textBox11->Location = System::Drawing::Point(82, 483);
			this->textBox11->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(148, 28);
			this->textBox11->TabIndex = 25;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Thistle;
			this->button5->Location = System::Drawing::Point(268, 385);
			this->button5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(112, 39);
			this->button5->TabIndex = 26;
			this->button5->Text = L"PayParcel";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Wheat;
			this->label12->Location = System::Drawing::Point(184, 418);
			this->label12->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(66, 22);
			this->label12->TabIndex = 27;
			this->label12->Text = L"not paid";
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Thistle;
			this->button6->Location = System::Drawing::Point(268, 432);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(112, 35);
			this->button6->TabIndex = 28;
			this->button6->Text = L"PaySum";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::PapayaWhip;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Vidpravnyk,
					this->Otrymuvatch
			});
			this->dataGridView1->Enabled = false;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::InactiveCaption;
			this->dataGridView1->Location = System::Drawing::Point(488, 331);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(410, 168);
			this->dataGridView1->TabIndex = 29;
			// 
			// Vidpravnyk
			// 
			this->Vidpravnyk->HeaderText = L"Vidpravnyk";
			this->Vidpravnyk->Name = L"Vidpravnyk";
			this->Vidpravnyk->Width = 183;
			// 
			// Otrymuvatch
			// 
			this->Otrymuvatch->HeaderText = L"Otrymuvatch";
			this->Otrymuvatch->Name = L"Otrymuvatch";
			this->Otrymuvatch->Width = 183;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 22);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FloralWhite;
			this->ClientSize = System::Drawing::Size(994, 569);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"NovaPoshta";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (CheckNull())
	{
		MessageBox::Show("Enter all data!");
		return;
	}
	dataGridView1->RowCount = 6;
	for (int i = 0; i < 6; i++) {
		dataGridView1->Rows[0]->HeaderCell->Value = Convert::ToString(i + 1);
	}
	String^ s1 = textBox1->Text;
	dataGridView1->Rows[0]->Cells[0]->Value = s1;
	IntPtr ptrToNativeString1 = Marshal::StringToHGlobalAnsi(s1);
	FirstName1 = static_cast<char*>(ptrToNativeString1.ToPointer());
	String^ s2 = textBox2->Text;
	dataGridView1->Rows[1]->Cells[0]->Value = s2;
	IntPtr ptrToNativeString2 = Marshal::StringToHGlobalAnsi(s2);
	LastName1 = static_cast<char*>(ptrToNativeString2.ToPointer());
	String^ s3 = textBox3->Text;
	dataGridView1->Rows[2]->Cells[0]->Value = s3;
	IntPtr ptrToNativeString3 = Marshal::StringToHGlobalAnsi(s3);
	Num1 = static_cast<char*>(ptrToNativeString3.ToPointer());
	num1 = Convert::ToInt64(s3);
	String^ s4 = textBox4->Text;
	dataGridView1->Rows[3]->Cells[0]->Value = s4;
	IntPtr ptrToNativeString4 = Marshal::StringToHGlobalAnsi(s4);
	City1 = static_cast<char*>(ptrToNativeString4.ToPointer());
	String^ s5 = textBox5->Text;
	dataGridView1->Rows[4]->Cells[0]->Value = s5;
	IntPtr ptrToNativeString5 = Marshal::StringToHGlobalAnsi(s5);
	Street1 = static_cast<char*>(ptrToNativeString5.ToPointer());
	NumOfHouse1 = System::Convert::ToInt16(textBox6->Text);
	dataGridView1->Rows[5]->Cells[0]->Value = Convert::ToString(NumOfHouse1);
	textBox1->Text = ""; textBox2->Text = "";
	textBox3->Text = ""; textBox4->Text = "";
	textBox5->Text = ""; textBox6->Text = "";
	//MessageBox::Show("Vidpravnyk was saved.");
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (CheckNull())
	{
		MessageBox::Show("Enter all data!");
		return;
	}
	dataGridView1->RowCount = 6;
	for (int i = 0; i < 6; i++) {
		dataGridView1->Rows[0]->HeaderCell->Value = Convert::ToString(i + 1);
	}
	String^ s1 = textBox1->Text;
	dataGridView1->Rows[0]->Cells[1]->Value = s1;
	IntPtr ptrToNativeString1 = Marshal::StringToHGlobalAnsi(s1);
	FirstName2 = static_cast<char*>(ptrToNativeString1.ToPointer());
	String^ s2 = textBox2->Text;
	dataGridView1->Rows[1]->Cells[1]->Value = s2;
	IntPtr ptrToNativeString2 = Marshal::StringToHGlobalAnsi(s2);
	LastName2 = static_cast<char*>(ptrToNativeString2.ToPointer());
	String^ s3 = textBox3->Text;
	dataGridView1->Rows[2]->Cells[1]->Value = s3;
	IntPtr ptrToNativeString3 = Marshal::StringToHGlobalAnsi(s3);
	Num2 = static_cast<char*>(ptrToNativeString3.ToPointer());
	num2 = Convert::ToInt64(s3);
	String^ s4 = textBox4->Text;
	dataGridView1->Rows[3]->Cells[1]->Value = s4;
	IntPtr ptrToNativeString4 = Marshal::StringToHGlobalAnsi(s4);
	City2 = static_cast<char*>(ptrToNativeString4.ToPointer());
	String^ s5 = textBox5->Text;
	dataGridView1->Rows[4]->Cells[1]->Value = s5;
	IntPtr ptrToNativeString5 = Marshal::StringToHGlobalAnsi(s5);
	Street2 = static_cast<char*>(ptrToNativeString5.ToPointer());
	NumOfHouse2 = System::Convert::ToInt16(textBox6->Text);
	dataGridView1->Rows[5]->Cells[1]->Value = Convert::ToString(NumOfHouse2);
	textBox1->Text = ""; textBox2->Text = "";
	textBox3->Text = ""; textBox4->Text = "";
	textBox5->Text = ""; textBox6->Text = "";
	//MessageBox::Show("Otrumyvatch was saved.");
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox7->Text->Equals(""))
	{
		MessageBox::Show("Enter at least weight!");
		return;
	}
	label12->Text = "not paid";
	label12->BackColor = System::Drawing::Color::Wheat;
	label12->Enabled = false;
	if (textBox8->Text == "") {
		parcel* p1 = new parcel;
		p1->SetVidpravnyk(FirstName1, LastName1, Num1, City1, Street1, NumOfHouse1);
		p1->SetOtr(FirstName2, LastName2, Num2, City2, Street2, NumOfHouse2);
		p1->SetWeight(System::Convert::ToDouble(textBox7->Text));
		textBox10->Text = System::Convert::ToString(p1->GetPrice());
		textBox11->Text = System::Convert::ToString(p1->GetPrice() - 40);
		if (IsPaid) {
			p1->Paying(true);
			label12->Text = "paid";
			label12->BackColor = System::Drawing::Color::Aqua;
			label12->Enabled = false;
			IsPaid = false;
		}
		p1->PrintToFile(num1,num2);
		p1->Delete();
	}
	else { 
		pricedParcel* p1 = new pricedParcel(); 
		p1->SetVidpravnyk(FirstName1, LastName1, Num1, City1, Street1, NumOfHouse1);
		p1->SetOtr(FirstName2, LastName2, Num2, City2, Street2, NumOfHouse2);
		p1->SetWeight(System::Convert::ToDouble(textBox7->Text));
		p1->SetParcelPrice(System::Convert::ToDouble(textBox8->Text));
		textBox10->Text = System::Convert::ToString(p1->GetPrice());
		textBox11->Text = System::Convert::ToString(p1->GetPrice() - 40);
		if (IsPaid) {
			p1->Paying(true);
			label12->Text = "paid";
			label12->BackColor = System::Drawing::Color::Aqua;
			label12->Enabled = false;
			IsPaid = false;
		}
		p1->PrintToFile(num1,num2);
		p1->Delete();
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox9->Text->Equals(""))
	{
		MessageBox::Show("Enter money!");
		return;
	}
	label12->Text = "not paid";
	label12->BackColor = System::Drawing::Color::Wheat;
	label12->Enabled = false;
	Perekaz* p = new Perekaz;
	p->SetV(FirstName1, LastName1, Num1, City1, Street1, NumOfHouse1);
	p->SetO(FirstName2, LastName2, Num2, City2, Street2, NumOfHouse2);
	p->SetMoney(System::Convert::ToDouble(textBox9->Text));
	textBox10->Text = System::Convert::ToString(p->GetAll());
	textBox11->Text = System::Convert::ToString(p->GetKomisiya());
	if (IsPaidSum) {
		p->Paying(true);
		label12->Text = "paid";
		label12->BackColor = System::Drawing::Color::Aqua;
		label12->Enabled = false;
		IsPaidSum = false;
	}
	p->PrintToFile(num1, num2);
	p->~Perekaz();
}
	   private: bool CheckNull()
	   {
		   if (textBox1->Text->Equals("") || textBox2->Text->Equals("") || textBox3->Text->Equals("")
			   || textBox4->Text->Equals("") || textBox5->Text->Equals("") || textBox6->Text->Equals(""))
			   return true;
		   return false;
	   }
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	IsPaid = true;
	button3->PerformClick();
	IsPaid = false;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	IsPaidSum = true;
	button4->PerformClick();
	IsPaidSum = false;
}
};
}
