#pragma once
#include "Homeform.h"
namespace FoodOrderSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}


	protected:

	protected:

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtusername;
	private: System::Windows::Forms::TextBox^ txtpassword;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ ibluni;
	private: System::Windows::Forms::Button^ button1;








	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtusername = (gcnew System::Windows::Forms::TextBox());
			this->txtpassword = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->ibluni = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Elephant", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(437, 375);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 29);
			this->label1->TabIndex = 5;
			this->label1->Text = L"User Name";
			this->label1->Click += gcnew System::EventHandler(this, &LoginForm::UserName);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->label2->Font = (gcnew System::Drawing::Font(L"Elephant", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Desktop;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(437, 441);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(149, 33);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Pass word";
			this->label2->Click += gcnew System::EventHandler(this, &LoginForm::label2_Click);
			// 
			// txtusername
			// 
			this->txtusername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtusername->Location = System::Drawing::Point(631, 373);
			this->txtusername->MaxLength = 10;
			this->txtusername->Name = L"txtusername";
			this->txtusername->Size = System::Drawing::Size(184, 31);
			this->txtusername->TabIndex = 1;
			// 
			// txtpassword
			// 
			this->txtpassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtpassword->Location = System::Drawing::Point(631, 443);
			this->txtpassword->MaxLength = 10;
			this->txtpassword->Name = L"txtpassword";
			this->txtpassword->PasswordChar = '*';
			this->txtpassword->Size = System::Drawing::Size(184, 31);
			this->txtpassword->TabIndex = 2;
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->ForeColor = System::Drawing::SystemColors::Highlight;
			this->panel1->Location = System::Drawing::Point(855, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(685, 845);
			this->panel1->TabIndex = 9;
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(650, -1);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(34, 25);
			this->button1->TabIndex = 0;
			this->button1->Text = L"X";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &LoginForm::button1_Click_1);
			// 
			// ibluni
			// 
			this->ibluni->Font = (gcnew System::Drawing::Font(L"Elephant", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ibluni->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ibluni.Image")));
			this->ibluni->Location = System::Drawing::Point(504, 512);
			this->ibluni->Name = L"ibluni";
			this->ibluni->Size = System::Drawing::Size(235, 44);
			this->ibluni->TabIndex = 3;
			this->ibluni->Text = L"Login";
			this->ibluni->UseVisualStyleBackColor = true;
			this->ibluni->Click += gcnew System::EventHandler(this, &LoginForm::bbtnlogin_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1540, 845);
			this->Controls->Add(this->ibluni);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->txtpassword);
			this->Controls->Add(this->txtusername);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"LoginForm";
			this->Text = L"FoodManagementSystem";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void UserName(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void bbtnlogin_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ username = txtusername->Text;
	String^ password = txtpassword->Text;
	if (username == "vithusha" && password == "vithu@123")
	{
		HomeForm^ hf1 = gcnew HomeForm;
		hf1->Show();
		this->Hide();
  	}
	

}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) 
{
	Application::Exit();
}
};
}
