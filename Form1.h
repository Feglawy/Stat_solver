#pragma once


namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ Calc_Button;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ Mean;
	private: System::Windows::Forms::Label^ Median;
	private: System::Windows::Forms::Label^ Sorted;
	private: System::Windows::Forms::Label^ Sum;
	private: System::Windows::Forms::Label^ Mode;
	private: System::Windows::Forms::Label^ Range;
	private: System::Windows::Forms::Label^ Standerd_deviation;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ Q1;
	private: System::Windows::Forms::Label^ Q2;
	private: System::Windows::Forms::Label^ Q3;
	private: System::Windows::Forms::Label^ IQR;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ LB;
	private: System::Windows::Forms::Label^ UB;
	private: System::Windows::Forms::Label^ Skewed;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ Exit_Button;
	private: System::Windows::Forms::TextBox^ SumBox;
	private: System::Windows::Forms::TextBox^ RangeBox;
	private: System::Windows::Forms::TextBox^ MeanBox;
	private: System::Windows::Forms::TextBox^ MeadianBox;
	private: System::Windows::Forms::TextBox^ STBox;
	private: System::Windows::Forms::TextBox^ Q1Box;
	private: System::Windows::Forms::TextBox^ Q2Box;
	private: System::Windows::Forms::TextBox^ IqrBox;
	private: System::Windows::Forms::TextBox^ LbBox;
	private: System::Windows::Forms::TextBox^ UbBox;
	private: System::Windows::Forms::TextBox^ SkewedBox;
	private: System::Windows::Forms::TextBox^ Q3Box;
	private: System::Windows::Forms::TextBox^ SortedBox;
	private: System::Windows::Forms::TextBox^ ModeBox;
	private: System::Windows::Forms::Button^ Reset_textbox_Button;
	private: System::Windows::Forms::Button^ show_freqtable_button;
	private: System::Windows::Forms::DataGridView^ FreqTable;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::TextBox^ Class_Width_Box;
	private: System::Windows::Forms::TextBox^ Num_of_classes_Box;



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::ComponentModel::IContainer^ components;






	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle11 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle12 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Calc_Button = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Mean = (gcnew System::Windows::Forms::Label());
			this->Median = (gcnew System::Windows::Forms::Label());
			this->Sorted = (gcnew System::Windows::Forms::Label());
			this->Sum = (gcnew System::Windows::Forms::Label());
			this->Mode = (gcnew System::Windows::Forms::Label());
			this->Range = (gcnew System::Windows::Forms::Label());
			this->Standerd_deviation = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->Q1 = (gcnew System::Windows::Forms::Label());
			this->Q2 = (gcnew System::Windows::Forms::Label());
			this->Q3 = (gcnew System::Windows::Forms::Label());
			this->IQR = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->LB = (gcnew System::Windows::Forms::Label());
			this->UB = (gcnew System::Windows::Forms::Label());
			this->Skewed = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->Exit_Button = (gcnew System::Windows::Forms::Button());
			this->SumBox = (gcnew System::Windows::Forms::TextBox());
			this->RangeBox = (gcnew System::Windows::Forms::TextBox());
			this->MeanBox = (gcnew System::Windows::Forms::TextBox());
			this->MeadianBox = (gcnew System::Windows::Forms::TextBox());
			this->STBox = (gcnew System::Windows::Forms::TextBox());
			this->Q1Box = (gcnew System::Windows::Forms::TextBox());
			this->Q2Box = (gcnew System::Windows::Forms::TextBox());
			this->IqrBox = (gcnew System::Windows::Forms::TextBox());
			this->LbBox = (gcnew System::Windows::Forms::TextBox());
			this->UbBox = (gcnew System::Windows::Forms::TextBox());
			this->SkewedBox = (gcnew System::Windows::Forms::TextBox());
			this->Q3Box = (gcnew System::Windows::Forms::TextBox());
			this->SortedBox = (gcnew System::Windows::Forms::TextBox());
			this->ModeBox = (gcnew System::Windows::Forms::TextBox());
			this->Reset_textbox_Button = (gcnew System::Windows::Forms::Button());
			this->show_freqtable_button = (gcnew System::Windows::Forms::Button());
			this->FreqTable = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->Class_Width_Box = (gcnew System::Windows::Forms::TextBox());
			this->Num_of_classes_Box = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FreqTable))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(29, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Data";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Black;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(37, 105);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(575, 81);
			this->textBox1->TabIndex = 1;
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::textBox1_KeyDown);
			// 
			// Calc_Button
			// 
			this->Calc_Button->BackColor = System::Drawing::Color::Blue;
			this->Calc_Button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Calc_Button->FlatAppearance->BorderSize = 0;
			this->Calc_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Calc_Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Calc_Button->Location = System::Drawing::Point(844, 105);
			this->Calc_Button->Name = L"Calc_Button";
			this->Calc_Button->Size = System::Drawing::Size(144, 89);
			this->Calc_Button->TabIndex = 2;
			this->Calc_Button->Text = L"Calculate";
			this->Calc_Button->UseVisualStyleBackColor = false;
			this->Calc_Button->Click += gcnew System::EventHandler(this, &Form1::Calc_Button_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(31, 252);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 32);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Answer";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(37, 287);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(214, 2);
			this->panel1->TabIndex = 4;
			// 
			// Mean
			// 
			this->Mean->AutoSize = true;
			this->Mean->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Mean->Location = System::Drawing::Point(32, 486);
			this->Mean->Name = L"Mean";
			this->Mean->Size = System::Drawing::Size(120, 25);
			this->Mean->TabIndex = 5;
			this->Mean->Text = L"Mean      = ";
			// 
			// Median
			// 
			this->Median->AutoSize = true;
			this->Median->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Median->Location = System::Drawing::Point(32, 528);
			this->Median->Name = L"Median";
			this->Median->Size = System::Drawing::Size(107, 25);
			this->Median->TabIndex = 6;
			this->Median->Text = L"Median = ";
			// 
			// Sorted
			// 
			this->Sorted->AutoSize = true;
			this->Sorted->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sorted->Location = System::Drawing::Point(74, 304);
			this->Sorted->Name = L"Sorted";
			this->Sorted->Size = System::Drawing::Size(197, 25);
			this->Sorted->TabIndex = 7;
			this->Sorted->Text = L"The sorted data is: ";
			// 
			// Sum
			// 
			this->Sum->AutoSize = true;
			this->Sum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Sum->Location = System::Drawing::Point(32, 405);
			this->Sum->Name = L"Sum";
			this->Sum->Size = System::Drawing::Size(115, 25);
			this->Sum->TabIndex = 8;
			this->Sum->Text = L"Sum       = ";
			// 
			// Mode
			// 
			this->Mode->AutoSize = true;
			this->Mode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Mode->Location = System::Drawing::Point(74, 345);
			this->Mode->Name = L"Mode";
			this->Mode->Size = System::Drawing::Size(100, 25);
			this->Mode->TabIndex = 9;
			this->Mode->Text = L"Mode is: ";
			// 
			// Range
			// 
			this->Range->AutoSize = true;
			this->Range->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Range->Location = System::Drawing::Point(32, 444);
			this->Range->Name = L"Range";
			this->Range->Size = System::Drawing::Size(117, 25);
			this->Range->TabIndex = 10;
			this->Range->Text = L"Range    = ";
			// 
			// Standerd_deviation
			// 
			this->Standerd_deviation->AutoSize = true;
			this->Standerd_deviation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Standerd_deviation->Location = System::Drawing::Point(32, 572);
			this->Standerd_deviation->Name = L"Standerd_deviation";
			this->Standerd_deviation->Size = System::Drawing::Size(216, 25);
			this->Standerd_deviation->TabIndex = 11;
			this->Standerd_deviation->Text = L"Standerd deviation = ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(831, 264);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(133, 25);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Box Plot info";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(836, 344);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(2, 262);
			this->panel2->TabIndex = 13;
			// 
			// Q1
			// 
			this->Q1->AutoSize = true;
			this->Q1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Q1->Location = System::Drawing::Point(869, 344);
			this->Q1->Name = L"Q1";
			this->Q1->Size = System::Drawing::Size(64, 25);
			this->Q1->TabIndex = 14;
			this->Q1->Text = L"Q1 = ";
			// 
			// Q2
			// 
			this->Q2->AutoSize = true;
			this->Q2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Q2->Location = System::Drawing::Point(869, 385);
			this->Q2->Name = L"Q2";
			this->Q2->Size = System::Drawing::Size(64, 25);
			this->Q2->TabIndex = 15;
			this->Q2->Text = L"Q2 = ";
			// 
			// Q3
			// 
			this->Q3->AutoSize = true;
			this->Q3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Q3->Location = System::Drawing::Point(869, 423);
			this->Q3->Name = L"Q3";
			this->Q3->Size = System::Drawing::Size(64, 25);
			this->Q3->TabIndex = 16;
			this->Q3->Text = L"Q3 = ";
			// 
			// IQR
			// 
			this->IQR->AutoSize = true;
			this->IQR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IQR->Location = System::Drawing::Point(869, 461);
			this->IQR->Name = L"IQR";
			this->IQR->Size = System::Drawing::Size(72, 25);
			this->IQR->TabIndex = 17;
			this->IQR->Text = L"IQR = ";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Location = System::Drawing::Point(836, 292);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(160, 2);
			this->panel3->TabIndex = 18;
			// 
			// LB
			// 
			this->LB->AutoSize = true;
			this->LB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LB->Location = System::Drawing::Point(869, 495);
			this->LB->Name = L"LB";
			this->LB->Size = System::Drawing::Size(62, 25);
			this->LB->TabIndex = 19;
			this->LB->Text = L"LB = ";
			// 
			// UB
			// 
			this->UB->AutoSize = true;
			this->UB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UB->Location = System::Drawing::Point(869, 530);
			this->UB->Name = L"UB";
			this->UB->Size = System::Drawing::Size(65, 25);
			this->UB->TabIndex = 20;
			this->UB->Text = L"UB = ";
			// 
			// Skewed
			// 
			this->Skewed->AutoSize = true;
			this->Skewed->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Skewed->Location = System::Drawing::Point(869, 572);
			this->Skewed->Name = L"Skewed";
			this->Skewed->Size = System::Drawing::Size(119, 25);
			this->Skewed->TabIndex = 21;
			this->Skewed->Text = L"Is skewed: ";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Location = System::Drawing::Point(37, 192);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(572, 2);
			this->panel4->TabIndex = 22;
			// 
			// Exit_Button
			// 
			this->Exit_Button->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->Exit_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Exit_Button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Exit_Button->Location = System::Drawing::Point(1006, 105);
			this->Exit_Button->Name = L"Exit_Button";
			this->Exit_Button->Size = System::Drawing::Size(143, 89);
			this->Exit_Button->TabIndex = 23;
			this->Exit_Button->Text = L"Quit";
			this->Exit_Button->UseVisualStyleBackColor = false;
			this->Exit_Button->Click += gcnew System::EventHandler(this, &Form1::Exit_Button_Click);
			// 
			// SumBox
			// 
			this->SumBox->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->SumBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->SumBox->Cursor = System::Windows::Forms::Cursors::Default;
			this->SumBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SumBox->ForeColor = System::Drawing::Color::White;
			this->SumBox->Location = System::Drawing::Point(155, 405);
			this->SumBox->Multiline = true;
			this->SumBox->Name = L"SumBox";
			this->SumBox->ReadOnly = true;
			this->SumBox->Size = System::Drawing::Size(109, 25);
			this->SumBox->TabIndex = 24;
			// 
			// RangeBox
			// 
			this->RangeBox->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->RangeBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->RangeBox->Cursor = System::Windows::Forms::Cursors::Default;
			this->RangeBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RangeBox->ForeColor = System::Drawing::Color::White;
			this->RangeBox->Location = System::Drawing::Point(155, 444);
			this->RangeBox->Multiline = true;
			this->RangeBox->Name = L"RangeBox";
			this->RangeBox->ReadOnly = true;
			this->RangeBox->Size = System::Drawing::Size(109, 25);
			this->RangeBox->TabIndex = 25;
			// 
			// MeanBox
			// 
			this->MeanBox->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->MeanBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->MeanBox->Cursor = System::Windows::Forms::Cursors::Default;
			this->MeanBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MeanBox->ForeColor = System::Drawing::Color::White;
			this->MeanBox->Location = System::Drawing::Point(155, 486);
			this->MeanBox->Multiline = true;
			this->MeanBox->Name = L"MeanBox";
			this->MeanBox->ReadOnly = true;
			this->MeanBox->Size = System::Drawing::Size(109, 25);
			this->MeanBox->TabIndex = 26;
			// 
			// MeadianBox
			// 
			this->MeadianBox->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->MeadianBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->MeadianBox->Cursor = System::Windows::Forms::Cursors::Default;
			this->MeadianBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MeadianBox->ForeColor = System::Drawing::Color::White;
			this->MeadianBox->Location = System::Drawing::Point(155, 528);
			this->MeadianBox->Multiline = true;
			this->MeadianBox->Name = L"MeadianBox";
			this->MeadianBox->ReadOnly = true;
			this->MeadianBox->Size = System::Drawing::Size(109, 25);
			this->MeadianBox->TabIndex = 27;
			// 
			// STBox
			// 
			this->STBox->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->STBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->STBox->Cursor = System::Windows::Forms::Cursors::Default;
			this->STBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->STBox->ForeColor = System::Drawing::Color::White;
			this->STBox->Location = System::Drawing::Point(254, 572);
			this->STBox->Multiline = true;
			this->STBox->Name = L"STBox";
			this->STBox->ReadOnly = true;
			this->STBox->Size = System::Drawing::Size(109, 25);
			this->STBox->TabIndex = 28;
			// 
			// Q1Box
			// 
			this->Q1Box->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Q1Box->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Q1Box->Cursor = System::Windows::Forms::Cursors::Default;
			this->Q1Box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Q1Box->ForeColor = System::Drawing::Color::White;
			this->Q1Box->Location = System::Drawing::Point(949, 344);
			this->Q1Box->Multiline = true;
			this->Q1Box->Name = L"Q1Box";
			this->Q1Box->ReadOnly = true;
			this->Q1Box->Size = System::Drawing::Size(109, 25);
			this->Q1Box->TabIndex = 29;
			// 
			// Q2Box
			// 
			this->Q2Box->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Q2Box->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Q2Box->Cursor = System::Windows::Forms::Cursors::Default;
			this->Q2Box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Q2Box->ForeColor = System::Drawing::Color::White;
			this->Q2Box->Location = System::Drawing::Point(949, 385);
			this->Q2Box->Multiline = true;
			this->Q2Box->Name = L"Q2Box";
			this->Q2Box->ReadOnly = true;
			this->Q2Box->Size = System::Drawing::Size(109, 25);
			this->Q2Box->TabIndex = 30;
			// 
			// IqrBox
			// 
			this->IqrBox->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->IqrBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->IqrBox->Cursor = System::Windows::Forms::Cursors::Default;
			this->IqrBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IqrBox->ForeColor = System::Drawing::Color::White;
			this->IqrBox->Location = System::Drawing::Point(949, 461);
			this->IqrBox->Multiline = true;
			this->IqrBox->Name = L"IqrBox";
			this->IqrBox->ReadOnly = true;
			this->IqrBox->Size = System::Drawing::Size(109, 25);
			this->IqrBox->TabIndex = 31;
			// 
			// LbBox
			// 
			this->LbBox->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->LbBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->LbBox->Cursor = System::Windows::Forms::Cursors::Default;
			this->LbBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LbBox->ForeColor = System::Drawing::Color::White;
			this->LbBox->Location = System::Drawing::Point(949, 495);
			this->LbBox->Multiline = true;
			this->LbBox->Name = L"LbBox";
			this->LbBox->ReadOnly = true;
			this->LbBox->Size = System::Drawing::Size(109, 25);
			this->LbBox->TabIndex = 32;
			// 
			// UbBox
			// 
			this->UbBox->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->UbBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->UbBox->Cursor = System::Windows::Forms::Cursors::Default;
			this->UbBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UbBox->ForeColor = System::Drawing::Color::White;
			this->UbBox->Location = System::Drawing::Point(949, 528);
			this->UbBox->Multiline = true;
			this->UbBox->Name = L"UbBox";
			this->UbBox->ReadOnly = true;
			this->UbBox->Size = System::Drawing::Size(109, 25);
			this->UbBox->TabIndex = 33;
			// 
			// SkewedBox
			// 
			this->SkewedBox->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->SkewedBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->SkewedBox->Cursor = System::Windows::Forms::Cursors::Default;
			this->SkewedBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SkewedBox->ForeColor = System::Drawing::Color::White;
			this->SkewedBox->Location = System::Drawing::Point(994, 572);
			this->SkewedBox->Multiline = true;
			this->SkewedBox->Name = L"SkewedBox";
			this->SkewedBox->ReadOnly = true;
			this->SkewedBox->Size = System::Drawing::Size(109, 25);
			this->SkewedBox->TabIndex = 34;
			// 
			// Q3Box
			// 
			this->Q3Box->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Q3Box->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Q3Box->Cursor = System::Windows::Forms::Cursors::Default;
			this->Q3Box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Q3Box->ForeColor = System::Drawing::Color::White;
			this->Q3Box->Location = System::Drawing::Point(949, 423);
			this->Q3Box->Multiline = true;
			this->Q3Box->Name = L"Q3Box";
			this->Q3Box->ReadOnly = true;
			this->Q3Box->Size = System::Drawing::Size(109, 25);
			this->Q3Box->TabIndex = 35;
			// 
			// SortedBox
			// 
			this->SortedBox->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->SortedBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->SortedBox->Cursor = System::Windows::Forms::Cursors::Default;
			this->SortedBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SortedBox->ForeColor = System::Drawing::Color::White;
			this->SortedBox->Location = System::Drawing::Point(277, 304);
			this->SortedBox->Multiline = true;
			this->SortedBox->Name = L"SortedBox";
			this->SortedBox->ReadOnly = true;
			this->SortedBox->Size = System::Drawing::Size(529, 25);
			this->SortedBox->TabIndex = 36;
			// 
			// ModeBox
			// 
			this->ModeBox->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ModeBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->ModeBox->Cursor = System::Windows::Forms::Cursors::Default;
			this->ModeBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ModeBox->ForeColor = System::Drawing::Color::White;
			this->ModeBox->Location = System::Drawing::Point(277, 345);
			this->ModeBox->Multiline = true;
			this->ModeBox->Name = L"ModeBox";
			this->ModeBox->ReadOnly = true;
			this->ModeBox->Size = System::Drawing::Size(529, 25);
			this->ModeBox->TabIndex = 37;
			// 
			// Reset_textbox_Button
			// 
			this->Reset_textbox_Button->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->Reset_textbox_Button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Reset_textbox_Button->Location = System::Drawing::Point(517, 78);
			this->Reset_textbox_Button->Name = L"Reset_textbox_Button";
			this->Reset_textbox_Button->Size = System::Drawing::Size(92, 21);
			this->Reset_textbox_Button->TabIndex = 38;
			this->Reset_textbox_Button->Text = L"Reset";
			this->Reset_textbox_Button->UseVisualStyleBackColor = true;
			this->Reset_textbox_Button->Click += gcnew System::EventHandler(this, &Form1::Reset_textbox_Button_Click);
			// 
			// show_freqtable_button
			// 
			this->show_freqtable_button->FlatAppearance->BorderColor = System::Drawing::Color::Blue;
			this->show_freqtable_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->show_freqtable_button->Location = System::Drawing::Point(1006, 259);
			this->show_freqtable_button->Name = L"show_freqtable_button";
			this->show_freqtable_button->Size = System::Drawing::Size(143, 30);
			this->show_freqtable_button->TabIndex = 39;
			this->show_freqtable_button->Text = L"Show Frequancy Table ->";
			this->show_freqtable_button->UseVisualStyleBackColor = true;
			this->show_freqtable_button->Click += gcnew System::EventHandler(this, &Form1::show_freqtable_button_Click);
			// 
			// FreqTable
			// 
			dataGridViewCellStyle7->BackColor = System::Drawing::Color::Black;
			dataGridViewCellStyle7->ForeColor = System::Drawing::Color::White;
			this->FreqTable->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle7;
			this->FreqTable->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->FreqTable->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->FreqTable->BackgroundColor = System::Drawing::Color::Black;
			this->FreqTable->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->FreqTable->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle8->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->FreqTable->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle8;
			this->FreqTable->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->FreqTable->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->Column1, this->Column2 });
			this->FreqTable->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->FreqTable->GridColor = System::Drawing::Color::White;
			this->FreqTable->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->FreqTable->Location = System::Drawing::Point(1172, 252);
			this->FreqTable->Name = L"FreqTable";
			this->FreqTable->ReadOnly = true;
			dataGridViewCellStyle11->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle11->BackColor = System::Drawing::Color::Black;
			dataGridViewCellStyle11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle11->ForeColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle11->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle11->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle11->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->FreqTable->RowHeadersDefaultCellStyle = dataGridViewCellStyle11;
			this->FreqTable->RowHeadersVisible = false;
			dataGridViewCellStyle12->BackColor = System::Drawing::Color::Black;
			this->FreqTable->RowsDefaultCellStyle = dataGridViewCellStyle12;
			this->FreqTable->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::Black;
			this->FreqTable->Size = System::Drawing::Size(305, 363);
			this->FreqTable->TabIndex = 40;
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::DisplayedCells;
			dataGridViewCellStyle9->BackColor = System::Drawing::Color::Black;
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Column1->DefaultCellStyle = dataGridViewCellStyle9;
			this->Column1->FillWeight = 180.9137F;
			this->Column1->HeaderText = L"Data";
			this->Column1->MinimumWidth = 100;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			dataGridViewCellStyle10->BackColor = System::Drawing::Color::Black;
			dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Column2->DefaultCellStyle = dataGridViewCellStyle10;
			this->Column2->FillWeight = 4.086288F;
			this->Column2->HeaderText = L"Freq";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// timer1
			// 
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 1;
			this->timer2->Tick += gcnew System::EventHandler(this, &Form1::timer2_Tick);
			// 
			// Class_Width_Box
			// 
			this->Class_Width_Box->BackColor = System::Drawing::Color::Black;
			this->Class_Width_Box->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Class_Width_Box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Class_Width_Box->ForeColor = System::Drawing::Color::White;
			this->Class_Width_Box->Location = System::Drawing::Point(1321, 112);
			this->Class_Width_Box->Name = L"Class_Width_Box";
			this->Class_Width_Box->ReadOnly = true;
			this->Class_Width_Box->Size = System::Drawing::Size(156, 24);
			this->Class_Width_Box->TabIndex = 41;
			// 
			// Num_of_classes_Box
			// 
			this->Num_of_classes_Box->BackColor = System::Drawing::Color::Black;
			this->Num_of_classes_Box->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Num_of_classes_Box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Num_of_classes_Box->ForeColor = System::Drawing::Color::White;
			this->Num_of_classes_Box->Location = System::Drawing::Point(1321, 172);
			this->Num_of_classes_Box->Name = L"Num_of_classes_Box";
			this->Num_of_classes_Box->ReadOnly = true;
			this->Num_of_classes_Box->Size = System::Drawing::Size(156, 22);
			this->Num_of_classes_Box->TabIndex = 42;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(1167, 107);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(127, 25);
			this->label4->TabIndex = 43;
			this->label4->Text = L"Class Width";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(1167, 166);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(131, 25);
			this->label5->TabIndex = 44;
			this->label5->Text = L"# of Classes";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1172, 679);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Num_of_classes_Box);
			this->Controls->Add(this->Class_Width_Box);
			this->Controls->Add(this->FreqTable);
			this->Controls->Add(this->show_freqtable_button);
			this->Controls->Add(this->Reset_textbox_Button);
			this->Controls->Add(this->ModeBox);
			this->Controls->Add(this->SortedBox);
			this->Controls->Add(this->Q3Box);
			this->Controls->Add(this->SkewedBox);
			this->Controls->Add(this->UbBox);
			this->Controls->Add(this->LbBox);
			this->Controls->Add(this->IqrBox);
			this->Controls->Add(this->Q2Box);
			this->Controls->Add(this->Q1Box);
			this->Controls->Add(this->STBox);
			this->Controls->Add(this->MeadianBox);
			this->Controls->Add(this->MeanBox);
			this->Controls->Add(this->RangeBox);
			this->Controls->Add(this->SumBox);
			this->Controls->Add(this->Exit_Button);
			this->Controls->Add(this->Calc_Button);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->Skewed);
			this->Controls->Add(this->UB);
			this->Controls->Add(this->LB);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->IQR);
			this->Controls->Add(this->Q3);
			this->Controls->Add(this->Q2);
			this->Controls->Add(this->Q1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Standerd_deviation);
			this->Controls->Add(this->Range);
			this->Controls->Add(this->Mode);
			this->Controls->Add(this->Sum);
			this->Controls->Add(this->Sorted);
			this->Controls->Add(this->Median);
			this->Controls->Add(this->Mean);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->DoubleBuffered = true;
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"            ";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form1_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form1_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form1_MouseUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->FreqTable))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
#pragma endregion
	private:

		System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		}

		System::String^ str(float x) {
			return System::Convert::ToString(x);
		}

		vector<dl> get_data() {
			vector<double long> items;
			string item = msclr::interop::marshal_as<std::string>(textBox1->Text);
			stringstream ss(item);

			while (ss >> item) {
				items.push_back(stod(item));
			}
			return items;
		}


		bool is_digit() {
			string text = msclr::interop::marshal_as<std::string>(textBox1->Text);

			text.erase(remove(text.begin(), text.end(), ' '), text.end());
			text.erase(remove(text.begin(), text.end(), '\r'), text.end());
			text.erase(remove(text.begin(), text.end(), '\n'), text.end());
			text.erase(remove(text.begin(), text.end(), '.'), text.end());

			return all_of(text.begin(), text.end(), ::isdigit);

		}

		System::Void Calc_Button_Click(System::Object^ sender, System::EventArgs^ e) {

			if (textBox1->Text == "") {
				MessageBox::Show(
					"You must input in the text box ", "ERROR",
					MessageBoxButtons::OK, MessageBoxIcon::Warning
					);
				textBox1->Clear();
			}

			else if (!is_digit()) {
				MessageBox::Show(
					"Check your input it should be all digits.", "ERROR",
					MessageBoxButtons::OK, MessageBoxIcon::Warning
				);
			}

			else {
			
				for each (Control ^ control in this->Controls) {
					if (dynamic_cast<TextBox^>(control) && control != textBox1) {
						control->Text = "";
					}
				}

				vector < dl > items = get_data();
				Stat S = Stat(items);

				vector <double long> sorted_data = S.get_data_sorted();
				for (float q : sorted_data) {
					SortedBox->Text += str((float) q) + " ";
				}

				vector <double long> mode = S.get_mode();
				for (float q : mode) {
					ModeBox->Text += str(q) + " ";
				}
				if (mode.size() == 0)  ModeBox->Text += "No modes";

				double sum = S.get_sum();
				SumBox->Text = str(sum);

				double range = S.get_range();
				RangeBox->Text = str(range);

				double mean = S.get_mean();
				MeanBox->Text = str(mean);

				double median = S.get_median();
				MeadianBox->Text = str(median);

				double standerd_deviation = S.get_standerd_deviation();
				STBox->Text = str(standerd_deviation);

				double q1 = S.get_Q1();
				Q1Box->Text = str(q1);

				double q2 = S.get_Q2();
				Q2Box->Text = str(q2);

				double q3 = S.get_Q3();
				Q3Box->Text = str(q3);

				double iqr = S.get_iqr();
				IqrBox->Text = str(iqr);

				double lb = S.get_lb();
				LbBox->Text = str(lb);

				double ub = S.get_ub();
				UbBox->Text = str(ub);

				if (mean > median) {
					SkewedBox->Text = "Postive skewed";
				}
				else if (mean < median) {
					SkewedBox->Text = "Negative skewed";
				}
				else {
					SkewedBox->Text = "Symetric";
				}
			}

		}

		System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
			if (e->KeyValue == (int)Keys::Enter) {
				Calc_Button->PerformClick();
			}
		}

		System::Void Exit_Button_Click(System::Object^ sender, System::EventArgs^ e) {
			if (
				MessageBox::Show(
				"Do you want to exit ? ", "Exit prompt!",
				MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes
				) {
				Application::Exit();
			}
		}

		System::Void Reset_textbox_Button_Click(System::Object^ sender, System::EventArgs^ e) {
			for each (Control ^ control in this->Controls) {
				if (dynamic_cast<TextBox^>(control))
					control->Text = "";
			}
			int rowCount = FreqTable->RowCount;
			rowCount--;
			while (rowCount--) {
				FreqTable->Rows->RemoveAt(0);
			}

			if (show_freqtable_button->Text == "Hide Frequancy Table <-") {
				timer2->Start();
				show_freqtable_button->Text = "Show Frequancy Table ->";
			}

		}

	
		System::Void show_freqtable_button_Click(System::Object^ sender, System::EventArgs^ e) {
			if (textBox1->Text == "") {
				MessageBox::Show(
					"You must input in the text box ", "ERROR",
					MessageBoxButtons::OK, MessageBoxIcon::Warning
				);
				return;
				textBox1->Clear();
			}

			else if (!is_digit()) {
				MessageBox::Show(
					"Check your input it should be all digits.", "ERROR",
					MessageBoxButtons::OK, MessageBoxIcon::Warning
				);
			}
			else {
				vector < dl > items = get_data();
				Stat S = Stat(items);

				Num_of_classes_Box->Text = str(S.get_num_classes());
				Class_Width_Box->Text = str(S.get_class_width());
				
				int rowCount = FreqTable->RowCount;
				rowCount--;
				while (rowCount--) {
					FreqTable->Rows->RemoveAt(0);
				}

				auto class_freq = S.get_map_of_class_freq();
				for (auto q : class_freq) {
					System::String^ interval = gcnew System::String(q.first.c_str());
					System::String^ freq = str(q.second);
					FreqTable->Rows->Add(interval, freq);
				}
				if (show_freqtable_button->Text == "Show Frequancy Table ->") {
					timer1->Start();
					show_freqtable_button->Text = "Hide Frequancy Table <-";
					return;
				}
				else {
					timer2->Start();
					show_freqtable_button->Text = "Show Frequancy Table ->";
					return;
				}
			}
			
		}
		
		
		int count = 0;

		System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
			if (count < 10) {
				Form::Width += 34;
				count++;
				show_freqtable_button->Enabled = false;
			}
			else {
				timer1->Stop();
				show_freqtable_button->Enabled = true;
			}
		}
		System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
			if (count > 0 ) {
				Form::Width -= 34;
				count--;
				show_freqtable_button->Enabled = false;
			}
			else {
				timer2->Stop();
				show_freqtable_button->Enabled = true;
			}
		}

		//to make the form movable
		bool dragging;
		Point offset;
		System::Void Form1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			//check whether able to move

			if (dragging) {
				Point currentScreenPosition = PointToScreen(Point(e->X, e->Y));
				Location = Point(currentScreenPosition.X - offset.X, currentScreenPosition.Y - offset.Y);
			}

		}
		System::Void Form1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			// disable dragging 
			dragging = false;
		}
		System::Void Form1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			//enable dragging 
			dragging = true;
			offset.X = e->X;
			offset.Y = e->Y;
		}

	};
}