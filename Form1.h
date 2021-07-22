#pragma once
#include "Form2.h"
#include "pch.h"
#include "vio.h"
#include "Header1.h"
#include "Form3.h"

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
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::TextBox^ textBox3;

	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;





























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
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(262, 130);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(101, 20);
			this->textBox3->TabIndex = 2;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(262, 182);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(101, 20);
			this->textBox5->TabIndex = 4;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(262, 208);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(101, 20);
			this->textBox6->TabIndex = 5;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(198, 133);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Username:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(211, 158);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Gender:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(192, 185);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Height (cm):";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(192, 211);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Weight (Kg):";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(192, 237);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(66, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Body Fat (%)";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Male", L"Female" });
			this->comboBox1->Location = System::Drawing::Point(262, 155);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(101, 21);
			this->comboBox1->TabIndex = 12;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"10-14", L"15-20", L"21-28", L"Over 28" });
			this->comboBox2->Location = System::Drawing::Point(262, 234);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(101, 21);
			this->comboBox2->TabIndex = 13;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Gill Sans MT", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Turquoise;
			this->label6->Location = System::Drawing::Point(174, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(225, 48);
			this->label6->TabIndex = 14;
			this->label6->Text = L"WELCOME!";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(146, 72);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(291, 24);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Take a Moment to Insert Your Info";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 274);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(145, 27);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Already a User\? Sign in!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(442, 274);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(116, 27);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Next";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(442, 234);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(116, 27);
			this->button3->TabIndex = 18;
			this->button3->Text = L"Create User";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(586, 313);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox3);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calorie App";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}



	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Form3^ f2 = gcnew Form3();
		f2->ShowDialog();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Form3^ f2 = gcnew Form3();
		f2->ShowDialog();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=user1_info;";
			MySqlConnection^ con = gcnew MySqlConnection(constr);


			String^ username = textBox3->Text;
			String^ gender = comboBox1->Text;
			double weight = Convert::ToDouble(textBox6->Text);
			double height = Convert::ToDouble(textBox5->Text);
			String^ bodyfat = comboBox2->Text;

	

			MySqlCommand^ cmd1 = gcnew MySqlCommand("insert into user1infotbl values('" + username + "','" + gender + "'," + height + "," + weight + ",'" + bodyfat + "')", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd1->ExecuteReader();
			MessageBox::Show("User info saved");
		
			con->Close();




		}

		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);

		}
		
		try {
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=user1_info;";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
					
			String^ fatmul;
			String^ genmul;


			String^ username = textBox3->Text;
			MySqlCommand^ cmd1 = gcnew MySqlCommand("insert into macrotable values('" + username + "','"+fatmul+"','"+genmul+"')", con);
			MySqlDataReader^ dr;
			con->Open();
			dr = cmd1->ExecuteReader();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

		
		try {
		
			String^ username = textBox3->Text;
			String^ genm = "Male";
			String^ genf = "Female";
			String^ malemul = "1";
			String^ femmul = "0,9";

			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=user1_info;";
			MySqlConnection^ con = gcnew MySqlConnection(constr);

			MySqlCommand^ cmd = gcnew MySqlCommand("select * from user1infotbl WHERE username='" + username + "'", con);
			con->Open();
			MySqlDataReader^ dr = cmd->ExecuteReader();
			while(dr->Read()) {//while the datareader is reading the values
				if ( genm == dr->GetString(1)) {
					try {
						String^ constr23 = "Server=127.0.0.1;Uid=root;Pwd=;Database=user1_info;";
						MySqlConnection^ con23 = gcnew MySqlConnection(constr23);
						MySqlCommand^ cmd = gcnew MySqlCommand("update macrotable set genmul='" + malemul + "' WHERE username='" + username + "'", con23);
						con23->Open();
						MySqlDataReader^ dr1 = cmd->ExecuteReader();
						con23->Close();

						
					}
					catch (Exception^ ex) {
						MessageBox::Show(ex->Message);
					}
				}
				else {
					try {
						String^ constr24 = "Server=127.0.0.1;Uid=root;Pwd=;Database=user1_info;";
						MySqlConnection^ con24 = gcnew MySqlConnection(constr24);
						MySqlCommand^ cmd = gcnew MySqlCommand("update macrotable set genmul='" + femmul + "' WHERE username='" + username + "'", con24);
						con24->Open();
						MySqlDataReader^ dr4 = cmd->ExecuteReader();
						con24->Close();

						
					}
					catch (Exception^ ex) {
						MessageBox::Show(ex->Message);
					}

				}
			
				
			
			}
			con->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}

		try {

			String^ username = textBox3->Text;
			String^ bf1 = "10-14";
			String^ bf2 = "15-20";
			String^ bf3 = "21-28";
			String^ bf4 = "Over 28";
			String^ fatmul1 = "1";
			String^ fatmul2 = "0,95";
			String^ fatmul3 = "0,90";
			String^ fatmul4 = "0,85";

			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=user1_info;";
			MySqlConnection^ con = gcnew MySqlConnection(constr);

			MySqlCommand^ cmd = gcnew MySqlCommand("select * from user1infotbl WHERE username='" + username + "'", con);
			con->Open();
			MySqlDataReader^ dr = cmd->ExecuteReader();
			while (dr->Read()) {//while the datareader is reading the values
				if (bf1 == dr->GetString(4)) {
					try {
						String^ constr23 = "Server=127.0.0.1;Uid=root;Pwd=;Database=user1_info;";
						MySqlConnection^ con23 = gcnew MySqlConnection(constr23);
						MySqlCommand^ cmd = gcnew MySqlCommand("update macrotable set fatmul='" + fatmul1 + "' WHERE username='" + username + "'", con23);
						con23->Open();
						MySqlDataReader^ dr1 = cmd->ExecuteReader();
						con23->Close();


					}
					catch (Exception^ ex) {
						MessageBox::Show(ex->Message);
					}
				}
				else if(dr->GetString(4)==bf2){
					try {
						String^ constr24 = "Server=127.0.0.1;Uid=root;Pwd=;Database=user1_info;";
						MySqlConnection^ con24 = gcnew MySqlConnection(constr24);
						MySqlCommand^ cmd = gcnew MySqlCommand("update macrotable set fatmul='" + fatmul2 + "' WHERE username='" + username + "'", con24);
						con24->Open();
						MySqlDataReader^ dr4 = cmd->ExecuteReader();
						con24->Close();


					}
					catch (Exception^ ex) {
						MessageBox::Show(ex->Message);
					}

				}
				else if (dr->GetString(4) == bf3) {
					try {
						String^ constr24 = "Server=127.0.0.1;Uid=root;Pwd=;Database=user1_info;";
						MySqlConnection^ con24 = gcnew MySqlConnection(constr24);
						MySqlCommand^ cmd = gcnew MySqlCommand("update macrotable set fatmul='" + fatmul3 + "' WHERE username='" + username + "'", con24);
						con24->Open();
						MySqlDataReader^ dr4 = cmd->ExecuteReader();
						con24->Close();


					}
					catch (Exception^ ex) {
						MessageBox::Show(ex->Message);
					}

				}
				else if (dr->GetString(4) == bf4) {
					try {
						String^ constr24 = "Server=127.0.0.1;Uid=root;Pwd=;Database=user1_info;";
						MySqlConnection^ con24 = gcnew MySqlConnection(constr24);
						MySqlCommand^ cmd = gcnew MySqlCommand("update macrotable set fatmul='" + fatmul4 + "' WHERE username='" + username + "'", con24);
						con24->Open();
						MySqlDataReader^ dr4 = cmd->ExecuteReader();
						con24->Close();


					}
					catch (Exception^ ex) {
						MessageBox::Show(ex->Message);
					}

				}


			}
			con->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		try {
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=user1_info;";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			String^ temp1;
			String^ temp2;

			try {
				user newuser;
				newuser.weight = Convert::ToDouble(textBox6->Text);
				String^ username = textBox3->Text;
				String^ constr1 = "Server=127.0.0.1;Uid=root;Pwd=;Database=user1_info;";
				MySqlConnection^ con1 = gcnew MySqlConnection(constr1);
				MySqlCommand^ cmd = gcnew MySqlCommand("select * from macrotable WHERE username='" + username + "'", con1);
				con1->Open();
				MySqlDataReader^ dr1 = cmd->ExecuteReader();

				while (dr1->Read()) {
					temp1= dr1->GetString(2);
					temp2= dr1->GetString(1);
					newuser.genmul = Convert::ToDouble(temp1);
					newuser.fatmul = Convert::ToDouble(temp2);
				}				
				int concal;
				int remcal;
				int dpro;
				int dfat;
				int dcarb;
				newuser.dailycal = newuser.calcalc(newuser.weight, newuser.genmul, newuser.fatmul);
				
				String^ dal = Convert::ToString(newuser.calcalc(newuser.weight, newuser.genmul, newuser.fatmul));

				MySqlCommand^ cmd1 = gcnew MySqlCommand("insert into monday values('" + username + "','" + dal + "'," + concal + "," + remcal + "," + dpro + "," + dfat + "," + dcarb + ")", con);
				MySqlDataReader^ dr;
				con->Open();
				dr = cmd1->ExecuteReader();
				con->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}


			try {
				user newuser;
				newuser.weight = Convert::ToDouble(textBox6->Text);
				String^ username = textBox3->Text;
				String^ constr1 = "Server=127.0.0.1;Uid=root;Pwd=;Database=user1_info;";
				MySqlConnection^ con1 = gcnew MySqlConnection(constr1);
				MySqlCommand^ cmd = gcnew MySqlCommand("select * from macrotable WHERE username='" + username + "'", con1);
				con1->Open();
				MySqlDataReader^ dr1 = cmd->ExecuteReader();
				while (dr1->Read()) {
					temp1 = dr1->GetString(2);
					temp2 = dr1->GetString(1);
					newuser.genmul = Convert::ToDouble(temp1);
					newuser.fatmul = Convert::ToDouble(temp2);
				}
				int concal;
				int remcal;
				int dpro;
				int dfat;
				int dcarb;
				newuser.dailycal = newuser.calcalc(newuser.weight, newuser.genmul, newuser.fatmul);
				String^ dal = Convert::ToString(newuser.calcalc(newuser.weight, newuser.genmul, newuser.fatmul));
				MySqlCommand^ cmd1 = gcnew MySqlCommand("insert into tuesday values('" + username + "','" + dal + "'," + concal + "," + remcal + "," + dpro + "," + dfat + "," + dcarb + ")", con);
				MySqlDataReader^ dr;
				con->Open();
				dr = cmd1->ExecuteReader();
				con->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}


			try {
				user newuser;
				newuser.weight = Convert::ToDouble(textBox6->Text);
				String^ username = textBox3->Text;
				String^ constr1 = "Server=127.0.0.1;Uid=root;Pwd=;Database=user1_info;";
				MySqlConnection^ con1 = gcnew MySqlConnection(constr1);
				MySqlCommand^ cmd = gcnew MySqlCommand("select * from macrotable WHERE username='" + username + "'", con1);
				con1->Open();
				MySqlDataReader^ dr1 = cmd->ExecuteReader();
				while (dr1->Read()) {
					temp1 = dr1->GetString(2);
					temp2 = dr1->GetString(1);
					newuser.genmul = Convert::ToDouble(temp1);
					newuser.fatmul = Convert::ToDouble(temp2);
				}

				int concal;
				int remcal;
				int dpro;
				int dfat;
				int dcarb;

				newuser.dailycal = newuser.calcalc(newuser.weight, newuser.genmul, newuser.fatmul);			
				String^ dal = Convert::ToString(newuser.calcalc(newuser.weight, newuser.genmul, newuser.fatmul));
				MySqlCommand^ cmd1 = gcnew MySqlCommand("insert into wednesday values('" + username + "','" + dal + "'," + concal + "," + remcal + "," + dpro + "," + dfat + "," + dcarb + ")", con);
				MySqlDataReader^ dr;
				con->Open();
				dr = cmd1->ExecuteReader();
				con->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}


			try {
				user newuser;
				newuser.weight = Convert::ToDouble(textBox6->Text);
				String^ username = textBox3->Text;
				String^ constr1 = "Server=127.0.0.1;Uid=root;Pwd=;Database=user1_info;";
				MySqlConnection^ con1 = gcnew MySqlConnection(constr1);
				MySqlCommand^ cmd = gcnew MySqlCommand("select * from macrotable WHERE username='" + username + "'", con1);
				con1->Open();
				MySqlDataReader^ dr1 = cmd->ExecuteReader();
				while (dr1->Read()) {
					temp1 = dr1->GetString(2);
					temp2 = dr1->GetString(1);
					newuser.genmul = Convert::ToDouble(temp1);
					newuser.fatmul = Convert::ToDouble(temp2);
				}
				int concal;
				int remcal;
				int dpro;
				int dfat;
				int dcarb;
				newuser.dailycal = newuser.calcalc(newuser.weight, newuser.genmul, newuser.fatmul);			
				String^ dal = Convert::ToString(newuser.calcalc(newuser.weight, newuser.genmul, newuser.fatmul));
				MySqlCommand^ cmd1 = gcnew MySqlCommand("insert into thursday values('" + username + "','" + dal + "'," + concal + "," + remcal + "," + dpro + "," + dfat + "," + dcarb + ")", con);
				MySqlDataReader^ dr;
				con->Open();
				dr = cmd1->ExecuteReader();
				con->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}


			try {
				user newuser;
				newuser.weight = Convert::ToDouble(textBox6->Text);
				String^ username = textBox3->Text;
				String^ constr1 = "Server=127.0.0.1;Uid=root;Pwd=;Database=user1_info;";
				MySqlConnection^ con1 = gcnew MySqlConnection(constr1);
				MySqlCommand^ cmd = gcnew MySqlCommand("select * from macrotable WHERE username='" + username + "'", con1);
				con1->Open();
				MySqlDataReader^ dr1 = cmd->ExecuteReader();
				while (dr1->Read()) {
					temp1 = dr1->GetString(2);
					temp2 = dr1->GetString(1);
					newuser.genmul = Convert::ToDouble(temp1);
					newuser.fatmul = Convert::ToDouble(temp2);
				}
				int concal;
				int remcal;
				int dpro;
				int dfat;
				int dcarb;
				newuser.dailycal = newuser.calcalc(newuser.weight, newuser.genmul, newuser.fatmul);			
				String^ dal = Convert::ToString(newuser.calcalc(newuser.weight, newuser.genmul, newuser.fatmul));
				MySqlCommand^ cmd1 = gcnew MySqlCommand("insert into friday values('" + username + "','" + dal + "'," + concal + "," + remcal + "," + dpro + "," + dfat + "," + dcarb + ")", con);
				MySqlDataReader^ dr;
				con->Open();
				dr = cmd1->ExecuteReader();
				con->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		};
		
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}
