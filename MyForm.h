#pragma once

#include "Backend.h"

namespace Dictionary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

	private:
		DictionaryBook* tu_dien = new DictionaryBook();
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			tu_dien->load_from_file("Text.txt");
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
	private: System::Windows::Forms::TextBox^ searchField;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ word;
	private: System::Windows::Forms::Label^ type;
	private: System::Windows::Forms::Label^ meaning;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ add_meaning;

	private: System::Windows::Forms::TextBox^ add_type;

	private: System::Windows::Forms::TextBox^ add_word;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ new_mean;

	private: System::Windows::Forms::TextBox^ new_type;

	private: System::Windows::Forms::TextBox^ new_word;

	private: System::Windows::Forms::TextBox^ old_word;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ delete_word;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ exam_w;
	private: System::Windows::Forms::Label^ examw;
	private: System::Windows::Forms::TextBox^ adde;
	private: System::Windows::Forms::Label^ add_exam;
	private: System::Windows::Forms::TextBox^ new_exam;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ button5;











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
			this->searchField = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->word = (gcnew System::Windows::Forms::Label());
			this->type = (gcnew System::Windows::Forms::Label());
			this->meaning = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->examw = (gcnew System::Windows::Forms::Label());
			this->exam_w = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->adde = (gcnew System::Windows::Forms::TextBox());
			this->add_exam = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->add_meaning = (gcnew System::Windows::Forms::TextBox());
			this->add_type = (gcnew System::Windows::Forms::TextBox());
			this->add_word = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->new_exam = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->new_mean = (gcnew System::Windows::Forms::TextBox());
			this->new_type = (gcnew System::Windows::Forms::TextBox());
			this->new_word = (gcnew System::Windows::Forms::TextBox());
			this->old_word = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->delete_word = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// searchField
			// 
			this->searchField->Location = System::Drawing::Point(108, 43);
			this->searchField->Name = L"searchField";
			this->searchField->Size = System::Drawing::Size(269, 20);
			this->searchField->TabIndex = 1;
			this->searchField->Text = L"Nhập từ để tìm kiếm";
			this->searchField->TextChanged += gcnew System::EventHandler(this, &MyForm::searchField_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(39, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Tra từ";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(302, 75);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Tìm kiếm";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(28, 110);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(25, 17);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Từ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(28, 147);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Loại từ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(28, 186);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 17);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Nghĩa";
			// 
			// word
			// 
			this->word->AutoSize = true;
			this->word->Location = System::Drawing::Point(129, 112);
			this->word->Name = L"word";
			this->word->Size = System::Drawing::Size(30, 13);
			this->word->TabIndex = 8;
			this->word->Text = L"word";
			// 
			// type
			// 
			this->type->AutoSize = true;
			this->type->Location = System::Drawing::Point(129, 151);
			this->type->Name = L"type";
			this->type->Size = System::Drawing::Size(27, 13);
			this->type->TabIndex = 9;
			this->type->Text = L"type";
			// 
			// meaning
			// 
			this->meaning->AutoSize = true;
			this->meaning->Location = System::Drawing::Point(129, 186);
			this->meaning->Name = L"meaning";
			this->meaning->Size = System::Drawing::Size(47, 13);
			this->meaning->TabIndex = 10;
			this->meaning->Text = L"meaning";
			this->meaning->Click += gcnew System::EventHandler(this, &MyForm::meaning_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel1->Controls->Add(this->examw);
			this->panel1->Controls->Add(this->exam_w);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->meaning);
			this->panel1->Controls->Add(this->searchField);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->type);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->word);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Location = System::Drawing::Point(30, 66);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(419, 258);
			this->panel1->TabIndex = 11;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// examw
			// 
			this->examw->AutoSize = true;
			this->examw->Location = System::Drawing::Point(129, 228);
			this->examw->Name = L"examw";
			this->examw->Size = System::Drawing::Size(40, 13);
			this->examw->TabIndex = 12;
			this->examw->Text = L"examw";
			this->examw->Click += gcnew System::EventHandler(this, &MyForm::label14_Click);
			// 
			// exam_w
			// 
			this->exam_w->AutoSize = true;
			this->exam_w->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exam_w->Location = System::Drawing::Point(28, 224);
			this->exam_w->Name = L"exam_w";
			this->exam_w->Size = System::Drawing::Size(40, 17);
			this->exam_w->TabIndex = 11;
			this->exam_w->Text = L"Ví dụ";
			this->exam_w->Click += gcnew System::EventHandler(this, &MyForm::exam_w_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::Control;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(24, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(433, 31);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Dictionary: Từ điển Anh Việt ver1.0";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel2->Controls->Add(this->adde);
			this->panel2->Controls->Add(this->add_exam);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->add_meaning);
			this->panel2->Controls->Add(this->add_type);
			this->panel2->Controls->Add(this->add_word);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Location = System::Drawing::Point(38, 354);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(419, 213);
			this->panel2->TabIndex = 13;
			// 
			// adde
			// 
			this->adde->Location = System::Drawing::Point(132, 152);
			this->adde->Name = L"adde";
			this->adde->Size = System::Drawing::Size(245, 20);
			this->adde->TabIndex = 8;
			// 
			// add_exam
			// 
			this->add_exam->AutoSize = true;
			this->add_exam->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_exam->Location = System::Drawing::Point(28, 156);
			this->add_exam->Name = L"add_exam";
			this->add_exam->Size = System::Drawing::Size(40, 17);
			this->add_exam->TabIndex = 7;
			this->add_exam->Text = L"Ví dụ";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(302, 178);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Thêm từ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(28, 114);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(45, 17);
			this->label8->TabIndex = 5;
			this->label8->Text = L"Nghĩa";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(28, 66);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(51, 17);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Loại từ";
			// 
			// add_meaning
			// 
			this->add_meaning->Location = System::Drawing::Point(132, 111);
			this->add_meaning->Name = L"add_meaning";
			this->add_meaning->Size = System::Drawing::Size(245, 20);
			this->add_meaning->TabIndex = 3;
			// 
			// add_type
			// 
			this->add_type->Location = System::Drawing::Point(132, 66);
			this->add_type->Name = L"add_type";
			this->add_type->Size = System::Drawing::Size(245, 20);
			this->add_type->TabIndex = 2;
			// 
			// add_word
			// 
			this->add_word->Location = System::Drawing::Point(132, 21);
			this->add_word->Name = L"add_word";
			this->add_word->Size = System::Drawing::Size(245, 20);
			this->add_word->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(28, 22);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 17);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Thêm từ";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel3->Controls->Add(this->new_exam);
			this->panel3->Controls->Add(this->label14);
			this->panel3->Controls->Add(this->button4);
			this->panel3->Controls->Add(this->label13);
			this->panel3->Controls->Add(this->label12);
			this->panel3->Controls->Add(this->label11);
			this->panel3->Controls->Add(this->new_mean);
			this->panel3->Controls->Add(this->new_type);
			this->panel3->Controls->Add(this->new_word);
			this->panel3->Controls->Add(this->old_word);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Location = System::Drawing::Point(514, 228);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(382, 339);
			this->panel3->TabIndex = 14;
			// 
			// new_exam
			// 
			this->new_exam->Location = System::Drawing::Point(119, 264);
			this->new_exam->Name = L"new_exam";
			this->new_exam->Size = System::Drawing::Size(233, 20);
			this->new_exam->TabIndex = 10;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(33, 267);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(66, 17);
			this->label14->TabIndex = 9;
			this->label14->Text = L"Ví dụ mới";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(277, 303);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Sửa từ";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(33, 220);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(71, 17);
			this->label13->TabIndex = 7;
			this->label13->Text = L"Nghĩa mới";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(33, 177);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(77, 17);
			this->label12->TabIndex = 6;
			this->label12->Text = L"Loại từ mới";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(33, 125);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(51, 17);
			this->label11->TabIndex = 5;
			this->label11->Text = L"Từ mới";
			this->label11->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// new_mean
			// 
			this->new_mean->Location = System::Drawing::Point(119, 220);
			this->new_mean->Name = L"new_mean";
			this->new_mean->Size = System::Drawing::Size(233, 20);
			this->new_mean->TabIndex = 4;
			// 
			// new_type
			// 
			this->new_type->Location = System::Drawing::Point(119, 174);
			this->new_type->Name = L"new_type";
			this->new_type->Size = System::Drawing::Size(233, 20);
			this->new_type->TabIndex = 3;
			// 
			// new_word
			// 
			this->new_word->Location = System::Drawing::Point(119, 124);
			this->new_word->Name = L"new_word";
			this->new_word->Size = System::Drawing::Size(233, 20);
			this->new_word->TabIndex = 2;
			// 
			// old_word
			// 
			this->old_word->Location = System::Drawing::Point(119, 70);
			this->old_word->Name = L"old_word";
			this->old_word->Size = System::Drawing::Size(233, 20);
			this->old_word->TabIndex = 1;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(33, 73);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(44, 17);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Từ cũ";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel4->Controls->Add(this->button3);
			this->panel4->Controls->Add(this->delete_word);
			this->panel4->Controls->Add(this->label9);
			this->panel4->Location = System::Drawing::Point(514, 66);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(382, 141);
			this->panel4->TabIndex = 15;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(277, 80);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Xóa";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// delete_word
			// 
			this->delete_word->Location = System::Drawing::Point(89, 49);
			this->delete_word->Name = L"delete_word";
			this->delete_word->Size = System::Drawing::Size(263, 20);
			this->delete_word->TabIndex = 1;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(25, 52);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(49, 17);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Xóa từ";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(848, 578);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 16;
			this->button5->Text = L"Thoát";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(953, 613);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"Từ điển Anh Việt";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ search_word = searchField->Text; 
		string tmp = "";
		for (int i = 0; i < search_word->Length; i++) {
			tmp += (char)search_word[i]; 
		}
		Word find_word = tu_dien->search(tmp);
		String^ w = "";
		String^ t = "";
		String^ m = "";
		String^ em = "";
		for (int i = 0; i < find_word.getword().size(); i++) {
			w += (wchar_t)find_word.getword()[i];
		}
		for (int i = 0; i < find_word.gettype().size(); i++) {
			t += (wchar_t)find_word.gettype()[i];
		}
		for (int i = 0; i < find_word.getmean().size(); i++) {
			m += (wchar_t)find_word.getmean()[i];
		}
		for (int i = 0; i < find_word.getexam().size(); i++) {
			em += (wchar_t)find_word.getexam()[i];
		}
		word->Text = w;
		type->Text = t;
		meaning->Text = m; 
		examw->Text = em;
	}
	private: System::Void searchField_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ delete_w = delete_word->Text;
		string tmp = "";
		for (int i = 0; i < delete_w->Length; i++) {
			tmp += (char)delete_w[i];
		}
		Word a = tu_dien->delete_word(tmp);
		if(a.getword()=="Khong tim thay")
			MessageBox::Show("Khong ton tai");
		else
		    MessageBox::Show("Deleted");
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ add_w = add_word->Text;
		String^ add_t = add_type->Text;
		String^ add_m = add_meaning->Text;
		String^ add_e = adde->Text;
		string tmpw = "";
		for (int i = 0; i < add_w->Length; i++) {
			tmpw += (char)add_w[i];
		}
		string tmpt = "";
		for (int i = 0; i < add_t->Length; i++) {
			tmpt += (char)add_t[i];
		}
		string tmpm = "";
		for (int i = 0; i < add_m->Length; i++) {
			tmpm += (char)add_m[i];
		}
		string tmpe = "";
		for (int i = 0; i < add_e->Length; i++) {
			tmpe += (char)add_e[i];
		}

		Word word_i = tu_dien->insert(tmpw, tmpt, tmpm, tmpe);
		if(word_i.getword() == tmpw)
			MessageBox::Show("Da co tu nay,hay sua tu");
		else
			MessageBox::Show("Da them tu");
	}
private: System::Void exam_w_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void meaning_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ old_w = old_word->Text;
	String^ new_w = new_word->Text;
	String^ new_t = new_type->Text;
	String^ new_m = new_mean->Text;
	String^ new_e = new_exam->Text;
	string tmpo = "";
	for (int i = 0; i < new_w->Length; i++) {
		tmpo += (char)new_w[i];
	}
	string tmpw = "";
	for (int i = 0; i < new_w->Length; i++) {
		tmpw += (char)new_w[i];
	}
	string tmpt = "";
	for (int i = 0; i < new_t->Length; i++) {
		tmpt += (char)new_t[i];
	}
	string tmpm = "";
	for (int i = 0; i < new_m->Length; i++) {
		tmpm += (char)new_m[i];
	}
	string tmpe = "";
	for (int i = 0; i < new_e->Length; i++) {
		tmpe += (char)new_e[i];
	}
	Word eword = tu_dien->edit(tmpo, tmpw, tmpt, tmpm, tmpe);
	if (eword.getword() == "Khong tim thay")
		MessageBox::Show("Khong ton tai");
	else
		MessageBox::Show("Da sua");
} 
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
