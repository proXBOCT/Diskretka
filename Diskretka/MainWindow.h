#pragma once
#include "HelpWindow.h"
#include "Modules.h"

namespace Diskretka {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;

	/// <summary>
	/// ������ ��� MainWindow
	/// </summary>
public ref class MainWindow : public System::Windows::Forms::Form
{
public:
	MainWindow(void)
	{
		InitializeComponent();
		//
		//TODO: �������� ��� ������������
		//
	}

protected:
	/// <summary>
	/// ���������� ��� ������������ �������.
	/// </summary>
	~MainWindow()
	{
		if (components)
		{
			delete components;
		}
	}
private: System::Windows::Forms::MenuStrip^  menuStrip1;
protected:
private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  �����ToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem;
private: System::Windows::Forms::ListBox^  listBoxMain;


private: System::Windows::Forms::Button^  Choose;
private: System::Windows::Forms::TextBox^  NaturtextBox1;

private: System::Windows::Forms::TextBox^  NaturtextBox2;
public: System::Windows::Forms::Label^  Naturlabel1;
private:




public: System::Windows::Forms::Button^  Naturbutton1;

private: System::Windows::Forms::Label^  Naturlabel2;

private: System::Windows::Forms::Label^  Naturlabel3;
private: System::Windows::Forms::ComboBox^  comboBox1;
private: System::Windows::Forms::TextBox^  NaturtextBox3;
private: System::Windows::Forms::Label^  Naturlabel4;
private: System::Windows::Forms::Label^  Oglavleniye;
private: System::Windows::Forms::Label^  tekushi;

private:
private: System::Windows::Forms::Label^  Otvet;
private: System::Windows::Forms::CheckBox^  checkBox1;
private: System::Windows::Forms::ListBox^  HistorylistBox1;
public: System::Windows::Forms::Button^  button2;
public: System::Windows::Forms::Button^  button3;

public:

public:
private:


public:


private:
	/// <summary>
	/// ������������ ���������� ������������.
	/// </summary>
	System::ComponentModel::Container ^components;

	void PokazatBloki(bool a)
	{

		Naturlabel1->Text = "";
		Naturbutton1->Visible = a;
		NaturtextBox1->Visible = a;
		NaturtextBox2->Visible = a;
		Naturlabel2->Visible = a;
		Naturlabel3->Visible = a;
		Naturlabel4->Visible = a;
		NaturtextBox3->Visible = a;
		tekushi->Visible = a;
		Oglavleniye->Visible = a;
		checkBox1->Visible = a;
		Otvet->Visible = false;
		NaturtextBox1->ForeColor = Color::DarkGray;
		NaturtextBox2->ForeColor = Color::DarkGray;
		NaturtextBox3->ForeColor = Color::DarkGray;
		button2->Visible = false;
		button3->Visible = false;
		Oglavleniye->Text = listBoxMain->SelectedItem->ToString();
	}

#pragma region Windows Form Designer generated code
	/// <summary>
	/// ��������� ����� ��� ��������� ������������ � �� ��������� 
	/// ���������� ����� ������ � ������� ��������� ����.
	/// </summary>
	void InitializeComponent(void)
	{
		this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
		this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
		this->listBoxMain = (gcnew System::Windows::Forms::ListBox());
		this->Choose = (gcnew System::Windows::Forms::Button());
		this->NaturtextBox1 = (gcnew System::Windows::Forms::TextBox());
		this->NaturtextBox2 = (gcnew System::Windows::Forms::TextBox());
		this->Naturlabel1 = (gcnew System::Windows::Forms::Label());
		this->Naturbutton1 = (gcnew System::Windows::Forms::Button());
		this->Naturlabel2 = (gcnew System::Windows::Forms::Label());
		this->Naturlabel3 = (gcnew System::Windows::Forms::Label());
		this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
		this->NaturtextBox3 = (gcnew System::Windows::Forms::TextBox());
		this->Naturlabel4 = (gcnew System::Windows::Forms::Label());
		this->Oglavleniye = (gcnew System::Windows::Forms::Label());
		this->tekushi = (gcnew System::Windows::Forms::Label());
		this->Otvet = (gcnew System::Windows::Forms::Label());
		this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
		this->HistorylistBox1 = (gcnew System::Windows::Forms::ListBox());
		this->button2 = (gcnew System::Windows::Forms::Button());
		this->button3 = (gcnew System::Windows::Forms::Button());
		this->menuStrip1->SuspendLayout();
		this->SuspendLayout();
		// 
		// menuStrip1
		// 
		this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
		this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
			this->����ToolStripMenuItem,
				this->������ToolStripMenuItem
		});
		this->menuStrip1->Location = System::Drawing::Point(0, 0);
		this->menuStrip1->Name = L"menuStrip1";
		this->menuStrip1->Padding = System::Windows::Forms::Padding(8, 2, 0, 2);
		this->menuStrip1->Size = System::Drawing::Size(1703, 28);
		this->menuStrip1->TabIndex = 0;
		this->menuStrip1->Text = L"menuStrip1";
		// 
		// ����ToolStripMenuItem
		// 
		this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->�����ToolStripMenuItem });
		this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
		this->����ToolStripMenuItem->Size = System::Drawing::Size(57, 24);
		this->����ToolStripMenuItem->Text = L"����";
		// 
		// �����ToolStripMenuItem
		// 
		this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
		this->�����ToolStripMenuItem->Size = System::Drawing::Size(128, 26);
		this->�����ToolStripMenuItem->Text = L"�����";
		// 
		// ������ToolStripMenuItem
		// 
		this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
		this->������ToolStripMenuItem->Size = System::Drawing::Size(81, 24);
		this->������ToolStripMenuItem->Text = L"������";
		this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::������ToolStripMenuItem_Click);
		// 
		// listBoxMain
		// 
		this->listBoxMain->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
			| System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->listBoxMain->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
		this->listBoxMain->Cursor = System::Windows::Forms::Cursors::Default;
		this->listBoxMain->Enabled = false;
		this->listBoxMain->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
		this->listBoxMain->FormattingEnabled = true;
		this->listBoxMain->ItemHeight = 29;
		this->listBoxMain->Location = System::Drawing::Point(16, 80);
		this->listBoxMain->Margin = System::Windows::Forms::Padding(4);
		this->listBoxMain->Name = L"listBoxMain";
		this->listBoxMain->Size = System::Drawing::Size(927, 555);
		this->listBoxMain->TabIndex = 1;
		// 
		// Choose
		// 
		this->Choose->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->Choose->Cursor = System::Windows::Forms::Cursors::Hand;
		this->Choose->Enabled = false;
		this->Choose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
		this->Choose->Location = System::Drawing::Point(16, 704);
		this->Choose->Margin = System::Windows::Forms::Padding(4);
		this->Choose->Name = L"Choose";
		this->Choose->Size = System::Drawing::Size(121, 48);
		this->Choose->TabIndex = 2;
		this->Choose->Text = L"�������";
		this->Choose->UseVisualStyleBackColor = true;
		this->Choose->Click += gcnew System::EventHandler(this, &MainWindow::Choose_Click);
		// 
		// NaturtextBox1
		// 
		this->NaturtextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
			| System::Windows::Forms::AnchorStyles::Right));
		this->NaturtextBox1->BackColor = System::Drawing::SystemColors::InactiveBorder;
		this->NaturtextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
		this->NaturtextBox1->ForeColor = System::Drawing::Color::DarkGray;
		this->NaturtextBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
		this->NaturtextBox1->Location = System::Drawing::Point(964, 196);
		this->NaturtextBox1->Margin = System::Windows::Forms::Padding(4);
		this->NaturtextBox1->Name = L"NaturtextBox1";
		this->NaturtextBox1->Size = System::Drawing::Size(525, 38);
		this->NaturtextBox1->TabIndex = 3;
		this->NaturtextBox1->Visible = false;
		this->NaturtextBox1->Click += gcnew System::EventHandler(this, &MainWindow::NaturtextBox1_Click);
		this->NaturtextBox1->LostFocus += gcnew System::EventHandler(this, &MainWindow::NaturtextBox1_LostFocus);
		// 
		// NaturtextBox2
		// 
		this->NaturtextBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
			| System::Windows::Forms::AnchorStyles::Right));
		this->NaturtextBox2->BackColor = System::Drawing::SystemColors::InactiveBorder;
		this->NaturtextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
		this->NaturtextBox2->ForeColor = System::Drawing::Color::DarkGray;
		this->NaturtextBox2->Location = System::Drawing::Point(960, 273);
		this->NaturtextBox2->Margin = System::Windows::Forms::Padding(4);
		this->NaturtextBox2->Name = L"NaturtextBox2";
		this->NaturtextBox2->Size = System::Drawing::Size(525, 38);
		this->NaturtextBox2->TabIndex = 4;
		this->NaturtextBox2->Visible = false;
		this->NaturtextBox2->Click += gcnew System::EventHandler(this, &MainWindow::NaturtextBox2_Click);
		this->NaturtextBox2->LostFocus += gcnew System::EventHandler(this, &MainWindow::NaturtextBox2_LostFocus);
		// 
		// Naturlabel1
		// 
		this->Naturlabel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
			| System::Windows::Forms::AnchorStyles::Right));
		this->Naturlabel1->AutoEllipsis = true;
		this->Naturlabel1->AutoSize = true;
		this->Naturlabel1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
		this->Naturlabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
		this->Naturlabel1->ForeColor = System::Drawing::Color::Black;
		this->Naturlabel1->Location = System::Drawing::Point(1006, 410);
		this->Naturlabel1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->Naturlabel1->Name = L"Naturlabel1";
		this->Naturlabel1->Size = System::Drawing::Size(0, 31);
		this->Naturlabel1->TabIndex = 6;
		// 
		// Naturbutton1
		// 
		this->Naturbutton1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
		this->Naturbutton1->Cursor = System::Windows::Forms::Cursors::Hand;
		this->Naturbutton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
		this->Naturbutton1->Location = System::Drawing::Point(964, 320);
		this->Naturbutton1->Margin = System::Windows::Forms::Padding(4);
		this->Naturbutton1->Name = L"Naturbutton1";
		this->Naturbutton1->Size = System::Drawing::Size(169, 52);
		this->Naturbutton1->TabIndex = 7;
		this->Naturbutton1->Text = L"���������";
		this->Naturbutton1->UseVisualStyleBackColor = true;
		this->Naturbutton1->Visible = false;
		this->Naturbutton1->Click += gcnew System::EventHandler(this, &MainWindow::Naturbutton1_Click);
		// 
		// Naturlabel2
		// 
		this->Naturlabel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
			| System::Windows::Forms::AnchorStyles::Right));
		this->Naturlabel2->AutoSize = true;
		this->Naturlabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
		this->Naturlabel2->Location = System::Drawing::Point(958, 161);
		this->Naturlabel2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->Naturlabel2->Name = L"Naturlabel2";
		this->Naturlabel2->Size = System::Drawing::Size(188, 31);
		this->Naturlabel2->TabIndex = 8;
		this->Naturlabel2->Text = L"������ �����";
		this->Naturlabel2->Visible = false;
		// 
		// Naturlabel3
		// 
		this->Naturlabel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
		this->Naturlabel3->AutoSize = true;
		this->Naturlabel3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
		this->Naturlabel3->Location = System::Drawing::Point(958, 238);
		this->Naturlabel3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->Naturlabel3->Name = L"Naturlabel3";
		this->Naturlabel3->Size = System::Drawing::Size(184, 31);
		this->Naturlabel3->TabIndex = 9;
		this->Naturlabel3->Text = L"������ �����";
		this->Naturlabel3->Visible = false;
		// 
		// comboBox1
		// 
		this->comboBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
			| System::Windows::Forms::AnchorStyles::Right));
		this->comboBox1->BackColor = System::Drawing::SystemColors::Control;
		this->comboBox1->Cursor = System::Windows::Forms::Cursors::Hand;
		this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
		this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
		this->comboBox1->FormattingEnabled = true;
		this->comboBox1->ImeMode = System::Windows::Forms::ImeMode::Off;
		this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
			L"����������� �����", L"����� �����", L"������������ �����",
				L"����������"
		});
		this->comboBox1->Location = System::Drawing::Point(16, 33);
		this->comboBox1->Margin = System::Windows::Forms::Padding(4);
		this->comboBox1->Name = L"comboBox1";
		this->comboBox1->Size = System::Drawing::Size(927, 37);
		this->comboBox1->TabIndex = 10;
		this->comboBox1->TabStop = false;
		this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MainWindow::comboBox1_SelectedIndexChanged);
		// 
		// NaturtextBox3
		// 
		this->NaturtextBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
			| System::Windows::Forms::AnchorStyles::Right));
		this->NaturtextBox3->BackColor = System::Drawing::SystemColors::InactiveBorder;
		this->NaturtextBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
		this->NaturtextBox3->ForeColor = System::Drawing::Color::DarkGray;
		this->NaturtextBox3->Location = System::Drawing::Point(964, 115);
		this->NaturtextBox3->Margin = System::Windows::Forms::Padding(4);
		this->NaturtextBox3->Name = L"NaturtextBox3";
		this->NaturtextBox3->Size = System::Drawing::Size(525, 38);
		this->NaturtextBox3->TabIndex = 11;
		this->NaturtextBox3->Visible = false;
		this->NaturtextBox3->Click += gcnew System::EventHandler(this, &MainWindow::NaturtextBox3_Click);
		this->NaturtextBox3->LostFocus += gcnew System::EventHandler(this, &MainWindow::NaturtextBox3_LostFocus);
		// 
		// Naturlabel4
		// 
		this->Naturlabel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
			| System::Windows::Forms::AnchorStyles::Right));
		this->Naturlabel4->AutoSize = true;
		this->Naturlabel4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
		this->Naturlabel4->Location = System::Drawing::Point(964, 80);
		this->Naturlabel4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->Naturlabel4->Name = L"Naturlabel4";
		this->Naturlabel4->Size = System::Drawing::Size(182, 31);
		this->Naturlabel4->TabIndex = 12;
		this->Naturlabel4->Text = L"������ �����";
		this->Naturlabel4->Visible = false;
		// 
		// Oglavleniye
		// 
		this->Oglavleniye->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
		this->Oglavleniye->AutoSize = true;
		this->Oglavleniye->BackColor = System::Drawing::Color::WhiteSmoke;
		this->Oglavleniye->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
		this->Oglavleniye->Location = System::Drawing::Point(145, 715);
		this->Oglavleniye->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->Oglavleniye->Name = L"Oglavleniye";
		this->Oglavleniye->Size = System::Drawing::Size(70, 26);
		this->Oglavleniye->TabIndex = 13;
		this->Oglavleniye->Text = L"label1";
		this->Oglavleniye->Visible = false;
		// 
		// tekushi
		// 
		this->tekushi->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
		this->tekushi->AutoSize = true;
		this->tekushi->Location = System::Drawing::Point(151, 695);
		this->tekushi->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->tekushi->Name = L"tekushi";
		this->tekushi->Size = System::Drawing::Size(115, 17);
		this->tekushi->TabIndex = 14;
		this->tekushi->Text = L"������� �����:";
		this->tekushi->Visible = false;
		// 
		// Otvet
		// 
		this->Otvet->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
		this->Otvet->AutoSize = true;
		this->Otvet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
		this->Otvet->Location = System::Drawing::Point(965, 384);
		this->Otvet->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
		this->Otvet->Name = L"Otvet";
		this->Otvet->Size = System::Drawing::Size(79, 26);
		this->Otvet->TabIndex = 16;
		this->Otvet->Text = L"�����:";
		this->Otvet->Visible = false;
		// 
		// checkBox1
		// 
		this->checkBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
			| System::Windows::Forms::AnchorStyles::Right));
		this->checkBox1->AutoSize = true;
		this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
		this->checkBox1->Location = System::Drawing::Point(984, 459);
		this->checkBox1->Margin = System::Windows::Forms::Padding(4);
		this->checkBox1->Name = L"checkBox1";
		this->checkBox1->Size = System::Drawing::Size(301, 29);
		this->checkBox1->TabIndex = 17;
		this->checkBox1->Text = L"�������� ������� ��������";
		this->checkBox1->UseVisualStyleBackColor = true;
		this->checkBox1->Visible = false;
		this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MainWindow::checkBox1_CheckedChanged);
		// 
		// HistorylistBox1
		// 
		this->HistorylistBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
			| System::Windows::Forms::AnchorStyles::Right));
		this->HistorylistBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
		this->HistorylistBox1->FormattingEnabled = true;
		this->HistorylistBox1->ItemHeight = 20;
		this->HistorylistBox1->Location = System::Drawing::Point(970, 496);
		this->HistorylistBox1->Margin = System::Windows::Forms::Padding(4);
		this->HistorylistBox1->Name = L"HistorylistBox1";
		this->HistorylistBox1->Size = System::Drawing::Size(515, 84);
		this->HistorylistBox1->TabIndex = 18;
		this->HistorylistBox1->Visible = false;
		// 
		// button2
		// 
		this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
		this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
		this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
		this->button2->Location = System::Drawing::Point(964, 320);
		this->button2->Margin = System::Windows::Forms::Padding(4);
		this->button2->Name = L"button2";
		this->button2->Size = System::Drawing::Size(169, 52);
		this->button2->TabIndex = 19;
		this->button2->Text = L"���������";
		this->button2->UseVisualStyleBackColor = true;
		this->button2->Visible = false;
		this->button2->Click += gcnew System::EventHandler(this, &MainWindow::button2_Click);
		// 
		// button3
		// 
		this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
		this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
		this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13));
		this->button3->Location = System::Drawing::Point(964, 319);
		this->button3->Margin = System::Windows::Forms::Padding(4);
		this->button3->Name = L"button3";
		this->button3->Size = System::Drawing::Size(169, 52);
		this->button3->TabIndex = 20;
		this->button3->Text = L"���������";
		this->button3->UseVisualStyleBackColor = true;
		this->button3->Visible = false;
		this->button3->Click += gcnew System::EventHandler(this, &MainWindow::button3_Click);
		// 
		// MainWindow
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->BackColor = System::Drawing::Color::WhiteSmoke;
		this->ClientSize = System::Drawing::Size(1703, 767);
		this->Controls->Add(this->button3);
		this->Controls->Add(this->button2);
		this->Controls->Add(this->HistorylistBox1);
		this->Controls->Add(this->checkBox1);
		this->Controls->Add(this->Otvet);
		this->Controls->Add(this->tekushi);
		this->Controls->Add(this->Oglavleniye);
		this->Controls->Add(this->Naturlabel4);
		this->Controls->Add(this->NaturtextBox3);
		this->Controls->Add(this->comboBox1);
		this->Controls->Add(this->Naturlabel3);
		this->Controls->Add(this->Naturlabel2);
		this->Controls->Add(this->Naturbutton1);
		this->Controls->Add(this->Naturlabel1);
		this->Controls->Add(this->NaturtextBox2);
		this->Controls->Add(this->NaturtextBox1);
		this->Controls->Add(this->Choose);
		this->Controls->Add(this->listBoxMain);
		this->Controls->Add(this->menuStrip1);
		this->MainMenuStrip = this->menuStrip1;
		this->Margin = System::Windows::Forms::Padding(4);
		this->Name = L"MainWindow";
		this->Text = L"������ �� ��";
		this->menuStrip1->ResumeLayout(false);
		this->menuStrip1->PerformLayout();
		this->ResumeLayout(false);
		this->PerformLayout();

	}
