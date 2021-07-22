#pragma once
#include "Header1.h"
#include<string>
namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form3 : public System::Windows::Forms::Form
	{
	public:
		Form3(void)
		{
			InitializeComponent();
			FillCombo();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::ComboBox^ comboBox1;




	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(522, 6);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(98, 22);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Log In";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form3::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(330, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 18);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Username:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(417, 6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(99, 20);
			this->textBox1->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(215, 62);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(14, 20);
			this->label3->TabIndex = 8;
			this->label3->Text = L"-";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(367, 64);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(18, 20);
			this->label5->TabIndex = 10;
			this->label5->Text = L"=";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(94, 64);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 11;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(252, 64);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 12;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(407, 64);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 13;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::LightSeaGreen;
			this->label2->Location = System::Drawing::Point(14, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 13);
			this->label2->TabIndex = 14;
			this->label2->Text = L"BMI:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(44, 6);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(33, 20);
			this->textBox5->TabIndex = 15;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(17, 217);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(87, 21);
			this->comboBox1->TabIndex = 21;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(6, 112);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 35);
			this->button1->TabIndex = 26;
			this->button1->Text = L"Monday";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form3::button1_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(126, 112);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(120, 35);
			this->button3->TabIndex = 27;
			this->button3->Text = L"Tuesday";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form3::button3_Click_1);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(252, 112);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(126, 35);
			this->button4->TabIndex = 28;
			this->button4->Text = L"Wednesday";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form3::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(384, 112);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(114, 35);
			this->button5->TabIndex = 29;
			this->button5->Text = L"Thursday";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form3::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(504, 112);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(121, 35);
			this->button6->TabIndex = 30;
			this->button6->Text = L"Friday";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form3::button6_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::LightSeaGreen;
			this->label4->Location = System::Drawing::Point(353, 284);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(178, 13);
			this->label4->TabIndex = 31;
			this->label4->Text = L"Daily Carbohydrate Consumption (g):";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::LightSeaGreen;
			this->label6->Location = System::Drawing::Point(383, 225);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(148, 13);
			this->label6->TabIndex = 32;
			this->label6->Text = L"Daily Protien Consumption (g):";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::LightSeaGreen;
			this->label7->Location = System::Drawing::Point(401, 254);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(130, 13);
			this->label7->TabIndex = 33;
			this->label7->Text = L"Daily Fat Consumption (g):";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(537, 218);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(66, 20);
			this->textBox6->TabIndex = 34;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(537, 251);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(66, 20);
			this->textBox7->TabIndex = 35;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(537, 281);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(66, 20);
			this->textBox8->TabIndex = 36;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(33, 158);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(68, 28);
			this->button7->TabIndex = 37;
			this->button7->Text = L"Update";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form3::button7_Click_1);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(153, 158);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(68, 28);
			this->button8->TabIndex = 38;
			this->button8->Text = L"Update";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form3::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(282, 158);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(68, 28);
			this->button9->TabIndex = 39;
			this->button9->Text = L"Update";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form3::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(405, 158);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(68, 28);
			this->button10->TabIndex = 40;
			this->button10->Text = L"Update";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form3::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(535, 158);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(68, 28);
			this->button11->TabIndex = 41;
			this->button11->Text = L"Update";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form3::button11_Click);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(126, 218);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(95, 20);
			this->textBox9->TabIndex = 42;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::LightSeaGreen;
			this->label8->Location = System::Drawing::Point(107, 44);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(70, 13);
			this->label8->TabIndex = 43;
			this->label8->Text = L"Daily Calories";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::LightSeaGreen;
			this->label9->Location = System::Drawing::Point(255, 44);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(97, 13);
			this->label9->TabIndex = 44;
			this->label9->Text = L"Consumed Calories";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::Color::LightSeaGreen;
			this->label10->Location = System::Drawing::Point(410, 44);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(97, 13);
			this->label10->TabIndex = 45;
			this->label10->Text = L"Remaining Calories";
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(486, 333);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(117, 21);
			this->button12->TabIndex = 46;
			this->button12->Text = L"Display in mg";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form3::button12_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::LightSeaGreen;
			this->label11->Location = System::Drawing::Point(41, 201);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(34, 13);
			this->label11->TabIndex = 47;
			this->label11->Text = L"Food:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::Color::LightSeaGreen;
			this->label12->Location = System::Drawing::Point(150, 202);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(58, 13);
			this->label12->TabIndex = 48;
			this->label12->Text = L"Serving(g):";
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(632, 396);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"Form3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Main Menu";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		try {
			String^ username = textBox1->Text;
			String^ constr1 = "Server=127.0.0.1;Uid=root;Pwd=;Database=user1_info;";
			MySqlConnection^ con1 = gcnew MySqlConnection(constr1);
			user tuser;
		
			String^ temp;
			MySqlCommand^ cmd = gcnew MySqlCommand("select * from user1infotbl WHERE username='" + username + "'", con1);
			con1->Open();
			MySqlDataReader^ dr1 = cmd->ExecuteReader();
			while (dr1->Read()) {


				temp = dr1->GetString(0);
				tuser.height = dr1->GetDouble(2);
				tuser.weight = dr1->GetDouble(3);
				tuser.bmi = tuser.bmicalc(tuser.height, tuser.weight);

				textBox5->Text = Convert::ToString(tuser.bmicalc(tuser.weight, tuser.height));
				if (username == temp) {
					MessageBox::Show("Welcome back, " + temp);
				}
				else
					MessageBox::Show("Incorrect Login Details");
			}
			con1->Close();
			}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		};

	private: void FillCombo(void) {
		String^ constr1 = "Server=127.0.0.1;Uid=root;Pwd=;Database=user1_info;";

		MySqlConnection^ con1 = gcnew MySqlConnection(constr1);
		MySqlCommand^ cmd = gcnew MySqlCommand("select * from food ", con1);
		con1->Open();
		MySqlDataReader^ dr1 = cmd->ExecuteReader();
		while (dr1->Read()) {
			String^ vname;
			vname = dr1->GetString(0);
			comboBox1->Items->Add(vname);

		}
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ constr0 = "Server=127.0.0.1;Uid=root;Pwd=;Database=user1_info;";
			MySqlConnection^ con0 = gcnew MySqlConnection(constr0);
			String^ temp = textBox1->Text;
			String^ temp1;
			MySqlCommand^ cmd = gcnew MySqlCommand("select * from monday WHERE username='" + temp + "'", con0);
			con0->Open();
			MySqlDataReader^ dr1 = cmd->ExecuteReader();
			while (dr1->Read()) {
				textBox6->Text = dr1->GetString(4);
				textBox7->Text = dr1->GetString(5);
				textBox8->Text = dr1->GetString(6);


			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		
		try {
			String^ constr1 = "Server=127.0.0.1;Uid=root;Pwd=;Database=user1_info;";
			MySqlConnection^ con1 = gcnew MySqlConnection(constr1);
			String^ temp = textBox1->Text;
			String^ temp1;
			MySqlCommand^ cmd = gcnew MySqlCommand("select * from monday WHERE username='" + temp + "'", con1);
			con1->Open();
			MySqlDataReader^ dr1 = cmd->ExecuteReader();
			while (dr1->Read()) {
				textBox2->Text = dr1->GetString(1);
				textBox3->Text = dr1->GetString(2);
				textBox4->Text = dr1->GetString(3);
				}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
		   private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
			   try {
				   String^ constr0 = "Server=127.0.0.1;Uid=root;Pwd=;Database=user1_info;";
				   MySqlConnection^ con0 = gcnew MySqlConnection(constr0);
				   String^ temp = textBox1->Text;
				   String^ temp1;
				   MySqlCommand^ cmd = gcnew MySqlCommand("select * from tuesday WHERE username='" + temp + "'", con0);
				   con0->Open();
				   MySqlDataReader^ dr1 = cmd->ExecuteReader();
				   while (dr1->Read()) {
					   textBox6->Text = dr1->GetString(4);
					   textBox7->Text = dr1->GetString(5);
					   textBox8->Text = dr1->GetString(6);


				   }
			   }
			   catch (Exception^ ex) {
				   MessageBox::Show(ex->Message);
			   }

			   try {
				   String^ constr1 = "Server=127.0.0.1;Uid=root;Pwd=;Database=user1_info;";
				   MySqlConnection^ con1 = gcnew MySqlConnection(constr1);
				   String^ temp = textBox1->Text;
				   String^ temp1;
				   MySqlCommand^ cmd = gcnew MySqlCommand("select * from tuesday WHERE username='" + temp + "'", con1);
				   con1->Open();
				   MySqlDataReader^ dr1 = cmd->ExecuteReader();
				   while (dr1->Read()) {
					   textBox2->Text = dr1->GetString(1);
					   textBox3->Text = dr1->GetString(2);
					   textBox4->Text = dr1->GetString(3);


				   }
			   }
			   catch (Exception^ ex) {
				   MessageBox::Show(ex->Message);
			   }
		   }

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ constr0 = "Server=127.0.0.1;Uid=root;Pwd=;Database=user1_info;";
			MySqlConnection^ con0 = gcnew MySqlConnection(constr0);
			String^ temp = textBox1->Text;
			String^ temp1;
			MySqlCommand^ cmd = gcnew MySqlCommand("select * from wednesday WHERE username='" + temp + "'", con0);
			con0->Open();
			MySqlDataReader^ dr1 = cmd->ExecuteReader();
			while (dr1->Read()) {
				textBox6->Text = dr1->GetString(4);
				textBox7->Text = dr1->GetString(5);
				textBox8->Text = dr1->GetString(6);


			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

		try {
			String^ constr1 = "Server=127.0.0.1;Uid=root;Pwd=;Database=user1_info;";
			MySqlConnection^ con1 = gcnew MySqlConnection(constr1);
			String^ temp = textBox1->Text;
			String^ temp1;
			MySqlCommand^ cmd = gcnew MySqlCommand("select * from wednesday WHERE username='" + temp + "'", con1);
			con1->Open();
			MySqlDataReader^ dr1 = cmd->ExecuteReader();
			while (dr1->Read()) {
				textBox2->Text = dr1->GetString(1);
				textBox3->Text = dr1->GetString(2);
				textBox4->Text = dr1->GetString(3);


			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ constr0 = "Server=127.0.0.1;Uid=root;Pwd=;Database=user1_info;";
			MySqlConnection^ con0 = gcnew MySqlConnection(constr0);
			String^ temp = textBox1->Text;
			String^ temp1;
			MySqlCommand^ cmd = gcnew MySqlCommand("select * from thursday WHERE username='" + temp + "'", con0);
			con0->Open();
			MySqlDataReader^ dr1 = cmd->ExecuteReader();
			while (dr1->Read()) {
				textBox6->Text = dr1->GetString(4);
				textBox7->Text = dr1->GetString(5);
				textBox8->Text = dr1->GetString(6);


			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

		try {
			String^ constr1 = "Server=127.0.0.1;Uid=root;Pwd=;Database=user1_info;";
			MySqlConnection^ con1 = gcnew MySqlConnection(constr1);
			String^ temp = textBox1->Text;
			String^ temp1;
			MySqlCommand^ cmd = gcnew MySqlCommand("select * from thursday WHERE username='" + temp + "'", con1);
			con1->Open();
			MySqlDataReader^ dr1 = cmd->ExecuteReader();
			while (dr1->Read()) {
				textBox2->Text = dr1->GetString(1);
				textBox3->Text = dr1->GetString(2);
				textBox4->Text = dr1->GetString(3);


			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ constr0 = "Server=127.0.0.1;Uid=root;Pwd=;Database=user1_info;";
			MySqlConnection^ con0 = gcnew MySqlConnection(constr0);
			String^ temp = textBox1->Text;
			String^ temp1;
			MySqlCommand^ cmd = gcnew MySqlCommand("select * from friday WHERE username='" + temp + "'", con0);
			con0->Open();
			MySqlDataReader^ dr1 = cmd->ExecuteReader();
			while (dr1->Read()) {
				textBox6->Text = dr1->GetString(4);
				textBox7->Text = dr1->GetString(5);
				textBox8->Text = dr1->GetString(6);


			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

		try {
			String^ constr1 = "Server=127.0.0.1;Uid=root;Pwd=;Database=user1_info;";
			MySqlConnection^ con1 = gcnew MySqlConnection(constr1);
			String^ temp = textBox1->Text;
			String^ temp1;
			MySqlCommand^ cmd = gcnew MySqlCommand("select * from friday WHERE username='" + temp + "'", con1);
			con1->Open();
			MySqlDataReader^ dr1 = cmd->ExecuteReader();
			while (dr1->Read()) {
				textBox2->Text = dr1->GetString(1);
				textBox3->Text = dr1->GetString(2);
				textBox4->Text = dr1->GetString(3);


			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		
;
	}
		   ;
	private: System::Void button7_Click_1(System::Object^ sender, System::EventArgs^ e) {
		try {
			updatebtn up7;
			String^ constr1 = "Server=127.0.0.1;Uid=root;Pwd=;Database=user1_info;";
			MySqlConnection^ con1 = gcnew MySqlConnection(constr1);
			String^ temp = comboBox1->Text;
			String^ temp1;
			up7.pro;
			up7.fat;
			up7.carb;
		    up7.cal;
			up7.serving;
		
			MySqlCommand^ cmd = gcnew MySqlCommand("select * from food WHERE Food='" + temp + "'", con1);
			con1->Open();

			MySqlDataReader^ dr1 = cmd->ExecuteReader();
			while (dr1->Read()) {
				up7.cal = Convert::ToDouble(dr1->GetString(1));
				up7.pro = Convert::ToDouble(dr1->GetString(2));
				up7.fat = Convert::ToDouble(dr1->GetString(3));
				up7.carb = Convert::ToDouble(dr1->GetString(4));


	
				
			}
			con1->Close();
	
			try {
			up7.serving = Convert::ToDouble(textBox9->Text);
			
			user tuser;
			
			String^ tname = textBox1->Text;
			up7.dailycal;
			up7.concal;
			up7.remcal;
			up7.curpro;
			up7.curfat;
			up7.curcarb;
			try {
				MySqlCommand^ cmd = gcnew MySqlCommand("select * from monday WHERE username='" + tname + "'", con1);
				con1->Open();

				MySqlDataReader^ dr8 = cmd->ExecuteReader();
				while (dr8->Read()) {
					up7.concal = Convert::ToDouble(dr8->GetString(2));
					up7.dailycal= Convert::ToDouble(dr8->GetString(1));
				}con1->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
			
			tuser.upcal = tuser.addto(up7.cal, up7.serving);
			tuser.uppro = tuser.addto(up7.pro, up7.serving);
			tuser.upfat = tuser.addto(up7.fat, up7.serving);
			tuser.upcarb = tuser.addto(up7.carb, up7.serving);

			String^ ncc = Convert::ToString(tuser.upcal + up7.concal);
			String^ nrc = Convert::ToString(up7.dailycal - (tuser.upcal + up7.concal));
			String^ npro = Convert::ToString(tuser.uppro + up7.pro);
			String^ nfat = Convert::ToString(tuser.upfat + up7.fat);
			String^ ncarb = Convert::ToString(tuser.upcarb + up7.carb);


			


			MySqlCommand^ cmd = gcnew MySqlCommand("update monday set concal='" + ncc + "', remcal='" + nrc + "',dpro='" + npro + "',dfat='" + nfat + "',dcarb='" + ncarb + "' WHERE username='" + tname + "'", con1);
			con1->Open();
			MySqlDataReader^ dr4 = cmd->ExecuteReader();
			con1->Close();
		

		}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

	}


private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		updatebtn up7;
		String^ constr1 = "Server=127.0.0.1;Uid=root;Pwd=;Database=user1_info;";
		MySqlConnection^ con1 = gcnew MySqlConnection(constr1);
		String^ temp = comboBox1->Text;
		String^ temp1;
		up7.pro;
		up7.fat;
		up7.carb;
		up7.cal;
		up7.serving;
		
		MySqlCommand^ cmd = gcnew MySqlCommand("select * from food WHERE Food='" + temp + "'", con1);
		con1->Open();

		MySqlDataReader^ dr1 = cmd->ExecuteReader();
		while (dr1->Read()) {
			up7.cal = Convert::ToDouble(dr1->GetString(1));
			up7.pro = Convert::ToDouble(dr1->GetString(2));
			up7.fat = Convert::ToDouble(dr1->GetString(3));
			up7.carb = Convert::ToDouble(dr1->GetString(4));



		}
		con1->Close();

		try {
			up7.serving = Convert::ToDouble(textBox9->Text);

			user tuser;

			String^ tname = textBox1->Text;
			up7.dailycal;
			up7.concal;
			up7.remcal;
			up7.curpro;
			up7.curfat;
			up7.curcarb;
			try {
				MySqlCommand^ cmd = gcnew MySqlCommand("select * from tuesday WHERE username='" + tname + "'", con1);
				con1->Open();

				MySqlDataReader^ dr8 = cmd->ExecuteReader();
				while (dr8->Read()) {
					up7.concal = Convert::ToDouble(dr8->GetString(2));
					up7.dailycal = Convert::ToDouble(dr8->GetString(1));
				}con1->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
			tuser.upcal = tuser.addto(up7.cal, up7.serving);
			tuser.uppro = tuser.addto(up7.pro, up7.serving);
			tuser.upfat = tuser.addto(up7.fat, up7.serving);
			tuser.upcarb = tuser.addto(up7.carb, up7.serving);

			String^ ncc = Convert::ToString(tuser.upcal + up7.concal);
			String^ nrc = Convert::ToString(up7.dailycal - (tuser.upcal + up7.concal));
			String^ npro = Convert::ToString(tuser.uppro + up7.pro);
			String^ nfat = Convert::ToString(tuser.upfat + up7.fat);
			String^ ncarb = Convert::ToString(tuser.upcarb + up7.carb);





			MySqlCommand^ cmd = gcnew MySqlCommand("update tuesday set concal='" + ncc + "', remcal='" + nrc + "',dpro='" + npro + "',dfat='" + nfat + "',dcarb='" + ncarb + "' WHERE username='" + tname + "'", con1);
			con1->Open();
			MySqlDataReader^ dr4 = cmd->ExecuteReader();
			con1->Close();
	


		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}

private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		updatebtn up7;
		String^ constr1 = "Server=127.0.0.1;Uid=root;Pwd=;Database=user1_info;";
		MySqlConnection^ con1 = gcnew MySqlConnection(constr1);
		String^ temp = comboBox1->Text;
		String^ temp1;
		up7.pro;
		up7.fat;
		up7.carb;
		up7.cal;
		up7.serving;
		MySqlCommand^ cmd = gcnew MySqlCommand("select * from food WHERE Food='" + temp + "'", con1);
		con1->Open();

		MySqlDataReader^ dr1 = cmd->ExecuteReader();
		while (dr1->Read()) {
			up7.cal = Convert::ToDouble(dr1->GetString(1));
			up7.pro = Convert::ToDouble(dr1->GetString(2));
			up7.fat = Convert::ToDouble(dr1->GetString(3));
			up7.carb = Convert::ToDouble(dr1->GetString(4));


	
		}
		con1->Close();

		try {
			up7.serving = Convert::ToDouble(textBox9->Text);

			user tuser;

			String^ tname = textBox1->Text;
			up7.dailycal;
			up7.concal;
			up7.remcal;
			up7.curpro;
			up7.curfat;
			up7.curcarb;
			try {
				MySqlCommand^ cmd = gcnew MySqlCommand("select * from wednesday WHERE username='" + tname + "'", con1);
				con1->Open();

				MySqlDataReader^ dr8 = cmd->ExecuteReader();
				while (dr8->Read()) {
					up7.concal = Convert::ToDouble(dr8->GetString(2));
					up7.dailycal = Convert::ToDouble(dr8->GetString(1));
				}con1->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
			tuser.upcal = tuser.addto(up7.cal, up7.serving);
			tuser.uppro = tuser.addto(up7.pro, up7.serving);
			tuser.upfat = tuser.addto(up7.fat, up7.serving);
			tuser.upcarb = tuser.addto(up7.carb, up7.serving);

			String^ ncc = Convert::ToString(tuser.upcal + up7.concal);
			String^ nrc = Convert::ToString(up7.dailycal - (tuser.upcal + up7.concal));
			String^ npro = Convert::ToString(tuser.uppro + up7.pro);
			String^ nfat = Convert::ToString(tuser.upfat + up7.fat);
			String^ ncarb = Convert::ToString(tuser.upcarb + up7.carb);





			MySqlCommand^ cmd = gcnew MySqlCommand("update wednesday set concal='" + ncc + "', remcal='" + nrc + "',dpro='" + npro + "',dfat='" + nfat + "',dcarb='" + ncarb + "' WHERE username='" + tname + "'", con1);
			con1->Open();
			MySqlDataReader^ dr4 = cmd->ExecuteReader();
			con1->Close();
		

		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		updatebtn up7;
		String^ constr1 = "Server=127.0.0.1;Uid=root;Pwd=;Database=user1_info;";
		MySqlConnection^ con1 = gcnew MySqlConnection(constr1);
		String^ temp = comboBox1->Text;
		String^ temp1;
		up7.pro;
		up7.fat;
		up7.carb;
		up7.cal;
		up7.serving;
		MySqlCommand^ cmd = gcnew MySqlCommand("select * from food WHERE Food='" + temp + "'", con1);
		con1->Open();

		MySqlDataReader^ dr1 = cmd->ExecuteReader();
		while (dr1->Read()) {
			up7.cal = Convert::ToDouble(dr1->GetString(1));
			up7.pro = Convert::ToDouble(dr1->GetString(2));
			up7.fat = Convert::ToDouble(dr1->GetString(3));
			up7.carb = Convert::ToDouble(dr1->GetString(4));


	

		}
		con1->Close();

		try {
			up7.serving = Convert::ToDouble(textBox9->Text);

			user tuser;

			String^ tname = textBox1->Text;
			up7.dailycal;
			up7.concal;
			up7.remcal;
			up7.curpro;
			up7.curfat;
			up7.curcarb;
			try {
				MySqlCommand^ cmd = gcnew MySqlCommand("select * from thursday WHERE username='" + tname + "'", con1);
				con1->Open();

				MySqlDataReader^ dr8 = cmd->ExecuteReader();
				while (dr8->Read()) {
					up7.concal = Convert::ToDouble(dr8->GetString(2));
					up7.dailycal = Convert::ToDouble(dr8->GetString(1));
				}con1->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
			tuser.upcal = tuser.addto(up7.cal, up7.serving);
			tuser.uppro = tuser.addto(up7.pro, up7.serving);
			tuser.upfat = tuser.addto(up7.fat, up7.serving);
			tuser.upcarb = tuser.addto(up7.carb, up7.serving);

			String^ ncc = Convert::ToString(tuser.upcal + up7.concal);
			String^ nrc = Convert::ToString(up7.dailycal - (tuser.upcal + up7.concal));
			String^ npro = Convert::ToString(tuser.uppro + up7.pro);
			String^ nfat = Convert::ToString(tuser.upfat + up7.fat);
			String^ ncarb = Convert::ToString(tuser.upcarb + up7.carb);





			MySqlCommand^ cmd = gcnew MySqlCommand("update thursday set concal='" + ncc + "', remcal='" + nrc + "',dpro='" + npro + "',dfat='" + nfat + "',dcarb='" + ncarb + "' WHERE username='" + tname + "'", con1);
			con1->Open();
			MySqlDataReader^ dr4 = cmd->ExecuteReader();
			con1->Close();
		

		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		updatebtn up7;
		String^ constr1 = "Server=127.0.0.1;Uid=root;Pwd=;Database=user1_info;";
		MySqlConnection^ con1 = gcnew MySqlConnection(constr1);
		String^ temp = comboBox1->Text;
		String^ temp1;
		up7.pro;
		up7.fat;
		up7.carb;
		up7.cal;
		up7.serving;
		MySqlCommand^ cmd = gcnew MySqlCommand("select * from food WHERE Food='" + temp + "'", con1);
		con1->Open();

		MySqlDataReader^ dr1 = cmd->ExecuteReader();
		while (dr1->Read()) {
			up7.cal = Convert::ToDouble(dr1->GetString(1));
			up7.pro = Convert::ToDouble(dr1->GetString(2));
			up7.fat = Convert::ToDouble(dr1->GetString(3));
			up7.carb = Convert::ToDouble(dr1->GetString(4));


	

		}
		con1->Close();

		try {
			up7.serving = Convert::ToDouble(textBox9->Text);

			user tuser;

			String^ tname = textBox1->Text;
			up7.dailycal;
			up7.concal;
			up7.remcal;
			up7.curpro;
			up7.curfat;
			up7.curcarb;
			try {
				MySqlCommand^ cmd = gcnew MySqlCommand("select * from friday WHERE username='" + tname + "'", con1);
				con1->Open();

				MySqlDataReader^ dr8 = cmd->ExecuteReader();
				while (dr8->Read()) {
					up7.concal = Convert::ToDouble(dr8->GetString(2));
					up7.dailycal = Convert::ToDouble(dr8->GetString(1));
				}con1->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}	
			tuser.upcal = tuser.addto(up7.cal, up7.serving);
			tuser.uppro = tuser.addto(up7.pro, up7.serving);
			tuser.upfat = tuser.addto(up7.fat, up7.serving);
			tuser.upcarb = tuser.addto(up7.carb, up7.serving);

			String^ ncc = Convert::ToString(tuser.upcal + up7.concal);
			String^ nrc = Convert::ToString(up7.dailycal - (tuser.upcal + up7.concal));
			String^ npro = Convert::ToString(tuser.uppro + up7.pro);
			String^ nfat = Convert::ToString(tuser.upfat + up7.fat);
			String^ ncarb = Convert::ToString(tuser.upcarb + up7.carb);





			MySqlCommand^ cmd = gcnew MySqlCommand("update friday set concal='" + ncc + "', remcal='" + nrc + "',dpro='" + npro + "',dfat='" + nfat + "',dcarb='" + ncarb + "' WHERE username='" + tname + "'", con1);
			con1->Open();
			MySqlDataReader^ dr4 = cmd->ExecuteReader();
			con1->Close();
			


		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	
	conversion tuser;
	 tuser.val = Convert::ToDouble(textBox6->Text);
	tuser.val2;
	tuser.convert(tuser.val);
	tuser.val2 = tuser.temp;
	textBox6->Text = Convert::ToString(tuser.val2);

	tuser.val = Convert::ToDouble(textBox7->Text);
	tuser.val2;
	tuser.convert(tuser.val);
	tuser.val2 = tuser.temp;
	textBox7->Text = Convert::ToString(tuser.val2);

	tuser.val = Convert::ToDouble(textBox8->Text);
	tuser.val2;
	tuser.convert(tuser.val);
	tuser.val2 = tuser.temp;
	textBox8->Text = Convert::ToString(tuser.val2);
	

}
};
}

