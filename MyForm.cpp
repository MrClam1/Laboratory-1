#pragma once
#include "MyClass.h"
//#include "C:\Users\Санал Болдырев\Desktop\Lab1\Lab1\MyClass.h"
namespace Lab2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
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

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(15, 57);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(198, 20);
			this->textBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(77, 128);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(64, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 86);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"label3";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(15, 102);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(198, 20);
			this->textBox2->TabIndex = 6;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(520, 31);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(181, 342);
			this->listBox1->TabIndex = 8;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(15, 220);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(238, 121);
			this->listBox2->TabIndex = 9;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(94, 347);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 10;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(371, 347);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(115, 33);
			this->button3->TabIndex = 11;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 193);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 14;
			this->label4->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(271, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 15;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(308, 41);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 16;
			this->label6->Text = L"label6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(271, 86);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(35, 13);
			this->label7->TabIndex = 17;
			this->label7->Text = L"label7";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(274, 57);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(198, 20);
			this->textBox3->TabIndex = 18;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(274, 102);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(198, 20);
			this->textBox4->TabIndex = 19;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(311, 128);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 20;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(260, 220);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(85, 17);
			this->radioButton1->TabIndex = 21;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"radioButton1";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(260, 244);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(85, 17);
			this->radioButton2->TabIndex = 22;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"radioButton2";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(713, 392);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: MyClass ClassObj;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = "Введите данные: ";
		label2->Text = "Имя пользователя";
		label3->Text = "Сайт, который посещал пользователь";
		label4->Text = "Сайты, которые посещали максимальное/минимальное количество людей";
		label5->Text = "Введите имя или сервер, который вы хотите удалить из списка";
		label6->Text = "Имя пользователя";
		label7->Text = "Сайт, который посещал пользователь";
		button1->Text = "Ввод";
		button2->Text = "Найти";
		button3->Text = "Выйти";
		button4->Text = "Удалить";
		radioButton1->Text = "Максимум";
		radioButton2->Text = "Минимум";
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//Функция добавления данных (имя пользователя и сервера)
		if (textBox1->Text != "" && textBox2->Text != "") {
			int check_error = ClassObj.AddInf(this->textBox1->Text, this->textBox2->Text);
			if (check_error == -1) {
				MessageBox::Show("Имя пользователя: " + textBox1->Text + " и сайта:" + textBox2->Text + " уже добавлены в список. Пожалуйста, впишите другие данные", "Ошибка №1-001");
			}
			else {
				if (check_error == -2) {
					MessageBox::Show("Ошибка добавления информации (имя пользователя и сайт)!", "Ошибка №1-001-1");
				}
				else {
					if (check_error >= 0) {
						this->listBox1->Items->Add(textBox1->Text + " - " + textBox2->Text);
					}
					else {
						MessageBox::Show("ERROR!!!", "ERRROR!!!");
					}
				}
			}
		}
		else {
			MessageBox::Show("Пожалуйста, заполните все две ячейки!", "Ошибка №1-002"); 
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		//Функция закрытия программы
		try {
			Application::Exit();
		}
		catch (...) {
			//В случае, если программа даст сбой - это на всякий случай!
			Environment::Exit(0);
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		listBox2->Items->Clear();
		ArrayList^ Spisok;
		if (radioButton1->Checked) {
			Spisok = ClassObj.SortServ(1);
			if (Spisok[0] == -1) {
				MessageBox::Show("Операция сортирования аварийно завершена! Пожалуйста, обратитесь к администратору!", "Ошибка №5-100");
			}
			else {
				listBox2->Items->Add("Server: " + (String^)Spisok[0] + " has maximum visiters: " + Spisok[1]);
			}
		}
		else {
			if (radioButton2->Checked) {
				Spisok = ClassObj.SortServ(0);
				if (Spisok[0] == -1) {
					MessageBox::Show("Операция сортирования аварийно завершена! Пожалуйста, обратитесь к администратору!", "Ошибка №5-101");
				}
				else {
					listBox2->Items->Add("Server: " + (String^)Spisok[0] + " has minimum visiters: " + Spisok[1]);
				}
			}
			else {
				MessageBox::Show("Выберите категорию сортирования", "Ошибка №4-100");
			}
		}
		Spisok->Clear();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		//Функция удаления данных (имя пользователя и сервера)
		if (textBox3->Text == "" && textBox4->Text == "") {
			MessageBox::Show("Поле Имя пользователя (или Сайт) не заполнено!", "Ошибка №3-101");
		}
		else {
			if (textBox3->Text != "" && textBox4->Text != "") {
				//MessageBox::Show("Поля Имя пользователя и Сайта заполнены одновременно! Это может привести к ошибке. Пожалуйста, заполните одно из этих полей!", "Ошибка №3-102");
				int check_error = ClassObj.DeleteUserServ(textBox3->Text, textBox4->Text);
				if (check_error >= 0) {
					listBox1->Items->RemoveAt(check_error);
				}
				else {
					if (check_error = -1) {
						MessageBox::Show("Данное имя с сайтом не найдено", "Ошибка №3-102");
					}
					else {
						if (check_error = -2) {
							MessageBox::Show("Произошла техническая ошибка при удалении элемента", "Ошибка №3-102-1");
						}
					}
				}
			}
			else {
				if (textBox3->Text != "" && textBox4->Text == "") {
					int check_error_user = ClassObj.DeleteUser(textBox3->Text);
					if (check_error_user == -1) {
						MessageBox::Show("Не удалось найти имя этого пользователя: " + textBox3->Text + ".", "Ошибка №3-103");
					}
					else {
						if (check_error_user == -2) {
							MessageBox::Show("Произошла техническая ошибка при удалении элемента! Пожалуйста, обратитесь к администратору!", "Ошибка №3-103-1");
						}
						else {
							if (check_error_user >= 0) {
								listBox1->Items->RemoveAt(check_error_user);
							}
							else {
								MessageBox::Show("ERROR!!!", "ERRROR!!!");
							}
						}
					}
				}
				else {
					if (textBox3->Text == "" && textBox4->Text != "") {
						int check_error_serv = ClassObj.DeleteServ(textBox4->Text);
						if (check_error_serv == -1) {
							MessageBox::Show("Не удалось найти имя этого пользователя: " + textBox4->Text + ".", "Ошибка №3-104");
						} 
						else {
							if (check_error_serv == -2) {
								MessageBox::Show("Произошла техническая ошибка при удалении элемента! Пожалуйста, обратитесь к администратору!", "Ошибка №3-104-1");
							}
							else {
								if (check_error_serv >= 0) {
									listBox1->Items->RemoveAt(check_error_serv);
								}
								else {
									MessageBox::Show("ERROR!!!", "ERRROR!!!");
								}
							}
						}
					}
				}
			}
		}
	}
	
};
}