#pragma endregion

	int current_select, selected_Menu;
private: System::Void Choose_Click(System::Object^  sender, System::EventArgs^  e) {
	switch (selected_Menu) //��������� ������ ��� ����� � ������ ������ ��� ������ ��������� �������� �� ������(������ �������������� ��������)
	{
	case 0: //���� �����������
	{
		switch (listBoxMain->SelectedIndex)
		{
		case 0: //�������� �����
		{
			Naturlabel3->Text = "������ �����";
			Naturlabel2->Text = "������ �����";
			Naturbutton1->Text = "��������";
			NaturtextBox1->Text = "����������� �����(0,1,2,...)";
			NaturtextBox2->Text = "����������� �����(0,1,2,...)";
			PokazatBloki(true);
			Naturlabel4->Visible = false;
			NaturtextBox3->Visible = false;
			current_select = 0;
			break;
		}
		case 1: // �������� �� 0
		{
			Naturlabel3->Text = "�����";
			Naturbutton1->Text = "���������";
			PokazatBloki(true);
			NaturtextBox2->Text = "����������� �����(0,1,2,...)";
			Naturlabel2->Visible = false;
			NaturtextBox1->Visible = false;
			Naturlabel4->Visible = false;
			NaturtextBox3->Visible = false;
			current_select = 1;
			break;
		}
		case 2: // ���������� 1 � ������������ �����
		{
			Naturlabel3->Text = "�����";
			Naturbutton1->Text = "���������";
			PokazatBloki(true);
			NaturtextBox2->Text = "����������� �����(0,1,2,...)";
			Naturlabel2->Visible = false;
			NaturtextBox1->Visible = false;
			Naturlabel4->Visible = false;
			NaturtextBox3->Visible = false;
			current_select = 2;
			break;
		}
		case 3: // �������� ����������� �����
		{
			Naturlabel3->Text = "������ �����";
			Naturlabel2->Text = "������ �����";
			Naturbutton1->Text = "���������";
			PokazatBloki(true);
			NaturtextBox1->Text = "����������� �����(0,1,2,...)";
			NaturtextBox2->Text = "����������� �����(0,1,2,...)";
			Naturlabel4->Visible = false;
			NaturtextBox3->Visible = false;
			current_select = 3;
			break;
		}
		case 4: // ��������� �� ������� �������� ������ ������� ���� ������
		{
			Naturlabel3->Text = "������ �����";
			Naturlabel2->Text = "������ �����";
			Naturbutton1->Text = "���������";
			PokazatBloki(true);
			NaturtextBox1->Text = "����������� ����� A(0,1,2,...) (A>=B)";
			NaturtextBox2->Text = "����������� ����� B(0,1,2,...) (B<=A)";
			Naturlabel4->Visible = false;
			NaturtextBox3->Visible = false;
			current_select = 4;
			break;
		}
		case 5: // ��������� ������������ �� �����
		{
			current_select = 5;
			Naturbutton1->Text = "���������";
			PokazatBloki(true);
			Naturlabel4->Visible = false;
			NaturtextBox3->Visible = false;
			NaturtextBox1->Text = "����������� �����(0,1,2,...)";
			NaturtextBox2->Text = "�����(�� 0 �� 9)";
			Naturlabel3->Text = "�����, �� ������� ����� ��������";
			Naturlabel2->Text = "����������� �����";
			break;
		}
		case 6: // ��������� ������������ �� 10^k
		{
			Naturbutton1->Text = "���������";
			Naturlabel3->Text = "k";
			Naturlabel2->Text = "����������� �����";
			NaturtextBox1->Text = "����������� �����(0,1,2,...)";
			NaturtextBox2->Text = "����������� �����(0,1,2,...)";
			PokazatBloki(true);
			Naturlabel4->Visible = false;
			NaturtextBox3->Visible = false;
			current_select = 6;
			break;
		}
		case 7: // ��������� ����������� �����
		{
			Naturlabel3->Text = "������ �����";
			Naturlabel2->Text = "������ �����";
			Naturbutton1->Text = "���������";
			NaturtextBox1->Text = "����������� �����(0,1,2,...)";
			NaturtextBox2->Text = "����������� �����(0,1,2,...)";
			PokazatBloki(true);
			Naturlabel4->Visible = false;
			NaturtextBox3->Visible = false;
			current_select = 7;
			break;
		}
		case 8: // ��������� �� ������������ ������� ������������, ���������� �� �����
		{
			Naturlabel4->Text = "�����";
			Naturlabel3->Text = "������ �����";
			Naturlabel2->Text = "������ �����";
			Naturbutton1->Text = "���������";
			NaturtextBox1->Text = "����������� �����(0,1,2,...)";
			NaturtextBox2->Text = "����������� �����(0,1,2,...)";
			NaturtextBox3->Text = "�����(�� 0 �� 9)";
			PokazatBloki(true);
			current_select = 8;
			break;
		}
		case 9: // ���������� ������ ����� ������� �������� ������������ �� �������, ����������� �� 10^k, ��� k - ����� ������� ���� ����� (����� ��������� � ����)
		{
			Naturlabel3->Text = "������ �����";
			Naturlabel2->Text = "������ �����";
			Naturbutton1->Text = "���������";
			NaturtextBox1->Text = "����������� �����(0,1,2,...)";
			NaturtextBox2->Text = "����������� �����(0,1,2,...)";
			PokazatBloki(true);
			Naturlabel4->Visible = false;
			NaturtextBox3->Visible = false;
			current_select = 9;
			break;
		}
		case 10: // ������� �� ������� �������� ������������ ����� �� ������� ��� ������ ����������� � ��������(�������� ������� �� ����)
		{
			Naturlabel3->Text = "������ �����";
			Naturlabel2->Text = "������ �����";
			Naturbutton1->Text = "���������";
			NaturtextBox1->Text = "����������� ����� A(0,1,2,...) (A>=B)";
			NaturtextBox2->Text = "����������� ����� B(0,1,2,...) (B<=A)";
			PokazatBloki(true);
			Naturlabel4->Visible = false;
			NaturtextBox3->Visible = false;
			current_select = 10;
			break;
		}
		case 11: // ������� �� ������� �������� ������������ ����� �� ������� ��� ������ ����������� � ��������(�������� ������� �� ����)
		{
			Naturlabel3->Text = "������ �����(������� ���� ������ �������)";
			Naturlabel2->Text = "������ �����(�������)";
			Naturbutton1->Text = "���������";
			NaturtextBox1->Text = "����������� ����� A(0,1,2,...) (A>=B)";
			NaturtextBox2->Text = "����������� ����� B(0,1,2,...) (B<=A)";
			PokazatBloki(true);
			Naturlabel4->Visible = false;
			NaturtextBox3->Visible = false;
			current_select = 11;
			break;
		}
		case 12: // ��� ����������� �����
		{
			Naturlabel3->Text = "������ �����";
			Naturlabel2->Text = "������ �����";
			Naturbutton1->Text = "���������";
			NaturtextBox1->Text = "����������� �����(0,1,2,...)";
			NaturtextBox2->Text = "����������� �����(0,1,2,...)";
			PokazatBloki(true);
			Naturlabel4->Visible = false;
			NaturtextBox3->Visible = false;
			current_select = 12;
			break;
		}
		case 13: // ��� ����������� �����
		{
			Naturlabel3->Text = "������ �����";
			Naturlabel2->Text = "������ �����";
			Naturbutton1->Text = "���������";
			NaturtextBox1->Text = "����������� �����(0,1,2,...)";
			NaturtextBox2->Text = "����������� �����(0,1,2,...)";
			PokazatBloki(true);
			Naturlabel4->Visible = false;
			NaturtextBox3->Visible = false;
			current_select = 13;
			break;
		}
		}
		break;
	}
	case 1: //���� �����
	{
		switch (listBoxMain->SelectedIndex)
		{
		case 0: // ������ �����
		{
			Naturbutton1->Text = "���������";
			Naturlabel3->Text = "�����";
			NaturtextBox2->Text = "����� �����(-2,-1,0,1,2,...)";
			PokazatBloki(true);
			Naturlabel2->Visible = false;
			NaturtextBox1->Visible = false;
			Naturlabel4->Visible = false;
			NaturtextBox3->Visible = false;
			current_select = 0;
			break;
		}
		case 1: // ���� �����
		{
			Naturbutton1->Text = "���������";
			Naturlabel3->Text = "�����";
			NaturtextBox2->Text = "����� �����(-2,-1,0,1,2,...)";
			PokazatBloki(true);
			Naturlabel2->Visible = false;
			NaturtextBox1->Visible = false;
			Naturlabel4->Visible = false;
			NaturtextBox3->Visible = false;
			current_select = 1;
			break;
		}
		case 2: // ��������� ������ ����� �� -1
		{
			Naturbutton1->Text = "���������";
			Naturlabel3->Text = "�����";
			NaturtextBox2->Text = "����� �����(-2,-1,0,1,2,...)";
			PokazatBloki(true);
			Naturlabel2->Visible = false;
			NaturtextBox1->Visible = false;
			Naturlabel4->Visible = false;
			NaturtextBox3->Visible = false;
			current_select = 2;
			break;
		}
		case 3: // �������������� ������������ ����� � �����
		{
			Naturbutton1->Text = "���������";
			Naturlabel3->Text = "����������� �����";
			NaturtextBox2->Text = "����������� �����(0,1,2,...)";
			PokazatBloki(true);
			Naturlabel2->Visible = false;
			NaturtextBox1->Visible = false;
			Naturlabel4->Visible = false;
			NaturtextBox3->Visible = false;
			current_select = 3;
			break;
		}
		case 4: // �������������� ������ ���������������� ����� � �����������
		{
			Naturbutton1->Text = "���������";
			Naturlabel3->Text = "����� �����";
			NaturtextBox2->Text = "����� �����(-2,-1,0,1,2,...)";
			PokazatBloki(true);
			Naturlabel2->Visible = false;
			NaturtextBox1->Visible = false;
			Naturlabel4->Visible = false;
			NaturtextBox3->Visible = false;
			current_select = 4;
			break;
		}
		case 5: //�������� ���� ����� �����
		{
			Naturbutton1->Text = "���������";
			Naturlabel3->Text = "������ �����";
			Naturlabel2->Text = "������ �����";
			NaturtextBox1->Text = "����� �����(-2,-1,0,1,2,...)";
			NaturtextBox2->Text = "����� �����(-2,-1,0,1,2,...)";
			PokazatBloki(true);
			Naturlabel4->Visible = false;
			NaturtextBox3->Visible = false;
			current_select = 5;
			break;
		}
		case 6: // ��������� ����� �����
		{
			Naturbutton1->Text = "���������";
			Naturlabel3->Text = "������ �����";
			Naturlabel2->Text = "������ �����";
			NaturtextBox1->Text = "����� �����(-2,-1,0,1,2,...)";
			NaturtextBox2->Text = "����� �����(-2,-1,0,1,2,...)";
			PokazatBloki(true);
			Naturlabel4->Visible = false;
			NaturtextBox3->Visible = false;
			current_select = 6;
			break;
		}
		case 7: // ��������� ����� �����
		{
			Naturbutton1->Text = "���������";
			Naturlabel3->Text = "������ �����";
			Naturlabel2->Text = "������ �����";
			NaturtextBox1->Text = "����� �����(-2,-1,0,1,2,...)";
			NaturtextBox2->Text = "����� �����(-2,-1,0,1,2,...)";
			PokazatBloki(true);
			Naturlabel4->Visible = false;
			NaturtextBox3->Visible = false;
			current_select = 7;
			break;
		}
		case 8: //������� �� ������� �������� ������ ����� �� ������� ��� ������ ����������� � ��������(�������� ������� �� ����)
		{
			Naturbutton1->Text = "���������";
			Naturlabel3->Text = "������ �����";
			Naturlabel2->Text = "������ �����";
			NaturtextBox1->Text = "����� �����(-2,-1,0,1,2,...)";
			NaturtextBox2->Text = "����������� �����(1,2,...) 0 ������";
			PokazatBloki(true);
			Naturlabel4->Visible = false;
			NaturtextBox3->Visible = false;
			current_select = 8;
			break;
		}
		case 9: // ������� �� ������� �������� ������ ����� �� ������� ��� ������ ����������� � ��������(�������� ������� �� ����)
		{
			Naturbutton1->Text = "���������";
			Naturlabel3->Text = "������ �����";
			Naturlabel2->Text = "������ �����";
			NaturtextBox1->Text = "����� �����(-2,-1,0,1,2,...)";
			NaturtextBox2->Text = "����������� �����(1,2,...) 0 ������";
			PokazatBloki(true);
			Naturlabel4->Visible = false;
			NaturtextBox3->Visible = false;
			current_select = 9;
			break;
		}
		}
		break;
	}
	case 2: //���� ������������
	{
		switch (listBoxMain->SelectedIndex)
		{
		case 0: // ���������� �����
		{
			Naturlabel3->Text = "�����";
			Naturbutton1->Text = "���������";
			NaturtextBox2->Text = "����� � ���� a/b";
			PokazatBloki(true);
			Naturlabel2->Visible = false;
			NaturtextBox1->Visible = false;
			Naturlabel4->Visible = false;
			NaturtextBox3->Visible = false;
			current_select = 0;
			break;
		}
		case 1: // �������� �� �����
		{
			Naturbutton1->Text = "���������";
			Naturlabel3->Text = "�����";
			NaturtextBox2->Text = "����� � ���� a/b";
			PokazatBloki(true);
			Naturlabel2->Visible = false;
			NaturtextBox1->Visible = false;
			Naturlabel4->Visible = false;
			NaturtextBox3->Visible = false;
			current_select = 1;
			break;
		}
		case 2: // �������������� ������ � �������
		{
			Naturbutton1->Text = "���������";
			Naturlabel3->Text = "�����";
			NaturtextBox2->Text = "����� �����(...,-2,-1,0,1,2,...";
			PokazatBloki(true);
			Naturlabel2->Visible = false;
			NaturtextBox1->Visible = false;
			Naturlabel4->Visible = false;
			NaturtextBox3->Visible = false;
			current_select = 2;
			break;
		}
		case 3: // �������������� �������� � �����
		{
			Naturbutton1->Text = "���������";
			Naturlabel3->Text = "�����";
			NaturtextBox2->Text = "����� � ���� a/b";
			PokazatBloki(true);
			Naturlabel2->Visible = false;
			NaturtextBox1->Visible = false;
			Naturlabel4->Visible = false;
			NaturtextBox3->Visible = false;
			current_select = 3;
			break;
		}
		case 4: // �������� ������
		{
			Naturbutton1->Text = "���������";
			Naturlabel3->Text = "�����";
			NaturtextBox2->Text = "����� � ���� a/b";
			PokazatBloki(true);
			Naturlabel2->Text = "�����";
			NaturtextBox1->Text = "����� � ���� a/b";
			Naturlabel4->Visible = false;
			NaturtextBox3->Visible = false;
			current_select = 4;
			break;
		}
		case 5: // ��������� ������
		{
			Naturbutton1->Text = "���������";
			Naturlabel3->Text = "�����";
			NaturtextBox2->Text = "����� � ���� a/b";
			PokazatBloki(true);
			Naturlabel2->Text = "�����";
			NaturtextBox1->Text = "����� � ���� a/b";
			Naturlabel4->Visible = false;
			NaturtextBox3->Visible = false;
			current_select = 5;
			break;
		}
		case 6: // ��������� ������
		{
			Naturbutton1->Text = "���������";
			Naturlabel3->Text = "�����";
			NaturtextBox2->Text = "����� � ���� a/b";
			PokazatBloki(true);
			Naturlabel2->Text = "�����";
			NaturtextBox1->Text = "����� � ���� a/b";
			current_select = 6;
			Naturlabel4->Visible = false;
			NaturtextBox3->Visible = false;
			break;
		}
		case 7: // ������� ������(�������� ������� �� ����)
		{
			Naturbutton1->Text = "���������";
			Naturlabel3->Text = "�����";
			NaturtextBox2->Text = "����� � ���� a/b , a != 0";
			PokazatBloki(true);
			Naturlabel2->Text = "�����";
			NaturtextBox1->Text = "����� � ���� a/b";
			current_select = 7;
			Naturlabel4->Visible = false;
			NaturtextBox3->Visible = false;
			break;
		}
		}
		break;
	}
	case 3: //���� �����������
	{
		switch (listBoxMain->SelectedIndex)
		{
		case 0: // �������� �����������
		{
			Naturlabel3->Text = "������ ���������";
			Naturlabel2->Text = "������ ���������";
			Naturbutton1->Text = "���������";
			NaturtextBox1->Text = "Ax^n +- Bx^n-t +- ... +- C(n >= 0)";
			NaturtextBox2->Text = "Ax^n +- Bx^n-t +- ... +- C(n >= 0)";
			PokazatBloki(true);
			Naturlabel4->Visible = false;
			NaturtextBox3->Visible = false;
			current_select = 0;
			break;
		}
		case 1: // ��������� �����������
		{
			Naturlabel3->Text = "������ ���������";
			Naturlabel2->Text = "������ ���������";
			Naturbutton1->Text = "���������";
			NaturtextBox1->Text = "Ax^n +- Bx^n-t +- ... +- C(n >= 0)";
			NaturtextBox2->Text = "Ax^n +- Bx^n-t +- ... +- C(n >= 0)";
			PokazatBloki(true);
			Naturlabel4->Visible = false;
			NaturtextBox3->Visible = false;
			current_select = 1;
			break;
		}
		case 2: // ��������� ���������� �� ������������ �����
		{
			Naturlabel3->Text = "�����";
			Naturlabel2->Text = "���������";
			Naturbutton1->Text = "���������";
			NaturtextBox1->Text = "Ax^n +- Bx^n-t +- ... +- C(n >= 0)";
			NaturtextBox2->Text = "����� � ���� a/b";
			PokazatBloki(true);
			Naturlabel4->Visible = false;
			NaturtextBox3->Visible = false;
			current_select = 2;
			break;
		}
		case 3: // ��������� ���������� �� x^k
		{
			Naturbutton1->Text = "���������";
			Naturlabel3->Text = "k";
			PokazatBloki(true);
			NaturtextBox1->Text = "Ax^n +- Bx^n-t +- ... +- C(n >= 0)";
			NaturtextBox2->Text = "����������� �����(0,1,2,...)";
			Naturlabel4->Visible = false;
			NaturtextBox3->Visible = false;
			Naturlabel2->Text = "���������";
			current_select = 3;
			break;
		}
		case 4: // ������� ����������� ����������
		{
			Naturbutton1->Text = "���������";
			Naturlabel3->Text = "���������";
			NaturtextBox2->Text = "Ax^n +- Bx^n-t +- ... +- C(n >= 0)";
			PokazatBloki(true);
			Naturlabel2->Visible = false;
			NaturtextBox1->Visible = false;
			Naturlabel4->Visible = false;
			NaturtextBox3->Visible = false;
			current_select = 4;
			break;
		}
		case 5: // ������� ����������
		{
			Naturlabel3->Text = "���������";
			Naturbutton1->Text = "���������";
			NaturtextBox2->Text = "Ax^n +- Bx^n-t +- ... +- C(n >= 0)";
			PokazatBloki(true);
			Naturlabel2->Visible = false;
			NaturtextBox1->Visible = false;
			Naturlabel4->Visible = false;
			NaturtextBox3->Visible = false;
			current_select = 5;
			break;
		}
		case 6: // ��������� �� ���������� ��� ������������ ������������� � ��� ����������
		{
			Naturlabel3->Text = "���������";

			Naturbutton1->Text = "���������";
			NaturtextBox2->Text = "Ax^n +- Bx^n-t +- ... +- C(n >= 0)";
			PokazatBloki(true);
			Naturlabel2->Visible = false;
			NaturtextBox1->Visible = false;
			Naturlabel4->Visible = false;
			NaturtextBox3->Visible = false;
			current_select = 6;
			break;
		}
		case 7: // ��������� �����������
		{
			Naturlabel3->Text = "������ ���������";
			Naturlabel2->Text = "������ ���������";
			Naturbutton1->Text = "���������";
			NaturtextBox1->Text = "Ax^n +- Bx^n-t +- ... +- C(n >= 0)";
			NaturtextBox2->Text = "Ax^n +- Bx^n-t +- ... +- C(n >= 0)";
			PokazatBloki(true);
			button2->Visible = true;
			Naturbutton1->Visible = false;
			Naturlabel4->Visible = false;
			NaturtextBox3->Visible = false;
			current_select = 7;
			break;
		}
		case 8: // �����������
		{
			Naturbutton1->Text = "���������";
			Naturlabel3->Text = "���������";
			NaturtextBox2->Text = "Ax^n +- Bx^n-t +- ... +- C(n >= 0)";
			PokazatBloki(true);
			button2->Visible = false;
			button3->Visible = true;
			Naturbutton1->Visible = false;
			Naturlabel2->Visible = false;
			NaturtextBox1->Visible = false;
			Naturlabel4->Visible = false;
			NaturtextBox3->Visible = false;
			current_select = 8;
			break;
		}
		
		}
		break;
	}
	}
}
	
	private: System::Void Naturbutton1_Click(System::Object^  sender, System::EventArgs^  e) {
	 //������, ���������� �� ���������� �������	
		{
			switch (selected_Menu)
			{
			case 0: //������ � ������������
			{
				try
				{
					switch (current_select)
					{
					case 0: // ��������� �����������
					{
						Naturlabel1->ForeColor = Color::Black;
						msclr::interop::marshal_context context;
						std::string first = context.marshal_as<std::string>(NaturtextBox1->Text);
						std::string second = context.marshal_as<std::string>(NaturtextBox2->Text);
						if (Naturalnie::checkNumber(first) && Naturalnie::checkNumber(second))
						{
							Naturlabel1->ForeColor = Color::Black;
							Naturalnie::number num[2];
							num[0] = Naturalnie::getNumberFromInt(Convert::ToInt32(NaturtextBox1->Text));
							num[1] = Naturalnie::getNumberFromInt(Convert::ToInt32(NaturtextBox2->Text));
							int ans = Naturalnie::COM_NN_D(num[0], num[1]);
							if (ans == 0)
							{
								Otvet->Visible = true;
								Naturlabel1->Text = "����� �����";
								HistorylistBox1->Items->Add("����� �����");
							}
							else if (ans == 1)
							{
								Otvet->Visible = true;
								Naturlabel1->Text = "������ ����� ������ �������";
								HistorylistBox1->Items->Add("������ ����� ������ �������");
							}
							else
							{
								Otvet->Visible = true;
								Naturlabel1->Text = "������ ����� ������ �������";
								HistorylistBox1->Items->Add("������ ����� ������ �������");
							}

						}
						else
						{
							Naturlabel1->ForeColor = Color::Red;
							Naturlabel1->Text = "������������ ����!";
						}
						break;
					}
					case 1: // �������� �� 0
					{
						Naturlabel1->ForeColor = Color::Black;
						msclr::interop::marshal_context context;
						std::string second = context.marshal_as<std::string>(NaturtextBox2->Text);
						if (Naturalnie::checkNumber(second))
						{
							Naturlabel1->ForeColor = Color::Black;
							Naturalnie::number num;
							num = Naturalnie::getNumberFromInt(Convert::ToInt32(NaturtextBox2->Text));
							if (Naturalnie::NZER_N_B(num))
							{
								Otvet->Visible = true;
								Naturlabel1->Text = "����� ����� ����";
								HistorylistBox1->Items->Add("����� ����� ����");
							}
							else
							{
								Otvet->Visible = true;
								Naturlabel1->Text = "����� �� ����� ����";
								HistorylistBox1->Items->Add("����� �� ����� ����");
							}
						}
						else
						{
							Naturlabel1->ForeColor = Color::Red;
							Naturlabel1->Text = "������������ ����!";
						}
						break;
					}
					case 2: // ���������� 1 � ������������ �����
					{
						Naturlabel1->ForeColor = Color::Black;
						msclr::interop::marshal_context context;
						std::string second = context.marshal_as<std::string>(NaturtextBox2->Text);
						if (Naturalnie::checkNumber(second))
						{
							Naturlabel1->ForeColor = Color::Black;
							Naturalnie::number num = Naturalnie::getNumberFromInt(Convert::ToInt32(NaturtextBox2->Text));
							num = Naturalnie::ADD_1N_N(num);
							String ^ stroka = gcnew String(Naturalnie::numberToString(num).c_str());
							Naturlabel1->Text = "�����: " + stroka;
							HistorylistBox1->Items->Add(stroka);
							Otvet->Visible = true;
						}
						else
						{
							Naturlabel1->ForeColor = Color::Red;
							Naturlabel1->Text = "������������ ����!";
						}
						break;
					}
					case 3: // �������� ����������� �����
					{
						Naturlabel1->ForeColor = Color::Black;
						msclr::interop::marshal_context context;
						std::string first = context.marshal_as<std::string>(NaturtextBox1->Text);
						std::string second = context.marshal_as<std::string>(NaturtextBox2->Text);
						if (Naturalnie::checkNumber(first) && Naturalnie::checkNumber(second))
						{
							Naturlabel1->ForeColor = Color::Black;
							Naturalnie::number num[2];
							num[0] = Naturalnie::getNumberFromInt(Convert::ToInt32(NaturtextBox1->Text));
							num[1] = Naturalnie::getNumberFromInt(Convert::ToInt32(NaturtextBox2->Text));
							Naturalnie::number ans = Naturalnie::ADD_NN_N(num[0], num[1]);
							String ^ stroka = gcnew String(Naturalnie::numberToString(ans).c_str());
							Naturlabel1->Text = "�����: " + stroka;
							HistorylistBox1->Items->Add(stroka);
							Otvet->Visible = true;

						}
						else
						{
							Naturlabel1->ForeColor = Color::Red;
							Naturlabel1->Text = "������������ ����!";
						}
						break;
					}
					case 4: // ��������� �� ������� �������� ������ �������
					{
						Naturlabel1->ForeColor = Color::Black;
						if (Convert::ToInt32(NaturtextBox1->Text) >= Convert::ToInt32(NaturtextBox2->Text))
						{
							msclr::interop::marshal_context context;
							std::string first = context.marshal_as<std::string>(NaturtextBox1->Text);
							std::string second = context.marshal_as<std::string>(NaturtextBox2->Text);

							if (Naturalnie::checkNumber(first) && Naturalnie::checkNumber(second))
							{
								Naturlabel1->ForeColor = Color::Black;
								Naturalnie::number num[2];
								num[0] = Naturalnie::getNumberFromInt(Convert::ToInt32(NaturtextBox1->Text));
								num[1] = Naturalnie::getNumberFromInt(Convert::ToInt32(NaturtextBox2->Text));
								Naturalnie::number ans = Naturalnie::SUB_NN_N(num[0], num[1]);
								String ^ stroka = gcnew String(Naturalnie::numberToString(ans).c_str());
								Naturlabel1->Text = "�����: " + stroka;
								HistorylistBox1->Items->Add(stroka);
								Otvet->Visible = true;

							}
							else
							{
								Naturlabel1->ForeColor = Color::Red;
								Naturlabel1->Text = "������������ ����!";
							}
						}
						else
						{
							Naturlabel1->ForeColor = Color::Red;
							Naturlabel1->Text = "������������ ����!";
						}
						break;
					}
					case 5: //��������� ������������ �� �����
					{
						msclr::interop::marshal_context context;
						std::string first = context.marshal_as<std::string>(NaturtextBox1->Text);
						std::string second = context.marshal_as<std::string>(NaturtextBox2->Text);
						if (Naturalnie::checkNumber(first) && Naturalnie::checkNumber(second))
						{
							Naturlabel1->ForeColor = Color::Black;
							if ((Convert::ToInt32(NaturtextBox1->Text) < 0) || (Convert::ToInt32(NaturtextBox2->Text) < 0))
							{
								Naturlabel1->ForeColor = Color::Red;
								Naturlabel1->Text = "������� ������������� �����!";
							}
							else
								if ((Convert::ToInt32(NaturtextBox2->Text) < 0 || (Convert::ToInt32(NaturtextBox2->Text) >= 10)))
								{
									Naturlabel1->ForeColor = Color::Red;
									Naturlabel1->Text = "������������ ���� �����!";
								}
								else
								{

									Naturlabel1->ForeColor = Color::Black;
									int D = Convert::ToInt32(NaturtextBox2->Text);
									Naturalnie::number num = Naturalnie::getNumberFromInt(Convert::ToInt32(NaturtextBox1->Text));

									num = Naturalnie::MUL_ND_N(num, D);
									String ^ stroka = gcnew String(Naturalnie::numberToString(num).c_str());
									Naturlabel1->Text = "�����: " + stroka;
									HistorylistBox1->Items->Add(stroka);
									Otvet->Visible = true;
								}
						}
						else
						{
							Naturlabel1->ForeColor = Color::Red;
							Naturlabel1->Text = "������������ ����!";
						}
						break;
					}
					case 6: // ��������� ������������ �� 10^k
					{
						Naturlabel1->ForeColor = Color::Black;
						msclr::interop::marshal_context context;
						std::string first = context.marshal_as<std::string>(NaturtextBox1->Text);
						std::string second = context.marshal_as<std::string>(NaturtextBox2->Text);
						if (Naturalnie::checkNumber(first) && Naturalnie::checkNumber(second))
						{
							if ((Convert::ToInt32(NaturtextBox2->Text) < 0))
							{
								Naturlabel1->ForeColor = Color::Red;
								Naturlabel1->Text = "������������ ���� k!";
							}
							else
							{

								Naturlabel1->ForeColor = Color::Black;
								int D = Convert::ToInt32(NaturtextBox2->Text);
								Naturalnie::number num = Naturalnie::getNumberFromInt(Convert::ToInt32(NaturtextBox1->Text));

								num = Naturalnie::MUL_Nk_N(num, D);
								String ^ stroka = gcnew String(Naturalnie::numberToString(num).c_str());
								Naturlabel1->Text = "�����: " + stroka;
								HistorylistBox1->Items->Add(stroka);
								Otvet->Visible = true;
							}
						}
						else
						{
							Naturlabel1->ForeColor = Color::Red;
							Naturlabel1->Text = "������������ ����!";
						}
						break;
					}
					case 7: // ��������� ����������� �����
					{
						Naturlabel1->ForeColor = Color::Black;
						msclr::interop::marshal_context context;
						std::string first = context.marshal_as<std::string>(NaturtextBox1->Text);
						std::string second = context.marshal_as<std::string>(NaturtextBox2->Text);

						if (Naturalnie::checkNumber(first) && Naturalnie::checkNumber(second))
						{
							Naturlabel1->ForeColor = Color::Black;
							Naturalnie::number num[2];
							num[0] = Naturalnie::getNumberFromInt(Convert::ToInt32(NaturtextBox1->Text));
							num[1] = Naturalnie::getNumberFromInt(Convert::ToInt32(NaturtextBox2->Text));
							Naturalnie::number ans = Naturalnie::MUL_NN_N(num[0], num[1]);
							String ^ stroka = gcnew String(Naturalnie::numberToString(ans).c_str());
							Naturlabel1->Text = "�����: " + stroka;
							HistorylistBox1->Items->Add(stroka);
							Otvet->Visible = true;

						}
						else
						{
							Naturlabel1->ForeColor = Color::Red;
							Naturlabel1->Text = "������������ ����!";
						}
						break;
					}
					case 8: // ��������� �� ������������ ������� ������������, ���������� �� �����
					{
						Naturlabel1->ForeColor = Color::Black;
						msclr::interop::marshal_context context;
						std::string first = context.marshal_as<std::string>(NaturtextBox1->Text);
						std::string second = context.marshal_as<std::string>(NaturtextBox2->Text);

						if (Naturalnie::checkNumber(first) && Naturalnie::checkNumber(second))
						{
							if ((Convert::ToInt32(NaturtextBox3->Text) < 0 || (Convert::ToInt32(NaturtextBox3->Text) >= 10)))
							{
								Naturlabel1->ForeColor = Color::Red;
								Naturlabel1->Text = "������������ ���� �����!";
							}
							else
							{
								int D = Convert::ToInt32(NaturtextBox3->Text);
								Naturlabel1->ForeColor = Color::Black;
								Naturalnie::number num[2];
								num[0] = Naturalnie::getNumberFromInt(Convert::ToInt32(NaturtextBox1->Text));
								num[1] = Naturalnie::getNumberFromInt(Convert::ToInt32(NaturtextBox2->Text));
								Naturalnie::number ans = Naturalnie::SUB_NDN_N(num[0], num[1], D);
								String ^ stroka = gcnew String(Naturalnie::numberToString(ans).c_str());
								Naturlabel1->Text = "�����: " + stroka;
								HistorylistBox1->Items->Add(stroka);
								Otvet->Visible = true;
							}
						}
						else
						{
							Naturlabel1->ForeColor = Color::Red;
							Naturlabel1->Text = "������������ ����!";
						}

						break;
					}
					case 9: // ���������� ������ ����� ������� �������� ������������ �� �������, ����������� �� 10^k, ��� k - ����� ������� ���� ����� (����� ��������� � ����)
					{
						Naturlabel1->ForeColor = Color::Black;
						msclr::interop::marshal_context context;
						std::string first = context.marshal_as<std::string>(NaturtextBox1->Text);
						std::string second = context.marshal_as<std::string>(NaturtextBox2->Text);

						if (Naturalnie::checkNumber(first) && Naturalnie::checkNumber(second))
						{
							if (Convert::ToInt32(NaturtextBox2->Text) == 0 || Convert::ToInt32(NaturtextBox1->Text) == 0)
							{
								Naturlabel1->ForeColor = Color::Red;
								Naturlabel1->Text = "������������ ����!";
							}
							else
							{
								Naturlabel1->ForeColor = Color::Black;
								Naturalnie::number num[2];
								num[0] = Naturalnie::getNumberFromInt(Convert::ToInt32(NaturtextBox1->Text));
								num[1] = Naturalnie::getNumberFromInt(Convert::ToInt32(NaturtextBox2->Text));
								Naturalnie::number ans = Naturalnie::DIV_NN_Dk(num[0], num[1]);
								String ^ stroka = gcnew String(Naturalnie::numberToString(ans).c_str());
								Naturlabel1->Text = "�����: " + stroka;
								HistorylistBox1->Items->Add(stroka);
								Otvet->Visible = true;
							}

						}
						else
						{
							Naturlabel1->ForeColor = Color::Red;
							Naturlabel1->Text = "������������ ����!";
						}
						break;
					}
					case 10: // ������� �� ������� �������� ������������ ����� �� ������� ��� ������ ����������� � ��������(�������� ������� �� ����)
					{
						Naturlabel1->ForeColor = Color::Black;
						msclr::interop::marshal_context context;
						std::string first = context.marshal_as<std::string>(NaturtextBox1->Text);
						std::string second = context.marshal_as<std::string>(NaturtextBox2->Text);

						if (Naturalnie::checkNumber(first) && Naturalnie::checkNumber(second))
						{
							if (Convert::ToInt32(NaturtextBox2->Text) == 0 || Convert::ToInt32(NaturtextBox1->Text) == 0)
							{
								Naturlabel1->ForeColor = Color::Red;
								Naturlabel1->Text = "������������ ����!";
							}
							else
							{
								Naturlabel1->ForeColor = Color::Black;
								Naturalnie::number num[2];
								num[0] = Naturalnie::getNumberFromInt(Convert::ToInt32(NaturtextBox1->Text));
								num[1] = Naturalnie::getNumberFromInt(Convert::ToInt32(NaturtextBox2->Text));
								Naturalnie::number ans = Naturalnie::DIV_NN_N(num[0], num[1]);
								String ^ stroka = gcnew String(Naturalnie::numberToString(ans).c_str());
								Naturlabel1->Text = "�����: " + stroka;
								HistorylistBox1->Items->Add(stroka);
								Otvet->Visible = true;
							}

						}
						else
						{
							Naturlabel1->ForeColor = Color::Red;
							Naturlabel1->Text = "������������ ����!";
						}
						break;
					}
					case 11: // ������� �� ������� �������� ������������ ����� �� ������� ��� ������ ����������� � ��������(�������� ������� �� ����)
					{
						Naturlabel1->ForeColor = Color::Black;
						msclr::interop::marshal_context context;
						std::string first = context.marshal_as<std::string>(NaturtextBox1->Text);
						std::string second = context.marshal_as<std::string>(NaturtextBox2->Text);

						if (Naturalnie::checkNumber(first) && Naturalnie::checkNumber(second))
						{
							if (Convert::ToInt32(NaturtextBox2->Text) == 0 || Convert::ToInt32(NaturtextBox1->Text) == 0)
							{
								Naturlabel1->ForeColor = Color::Red;
								Naturlabel1->Text = "������������ ����!";
							}
							else
							{
								Naturlabel1->ForeColor = Color::Black;
								Naturalnie::number num[2];
								num[0] = Naturalnie::getNumberFromInt(Convert::ToInt32(NaturtextBox1->Text));
								num[1] = Naturalnie::getNumberFromInt(Convert::ToInt32(NaturtextBox2->Text));
								Naturalnie::number ans = Naturalnie::MOD_NN_N(num[0], num[1]);
								String ^ stroka = gcnew String(Naturalnie::numberToString(ans).c_str());
								Naturlabel1->Text = "�����: " + stroka;
								HistorylistBox1->Items->Add(stroka);
								Otvet->Visible = true;
							}

						}
						else
						{
							Naturlabel1->ForeColor = Color::Red;
							Naturlabel1->Text = "������������ ����!";
						}
						break;
					}
					case 12: // ��� ����������� �����
					{
						Naturlabel1->ForeColor = Color::Black;
						msclr::interop::marshal_context context;
						std::string first = context.marshal_as<std::string>(NaturtextBox1->Text);
						std::string second = context.marshal_as<std::string>(NaturtextBox2->Text);

						if (Naturalnie::checkNumber(first) && Naturalnie::checkNumber(second))
						{
							if (Convert::ToInt32(NaturtextBox2->Text) == 0 && Convert::ToInt32(NaturtextBox1->Text) == 0)
							{
								Naturlabel1->ForeColor = Color::Red;
								Naturlabel1->Text = "������������ ����!";
							}
							else
							{
								Naturlabel1->ForeColor = Color::Black;
								Naturalnie::number num[2];
								num[0] = Naturalnie::getNumberFromInt(Convert::ToInt32(NaturtextBox1->Text));
								num[1] = Naturalnie::getNumberFromInt(Convert::ToInt32(NaturtextBox2->Text));
								Naturalnie::number ans = Naturalnie::GCF_NN_N(num[0], num[1]);
								String ^ stroka = gcnew String(Naturalnie::numberToString(ans).c_str());
								Naturlabel1->Text = "�����: " + stroka;
								HistorylistBox1->Items->Add(stroka);
								Otvet->Visible = true;
							}

						}
						else
						{
							Naturlabel1->ForeColor = Color::Red;
							Naturlabel1->Text = "������������ ����!";
						}
						break;
					}
					case 13: // ��� ����������� �����
					{
						Naturlabel1->ForeColor = Color::Black;
						msclr::interop::marshal_context context;
						std::string first = context.marshal_as<std::string>(NaturtextBox1->Text);
						std::string second = context.marshal_as<std::string>(NaturtextBox2->Text);

						if (Naturalnie::checkNumber(first) && Naturalnie::checkNumber(second))
						{
							if (Convert::ToInt32(NaturtextBox2->Text) == 0 || Convert::ToInt32(NaturtextBox1->Text) == 0)
							{
								Naturlabel1->ForeColor = Color::Red;
								Naturlabel1->Text = "������������ ����!";
							}
							else
							{
								Naturlabel1->ForeColor = Color::Black;
								Naturalnie::number num[2];
								num[0] = Naturalnie::getNumberFromInt(Convert::ToInt32(NaturtextBox1->Text));
								num[1] = Naturalnie::getNumberFromInt(Convert::ToInt32(NaturtextBox2->Text));
								Naturalnie::number ans = Naturalnie::LCM_NN_N(num[0], num[1]);
								String ^ stroka = gcnew String(Naturalnie::numberToString(ans).c_str());
								Naturlabel1->Text = "�����: " + stroka;
								HistorylistBox1->Items->Add(stroka);
								Otvet->Visible = true;
							}

						}
						else
						{
							Naturlabel1->ForeColor = Color::Red;
							Naturlabel1->Text = "������������ ����!";
						}
						break;
					}
					}
				}
				catch (std::string& s)
				{
					if (s == "Incorrect")
					{
						Naturlabel1->ForeColor = Diskretka::Color::Red;
						Naturlabel1->Text = "��������� ����!";
					}

				}
				break;
			}
			case 1: //������ � ������
			{
				try
				{
					switch (current_select)
					{
					case 0: //���������� �������� �����
					{
						msclr::interop::marshal_context context;
						std::string second = context.marshal_as<std::string>(NaturtextBox2->Text);
						if (celie::checkCeloe(second))
						{
							Naturlabel1->ForeColor = Color::Black;
							celie::celoe num = celie::getCeloeFromInt(Convert::ToInt32(NaturtextBox2->Text));
							Naturalnie::number ans = celie::ABS_Z_N(num);
							String ^ stroka = gcnew String(Naturalnie::numberToString(ans).c_str());
							Naturlabel1->Text = stroka;
							HistorylistBox1->Items->Add(stroka);
							Otvet->Visible = true;
						}
						else
						{
							Naturlabel1->ForeColor = Color::Red;
							Naturlabel1->Text = "������������ ����!";
						}
						break;
					}
					case 1: //����������� ��������������� �����
					{

						msclr::interop::marshal_context context;
						std::string second = context.marshal_as<std::string>(NaturtextBox2->Text);
						if (celie::checkCeloe(second))
						{
							Naturlabel1->ForeColor = Color::Black;
							celie::celoe num = celie::getCeloeFromInt(Convert::ToInt32(NaturtextBox2->Text));
							int ans = celie::POZ_Z_D(num);
							if (ans == 2)
							{
								Otvet->Visible = true;
								Naturlabel1->Text = "����� �������������!";
								HistorylistBox1->Items->Add("����� �������������!");
							}
							else
								if (ans == 1)
								{
									Otvet->Visible = true;
									Naturlabel1->Text = "����� �������������!";
									HistorylistBox1->Items->Add("����� �������������!");
								}
								else
								{
									Otvet->Visible = true;
									Naturlabel1->Text = "����� ����� ����!";
									HistorylistBox1->Items->Add("����� ����� ����!");
								}
						}
						else
						{
							Naturlabel1->ForeColor = Color::Red;
							Naturlabel1->Text = "������������ ����!";
						}


						break;
					}
					case 2: // ��������� ������ ����� �� -1
					{
						msclr::interop::marshal_context context;
						std::string second = context.marshal_as<std::string>(NaturtextBox2->Text);
						if (celie::checkCeloe(second))
						{
							Naturlabel1->ForeColor = Color::Black;
							celie::celoe num = celie::getCeloeFromInt(Convert::ToInt32(NaturtextBox2->Text));
							num = celie::MUL_ZM_Z(num);
							String ^ stroka = gcnew String(celie::celoeToString(num).c_str());
							Naturlabel1->Text = stroka;
							HistorylistBox1->Items->Add(stroka);
							Otvet->Visible = true;
						}
						else
						{
							Naturlabel1->ForeColor = Color::Red;
							Naturlabel1->Text = "������������ ����!";
						}
						break;
					}
					case 3: //�������������� ������������ ����� � �����
					{
						msclr::interop::marshal_context context;
						std::string second = context.marshal_as<std::string>(NaturtextBox2->Text);
						if (Naturalnie::checkNumber(second))
						{
							Naturlabel1->ForeColor = Color::Black;
							Naturalnie::number num = Naturalnie::getNumberFromInt(Convert::ToInt32(NaturtextBox2->Text));
							celie::celoe ans = celie::TRANS_N_Z(num);
							String ^ stroka = gcnew String(celie::celoeToString(ans).c_str());
							Naturlabel1->Text = stroka;
							HistorylistBox1->Items->Add(stroka);
							Otvet->Visible = true;
						}
						else
						{
							Naturlabel1->ForeColor = Color::Red;
							Naturlabel1->Text = "������������ ����!";
						}
						break;
					}
					case 4: //�������������� ������ ���������������� ����� � �����������
					{
						msclr::interop::marshal_context context;
						std::string second = context.marshal_as<std::string>(NaturtextBox2->Text);
						if (celie::checkCeloe(second))
						{
							Naturlabel1->ForeColor = Color::Black;
							celie::celoe num = celie::getCeloeFromInt(Convert::ToInt32(NaturtextBox2->Text));
							Naturalnie::number ans = celie::TRANS_Z_N(num);
							String ^ stroka = gcnew String(Naturalnie::numberToString(ans).c_str());
							Naturlabel1->Text = stroka;
							HistorylistBox1->Items->Add(stroka);
							Otvet->Visible = true;
						}
						else
						{
							Naturlabel1->ForeColor = Color::Red;
							Naturlabel1->Text = "������������ ����!";
						}
						break;
					}
					case 5://�������� ���� ����� �����
					{
						msclr::interop::marshal_context context;
						std::string first = context.marshal_as<std::string>(NaturtextBox1->Text);
						std::string second = context.marshal_as<std::string>(NaturtextBox2->Text);
						if (celie::checkCeloe(second) && celie::checkCeloe(first))
						{
							Naturlabel1->ForeColor = Color::Black;
							celie::celoe num1 = celie::getCeloeFromInt(Convert::ToInt32(NaturtextBox1->Text));
							celie::celoe num2 = celie::getCeloeFromInt(Convert::ToInt32(NaturtextBox2->Text));
							celie::celoe num = celie::ADD_ZZ_Z(num1, num2);
							String ^ stroka = gcnew String(celie::celoeToString(num).c_str());
							Naturlabel1->Text = stroka;
							HistorylistBox1->Items->Add(stroka);
							Otvet->Visible = true;
						}
						else
						{
							Naturlabel1->ForeColor = Color::Red;
							Naturlabel1->Text = "������������ ����!";
						}
						break;
					}
					case 6://��������� ����� �����
					{
						msclr::interop::marshal_context context;
						std::string first = context.marshal_as<std::string>(NaturtextBox1->Text);
						std::string second = context.marshal_as<std::string>(NaturtextBox2->Text);
						if (celie::checkCeloe(second) && celie::checkCeloe(first))
						{
							Naturlabel1->ForeColor = Color::Black;
							celie::celoe num1 = celie::getCeloeFromInt(Convert::ToInt32(NaturtextBox1->Text));
							celie::celoe num2 = celie::getCeloeFromInt(Convert::ToInt32(NaturtextBox2->Text));
							celie::celoe num = celie::SUB_ZZ_Z(num1, num2);
							String ^ stroka = gcnew String(celie::celoeToString(num).c_str());
							Naturlabel1->Text = stroka;
							HistorylistBox1->Items->Add(stroka);
							Otvet->Visible = true;
						}
						else
						{
							Naturlabel1->ForeColor = Color::Red;
							Naturlabel1->Text = "������������ ����!";
						}
						break;
					}
					case 7://��������� ����� �����
					{
						msclr::interop::marshal_context context;
						std::string first = context.marshal_as<std::string>(NaturtextBox1->Text);
						std::string second = context.marshal_as<std::string>(NaturtextBox2->Text);
						if (celie::checkCeloe(second) && celie::checkCeloe(first))
						{
							Naturlabel1->ForeColor = Color::Black;
							celie::celoe num1 = celie::getCeloeFromInt(Convert::ToInt32(NaturtextBox1->Text));
							celie::celoe num2 = celie::getCeloeFromInt(Convert::ToInt32(NaturtextBox2->Text));
							celie::celoe num = celie::MUL_ZZ_Z(num1, num2);
							String ^ stroka = gcnew String(celie::celoeToString(num).c_str());
							Naturlabel1->Text = stroka;
							Otvet->Visible = true;
							HistorylistBox1->Items->Add(stroka);
						}
						else
						{
							Naturlabel1->ForeColor = Color::Red;
							Naturlabel1->Text = "������������ ����!";
						}
						break;
					}
					case 8://������� �� ������� �������� ������ ����� �� ������� ��� ������ ����������� � ��������(�������� ������� �� ����)
					{
						msclr::interop::marshal_context context;
						std::string first = context.marshal_as<std::string>(NaturtextBox1->Text);
						std::string second = context.marshal_as<std::string>(NaturtextBox2->Text);
						if (celie::checkCeloe(second) && celie::checkCeloe(first))
						{
							Naturlabel1->ForeColor = Color::Black;
							celie::celoe num1 = celie::getCeloeFromInt(Convert::ToInt32(NaturtextBox1->Text));
							Naturalnie::number num2 = Naturalnie::getNumberFromInt(Convert::ToInt32(NaturtextBox2->Text));
							celie::celoe num = celie::DIV_ZZ_Z(num1, num2);
							String ^ stroka = gcnew String(celie::celoeToString(num).c_str());
							Naturlabel1->Text = stroka;
							Otvet->Visible = true;
							HistorylistBox1->Items->Add(stroka);
						}
						else
						{
							Naturlabel1->ForeColor = Color::Red;
							Naturlabel1->Text = "������������ ����!";
						}
						break;
					}
					case 9://������� �� ������� �������� ������ ����� �� ������� ��� ������ ����������� � ��������(�������� ������� �� ����)
					{
						msclr::interop::marshal_context context;
						std::string first = context.marshal_as<std::string>(NaturtextBox1->Text);
						std::string second = context.marshal_as<std::string>(NaturtextBox2->Text);
						if (celie::checkCeloe(second) && celie::checkCeloe(first))
						{
							Naturlabel1->ForeColor = Color::Black;
							celie::celoe num1 = celie::getCeloeFromInt(Convert::ToInt32(NaturtextBox1->Text));
							Naturalnie::number num2 = Naturalnie::getNumberFromInt(Convert::ToInt32(NaturtextBox2->Text));
							celie::celoe num = celie::MOD_ZZ_Z(num1, num2);
							String ^ stroka = gcnew String(celie::celoeToString(num).c_str());
							Naturlabel1->Text = stroka;
							Otvet->Visible = true;
							HistorylistBox1->Items->Add(stroka);
						}
						else
						{
							Naturlabel1->ForeColor = Color::Red;
							Naturlabel1->Text = "������������ ����!";
						}
						break;
					}
					}
				}
				catch (std::string& s)
				{
					if (s == "Incorrect")
					{
						Naturlabel1->ForeColor = Diskretka::Color::Red;
						Naturlabel1->Text = "��������� ����!";
					}

				}
				break;

			}
			case 2: //������ � �������������
			{
				try
				{
					switch (current_select)
					{
					case 0: //���������� �����
					{
						Naturlabel1->ForeColor = Color::Black;
						msclr::interop::marshal_context context;
						std::string standardString = context.marshal_as<std::string>(NaturtextBox2->Text);
						if (racionalnie::checkRats(standardString))
						{
							Otvet->Visible = true;
							racionalnie::rats num = racionalnie::getRats(standardString);
							String^ ans = gcnew String(racionalnie::ratsToString(racionalnie::RED_Q_Q(num)).c_str());
							Naturlabel1->Text = ans;
							HistorylistBox1->Items->Add(ans);
						}
						else
						{
							Naturlabel1->ForeColor = Color::Red;
							Naturlabel1->Text = "������������ ����!";
						}//������ �����
						break;
					}
					case 1: // �������� �� �����, ���� ������������ ����� �������� �����, �� ���, ����� ����
					{
						Naturlabel1->ForeColor = Color::Black;
						msclr::interop::marshal_context context;
						std::string standardString = context.marshal_as<std::string>(NaturtextBox2->Text);
						if (racionalnie::checkRats(standardString))
						{
							
							racionalnie::rats num = racionalnie::getRats(standardString);
							if (racionalnie::INT_Q_B(num) == true)
							{
								Otvet->Visible = true;
								Naturlabel1->Text = "������������ ����� �������� �����!";
								HistorylistBox1->Items->Add("������������ ����� �������� �����!");
							}
							else
							{
								Otvet->Visible = true;
								Naturlabel1->Text = "������������ ����� �� �������� �����!";
								HistorylistBox1->Items->Add("������������ ����� �� �������� �����!");
							}
							
						}
						else
						{
							Naturlabel1->ForeColor = Color::Red;
							Naturlabel1->Text = "������������ ����!";
						}//������ �����
						break;
					}
					case 2: // �������������� ������ � �������
					{
						Naturlabel1->ForeColor = Color::Black;
						msclr::interop::marshal_context context;
						std::string standardString = context.marshal_as<std::string>(NaturtextBox2->Text);
						if (celie::checkCeloe(standardString))
						{
							Otvet->Visible = true;
							celie::celoe num = celie::getCeloeFromInt(Convert::ToInt32(NaturtextBox2->Text));
							String^ ans = gcnew String(racionalnie::ratsToString(racionalnie::TRANS_Z_Q(num)).c_str());
							Naturlabel1->Text = ans;
							HistorylistBox1->Items->Add(ans);
						}
						else
						{
							Naturlabel1->ForeColor = Color::Red;
							Naturlabel1->Text = "������������ ����!";
						}//������ �����
						break;
					}
					case 3: // �������������� �������� � ����� (���� ����������� ����� 1)
					{
						Naturlabel1->ForeColor = Color::Black;
						msclr::interop::marshal_context context;
						std::string standardString = context.marshal_as<std::string>(NaturtextBox2->Text);
						if (racionalnie::checkRats(standardString))
						{
							Otvet->Visible = true;
							racionalnie::rats num = racionalnie::getRats(standardString);
							String^ ans = gcnew String(celie::celoeToString(racionalnie::TRANS_Q_Z(num)).c_str());
							Naturlabel1->Text = ans;
							HistorylistBox1->Items->Add(ans);
						}
						else
						{
							Naturlabel1->ForeColor = Color::Red;
							Naturlabel1->Text = "������������ ����!";
						}//������ �����
						break;
					}
					case 4: // �������� ������������ �����
					{
						Naturlabel1->ForeColor = Color::Black;
						msclr::interop::marshal_context context;
						std::string first = context.marshal_as<std::string>(NaturtextBox1->Text);
						std::string second = context.marshal_as<std::string>(NaturtextBox2->Text);
						if (racionalnie::checkRats(first) && racionalnie::checkRats(second))
						{
							Otvet->Visible = true;
							racionalnie::rats num1 = racionalnie::getRats(first);
							racionalnie::rats num2 = racionalnie::getRats(second);
							String^ ans = gcnew String(racionalnie::ratsToString(racionalnie::ADD_QQ_Q(num1, num2)).c_str());
							Naturlabel1->Text = ans;
							HistorylistBox1->Items->Add(ans);
						}
						else
						{
							Naturlabel1->ForeColor = Color::Red;
							Naturlabel1->Text = "������������ ����!";
						}//������ �����
						break;
					}
					case 5: // ��������� ������
					{
						Naturlabel1->ForeColor = Color::Black;
						msclr::interop::marshal_context context;
						std::string first = context.marshal_as<std::string>(NaturtextBox1->Text);
						std::string second = context.marshal_as<std::string>(NaturtextBox2->Text);
						if (racionalnie::checkRats(first) && racionalnie::checkRats(second))
						{
							Otvet->Visible = true;
							racionalnie::rats num1 = racionalnie::getRats(first);
							racionalnie::rats num2 = racionalnie::getRats(second);
							String^ ans = gcnew String(racionalnie::ratsToString(racionalnie::SUB_QQ_Q(num1, num2)).c_str());
							Naturlabel1->Text = ans;
							HistorylistBox1->Items->Add(ans);
						}
						else
						{
							Naturlabel1->ForeColor = Color::Red;
							Naturlabel1->Text = "������������ ����!";
						}//������ �����
						break;
					}
					case 6: // ��������� ������
					{
						Naturlabel1->ForeColor = Color::Black;
						msclr::interop::marshal_context context;
						std::string first = context.marshal_as<std::string>(NaturtextBox1->Text);
						std::string second = context.marshal_as<std::string>(NaturtextBox2->Text);
						if (racionalnie::checkRats(first) && racionalnie::checkRats(second))
						{
							Otvet->Visible = true;
							racionalnie::rats num1 = racionalnie::getRats(first);
							racionalnie::rats num2 = racionalnie::getRats(second);
							String^ ans = gcnew String(racionalnie::ratsToString(racionalnie::MUL_QQ_Q(num1, num2)).c_str());
							Naturlabel1->Text = ans;
							HistorylistBox1->Items->Add(ans);
						}
						else
						{
							Naturlabel1->ForeColor = Color::Red;
							Naturlabel1->Text = "������������ ����!";
						}//������ �����
						break;
					}
					case 7: // ������� ������
					{
						Naturlabel1->ForeColor = Color::Black;
						msclr::interop::marshal_context context;
						std::string first = context.marshal_as<std::string>(NaturtextBox1->Text);
						std::string second = context.marshal_as<std::string>(NaturtextBox2->Text);
						if (racionalnie::checkRats(first) && racionalnie::checkRats(second))
						{
							Otvet->Visible = true;
							racionalnie::rats num1 = racionalnie::getRats(first);
							racionalnie::rats num2 = racionalnie::getRats(second);
							String^ ans = gcnew String(racionalnie::ratsToString(racionalnie::DIV_QQ_Q(num1, num2)).c_str());
							Naturlabel1->Text = ans;
							HistorylistBox1->Items->Add(ans);
						}
						else
						{
							Naturlabel1->ForeColor = Color::Red;
							Naturlabel1->Text = "������������ ����!";
						}//������ �����
						break;
					}
					}
				}
				catch (std::string& s)
				{
					if (s == "Zero divide")
					{
						Naturlabel1->ForeColor = Color::Red;
						Naturlabel1->Text = "������ ������ �� ����!!!";
					}// ������� �� 0 �����������
					else
						if (s == "Incorrect")
						{
							Naturlabel1->ForeColor = Color::Red;
							Naturlabel1->Text = "�������� ����";
						}
				}
				break;
			}
			case 3: //������ � ������������
			{
				try
				{
					switch (current_select)
					{
					case 0: // �������� �����������
					{
						Naturlabel1->ForeColor = Color::Black;
						msclr::interop::marshal_context context;
						std::string firststandardString = context.marshal_as<std::string>(NaturtextBox1->Text);
						Mnogocleny::polynomial poly;
						if (Mnogocleny::getPoly(firststandardString, poly))
						{
							Mnogocleny::polynomial poly2;
							std::string secondtandardString = context.marshal_as<std::string>(NaturtextBox2->Text);
							if (Mnogocleny::getPoly(secondtandardString, poly2))
							{
								Otvet->Visible = true;
								String^ ans = gcnew String(Mnogocleny::polyToString(Mnogocleny::ADD_PP_P(poly, poly2)).c_str());
								Naturlabel1->Text = ans;
								HistorylistBox1->Items->Add(ans);
							}
							else
							{
								Naturlabel1->ForeColor = Color::Red;
								Naturlabel1->Text = "������� ���������!";
							}//������ �����
						}
						else
						{
							Naturlabel1->ForeColor = Color::Red;
							Naturlabel1->Text = "������� ���������!";
						}//������ �����
						break;
					}
					case 1: // ��������� �����������
					{
						Naturlabel1->ForeColor = Color::Black;
						msclr::interop::marshal_context context;
						std::string firststandardString = context.marshal_as<std::string>(NaturtextBox1->Text);
						Mnogocleny::polynomial poly;
						if (Mnogocleny::getPoly(firststandardString, poly))
						{
							Mnogocleny::polynomial poly2;
							std::string secondtandardString = context.marshal_as<std::string>(NaturtextBox2->Text);
							if (Mnogocleny::getPoly(secondtandardString, poly2))
							{
								Otvet->Visible = true;
								String^ ans = gcnew String(Mnogocleny::polyToString(Mnogocleny::SUB_PP_P(poly, poly2)).c_str());
								Naturlabel1->Text = ans;
								HistorylistBox1->Items->Add(ans);
							}
							else
							{
								Naturlabel1->ForeColor = Color::Red;
								Naturlabel1->Text = "������� ���������!";
							}//������ �����
						}
						else
						{
							Naturlabel1->ForeColor = Color::Red;
							Naturlabel1->Text = "������� ���������!";
						}//������ �����
						break;
					}
					case 2: // ��������� ���������� �� ������������ �����
					{
						Naturlabel1->ForeColor = Color::Black;
						msclr::interop::marshal_context context;
						std::string standardString = context.marshal_as<std::string>(NaturtextBox1->Text);
						Mnogocleny::polynomial poly;
						if (Mnogocleny::getPoly(standardString, poly))
						{
							std::string standardString2 = context.marshal_as<std::string>(NaturtextBox2->Text);
							racionalnie::rats racion = racionalnie::getRats(standardString2);
							Otvet->Visible = true;
							String^ ans = gcnew String(Mnogocleny::polyToString(Mnogocleny::MUL_PQ_P(poly, racion)).c_str());
							Naturlabel1->Text = ans;
							HistorylistBox1->Items->Add(ans);
						}
						else
						{
							Naturlabel1->ForeColor = Color::Red;
							Naturlabel1->Text = "������� ���������!";
						}//������ �����
						break;
					}
					case 3: //��������� �� x^k
					{
						

							Naturlabel1->ForeColor = Color::Black;
							msclr::interop::marshal_context context;
							std::string standardString = context.marshal_as<std::string>(NaturtextBox1->Text);
							Mnogocleny::polynomial poly;
							if (Mnogocleny::getPoly(standardString, poly))
							{
								Otvet->Visible = true;
								String^ ans = gcnew String(Mnogocleny::polyToString(Mnogocleny::MUL_Pxk_P(poly, Convert::ToInt32(NaturtextBox2->Text))).c_str());
								Naturlabel1->Text = ans;
								HistorylistBox1->Items->Add(ans);
							}
							else
							{
								Naturlabel1->ForeColor = Color::Red;
								Naturlabel1->Text = "������� ���������!";
							}//������ �����
						break;
					}
					case 4: // ������� ����
					{
						Naturlabel1->ForeColor = Color::Black;
						msclr::interop::marshal_context context;
						std::string standardString = context.marshal_as<std::string>(NaturtextBox2->Text);
						Mnogocleny::polynomial poly;
						if (Mnogocleny::getPoly(standardString, poly))
						{
							Otvet->Visible = true;
							String^ ans = gcnew String(racionalnie::ratsToString(Mnogocleny::LED_P_Q(poly)).c_str());
							Naturlabel1->Text = ans;
							HistorylistBox1->Items->Add(ans);
						}
						else
						{
							Naturlabel1->ForeColor = Color::Red;
							Naturlabel1->Text = "������� ���������!";
						}//������ �����
						break;
					}
					case 5: // ������� ����������
					{
						Naturlabel1->ForeColor = Color::Black;
						msclr::interop::marshal_context context;
						std::string standardString = context.marshal_as<std::string>(NaturtextBox2->Text);
						Mnogocleny::polynomial poly;
						if (Mnogocleny::getPoly(standardString, poly))
						{
							
							Otvet->Visible = true;
							int ans = (Mnogocleny::DEG_P_N(poly));
							Naturlabel1->Text = Convert::ToString(ans);
							HistorylistBox1->Items->Add(Convert::ToString(ans));
						}
						else
						{
							Naturlabel1->ForeColor = Color::Red;
							Naturlabel1->Text = "������� ���������!";
						}//������ �����
						break;
					}
					case 6: // ��������� �� ���������� ��� ������������  ���� � ��� ����������
					{
						Naturlabel1->ForeColor = Color::Black;
						msclr::interop::marshal_context context;
						std::string standardString = context.marshal_as<std::string>(NaturtextBox2->Text);
						Mnogocleny::polynomial poly;
						if (Mnogocleny::getPoly(standardString, poly))
						{
							Otvet->Visible = true;
							String^ ans = gcnew String(racionalnie::ratsToString(Mnogocleny::FAC_P_Q(poly)).c_str());
							Naturlabel1->Text = ans;
							HistorylistBox1->Items->Add(ans);
						}
						else
						{
							Naturlabel1->ForeColor = Color::Red;
							Naturlabel1->Text = "������� ���������!";
						}//������ �����
						break;
					}
					
					}
				}
				catch (std::string& s)
				{
					if (s == "Zero divide")
					{
						Naturlabel1->ForeColor = Color::Red;
						Naturlabel1->Text = "������ ������ �� ����!!!";
					}// ������� �� 0 �����������
					else
						if (s == "Incorrect")
						{
							Naturlabel1->ForeColor = Color::Red;
							Naturlabel1->Text = "�������� ����";
						}
				}
				break;
			}
			}		
			
		}
	}
	
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		switch (selected_Menu)
		{
		case 3:
		{
			try
			{
			switch (current_select)
			{
			case 7: // ��������� �����������
			{
				Naturlabel1->ForeColor = Color::Black;
				msclr::interop::marshal_context context;
				std::string firststandardString = context.marshal_as<std::string>(NaturtextBox1->Text);
				Mnogocleny::polynomial poly;
				if (Mnogocleny::getPoly(firststandardString, poly))
				{
					Mnogocleny::polynomial poly2;
					std::string secondtandardString = context.marshal_as<std::string>(NaturtextBox2->Text);
					if (Mnogocleny::getPoly(secondtandardString, poly2))
					{
						Otvet->Visible = true;
						String^ ans = gcnew String(Mnogocleny::polyToString(Mnogocleny::MUL_PP_P(poly, poly2)).c_str());
						Naturlabel1->Text = ans;
						HistorylistBox1->Items->Add(ans);
					}
					else
					{
						Naturlabel1->ForeColor = Color::Red;
						Naturlabel1->Text = "������� ���������!";
					}//������ �����
				}
				else
				{
					Naturlabel1->ForeColor = Color::Red;
					Naturlabel1->Text = "������� ���������!";
				}//������ �����
				break;
			}
		
			
			
			}
			}
			catch (std::string& s)
			{
				if (s == "Zero divide")
				{
					Naturlabel1->ForeColor = Color::Red;
					Naturlabel1->Text = "������ ������ �� ����!!!";
				}// ������� �� 0 �����������
				else
					if (s == "Incorrect")
					{
						Naturlabel1->ForeColor = Color::Red;
						Naturlabel1->Text = "�������� ����";
					}
			}
			break;
		}
		}
	}

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		switch (selected_Menu)
		{
		case 3:
		{
			try
			{
				switch (current_select)
				{
				case 8:
				{
					
						Naturlabel1->ForeColor = Color::Black;
						msclr::interop::marshal_context context;
						std::string standardString = context.marshal_as<std::string>(NaturtextBox2->Text);
						Mnogocleny::polynomial poly;
						if (Mnogocleny::getPoly(standardString, poly))
						{
							Otvet->Visible = true;
							String^ ans = gcnew String(Mnogocleny::polyToString(Mnogocleny::DER_P_P(poly)).c_str());
							Naturlabel1->Text = ans;
							HistorylistBox1->Items->Add(ans);
						}
						else
						{
							Naturlabel1->ForeColor = Color::Red;
							Naturlabel1->Text = "������� ���������!";
						}//������ �����
						break;
				
				}
				
				}
			}
			catch (std::string& s)
			{
				if (s == "Zero divide")
				{
					Naturlabel1->ForeColor = Color::Red;
					Naturlabel1->Text = "������ ������ �� ����!!!";
				}// ������� �� 0 �����������
				else
					if (s == "Incorrect")
					{
						Naturlabel1->ForeColor = Color::Red;
						Naturlabel1->Text = "�������� ����";
					}
			}
			break;
		
		}
	}
	}

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) { //������������ ������ ��������
		switch (comboBox1->SelectedIndex)
		{
		case 0: //�����������
		{
			NaturtextBox1->MaxLength = 50;
			NaturtextBox2->MaxLength = 50;
			NaturtextBox3->MaxLength = 50;
			listBoxMain->Items->Clear();
			selected_Menu = 0;
			listBoxMain->Items->Add("��������� ����������� �����");
			listBoxMain->Items->Add("�������� �� ����");
			listBoxMain->Items->Add("���������� 1 � ������������ �����");
			listBoxMain->Items->Add("�������� ����������� �����");
			listBoxMain->Items->Add("��������� �� ������� �������� ������ �������");
			listBoxMain->Items->Add("��������� ������������ �� �����");
			listBoxMain->Items->Add("��������� ������������ �� 10^k");
			listBoxMain->Items->Add("��������� ����������� �����");
			listBoxMain->Items->Add("��������� �� ������������, ������ ����������� �����, ���������� �� �����");
			listBoxMain->Items->Add("���������� ������ ����� ������� �������� ����������� �� �������, ����������� �� 10^k");
			listBoxMain->Items->Add("������� �� ������� �������� ������������ �� ������� ��� ������ ����������� � ��������(�� 0)");
			listBoxMain->Items->Add("������� �� ������� �������� ������������ �� ������� ��� ������ ����������� � ��������(�� 0)");
			listBoxMain->Items->Add("��� ����������� �����");
			listBoxMain->Items->Add("��� ����������� �����");
			listBoxMain->Enabled = true;
			Choose->Enabled = true;
			break;
		}
		case 1: //�����
		{
			NaturtextBox1->MaxLength = 50;
			NaturtextBox2->MaxLength = 50;
			NaturtextBox3->MaxLength = 50;
			listBoxMain->Items->Clear();
			selected_Menu = 1;
			listBoxMain->Items->Add("���������� �������� �����");
			listBoxMain->Items->Add("����������� ��������������� �����");
			listBoxMain->Items->Add("��������� ������ �� -1");
			listBoxMain->Items->Add("�������������� ����������� � �����");
			listBoxMain->Items->Add("�������������� ������ � ��������������� �����������");
			listBoxMain->Items->Add("�������� ����� �����");
			listBoxMain->Items->Add("��������� ����� �����");
			listBoxMain->Items->Add("��������� ����� �����");
			listBoxMain->Items->Add("������� �� ������� �������� ������ �� ������� ��� ������ ����������� � ��������(�� 0)");
			listBoxMain->Items->Add("������� �� ������� �������� ������ �� ������� ��� ������ ����������� � ��������(�� 0)");
			listBoxMain->Enabled = true;
			Choose->Enabled = true;
			break;
		}
		case 2: //������������
		{
			NaturtextBox1->MaxLength = 50;
			NaturtextBox2->MaxLength = 50;
			NaturtextBox3->MaxLength = 50;
			listBoxMain->Items->Clear();
			selected_Menu = 2;
			listBoxMain->Items->Add("���������� �����");
			listBoxMain->Items->Add("�������� �� �����");
			listBoxMain->Items->Add("�������������� ������ � �������");
			listBoxMain->Items->Add("�������������� �������� � �����");
			listBoxMain->Items->Add("�������� ������");
			listBoxMain->Items->Add("��������� ������");
			listBoxMain->Items->Add("��������� ������");
			listBoxMain->Items->Add("������� ������(�������� ������� �� ����)");
			listBoxMain->Enabled = true;
			Choose->Enabled = true;
			break;
		}
		case 3: //����������
		{
			NaturtextBox1->MaxLength = 300;
			NaturtextBox2->MaxLength = 300;
			NaturtextBox3->MaxLength = 300;
			listBoxMain->Items->Clear();
			selected_Menu = 3;
			listBoxMain->Items->Add("�������� �����������");
			listBoxMain->Items->Add("��������� �����������");
			listBoxMain->Items->Add("��������� ���������� �� ������������ �����");
			listBoxMain->Items->Add("��������� ���������� �� x^k");
			listBoxMain->Items->Add("������� ����������� ����������");
			listBoxMain->Items->Add("������� ����������");
			listBoxMain->Items->Add("��������� �� ���������� ��� ������������ ������������� � ��� ����������");
			listBoxMain->Items->Add("��������� �����������");
			listBoxMain->Items->Add("����������� ����������");
			listBoxMain->Enabled = true;
			Choose->Enabled = true;
			break;
		}

		}
	}

