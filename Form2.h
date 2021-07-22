#pragma once
#include "Form3.h"
#include "Form1.h"
#include "Header1.h"
#include <string.h>

namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace std;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
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
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;


	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(197, 78);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(99, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form2::textBox1_TextChanged);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(84, 76);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Username:";
			this->label1->Click += gcnew System::EventHandler(this, &Form2::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(135, 148);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(98, 22);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Log In";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click_1);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(379, 210);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"Form2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double weight;


		
	};
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ username = textBox1->Text;
			String^ constr1 = "Server=127.0.0.1;Uid=root;Pwd=;Database=user1_info;";
			MySqlConnection^ con1 = gcnew MySqlConnection(constr1);
		
			String^ temp;
			MySqlCommand^ cmd = gcnew MySqlCommand("select * from user1infotbl WHERE username='" + username + "'", con1);
			con1->Open();
			MySqlDataReader^ dr1 = cmd->ExecuteReader();
			while (dr1->Read()) {
			

				temp= dr1->GetString(0);
				if (username == temp) {
					MessageBox::Show("Welcome back, " + temp);
					this->Hide();
					Form3^ f2 = gcnew Form3();
					f2->ShowDialog();
				}
				else
					MessageBox::Show("Wrong");
			}
			con1->Close();
		
		
		}/*
		if (bodyfat =;= testfat)
			MessageBox::Show("values equal");

		else
			MessageBox::Show("values not equal");*/
		catch(Exception ^ ex) {
			MessageBox::Show(ex->Message);
		}/*
		this->Hide();
		Form3^ f2 = gcnew Form3();
		f2->ShowDialog();*/
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