//------------------------------------------------------------------------------------------------------------------
			 String ^ strokaBox;
private: System::Void NaturtextBox1_Click(System::Object^  sender, System::EventArgs^  e) {

			 if (NaturtextBox1->ForeColor == Color::DarkGray)
			 {
				 strokaBox = gcnew String(NaturtextBox1->Text);
				 NaturtextBox1->ForeColor = Color::Black;
				 NaturtextBox1->Clear();
			 }
			 


		 }
private: System::Void NaturtextBox1_LostFocus(System::Object^  sender, System::EventArgs^  e) {

	
	if (NaturtextBox1->Text == "")
	{
		NaturtextBox1->ForeColor = Color::DarkGray;
		NaturtextBox1->Text = strokaBox;
	}
}

private: System::Void NaturtextBox2_Click(System::Object^  sender, System::EventArgs^  e) {

					 

					 if (NaturtextBox2->ForeColor == Color::DarkGray)
					 {
						 strokaBox = gcnew String(NaturtextBox2->Text);
						 NaturtextBox2->ForeColor = Color::Black;
						 NaturtextBox2->Clear();
					 }



				 }
private: System::Void NaturtextBox2_LostFocus(System::Object^  sender, System::EventArgs^  e) {


	if (NaturtextBox2->Text == "")
	{
		NaturtextBox2->ForeColor = Color::DarkGray;
		NaturtextBox2->Text = strokaBox;
	}
}

private: System::Void NaturtextBox3_Click(System::Object^  sender, System::EventArgs^  e) {

					 

					 if (NaturtextBox3->ForeColor == Color::DarkGray)
					 {
						 strokaBox = gcnew String(NaturtextBox3->Text);
						 NaturtextBox3->ForeColor = Color::Black;
						 NaturtextBox3->Clear();
					 }



				 }
private: System::Void NaturtextBox3_LostFocus(System::Object^  sender, System::EventArgs^  e) {


	if (NaturtextBox3->Text == "")
	{
		NaturtextBox3->ForeColor = Color::DarkGray;
		NaturtextBox3->Text = strokaBox;
	}
}		 
//------------------------------------------------------------------------------------------------------------------
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	if(checkBox1->Checked)
	HistorylistBox1->Visible = true;
	else
		HistorylistBox1->Visible = false;
}

		 private: System::Void ������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 HelpWindow ^form = gcnew HelpWindow();
			 form->ShowDialog();
		 }


};
};
