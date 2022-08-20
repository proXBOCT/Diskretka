#pragma once

namespace Diskretka {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для HelpWindow
	/// </summary>
	public ref class HelpWindow : public System::Windows::Forms::Form
	{
	public:
		HelpWindow(void)
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
		~HelpWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^  spravka;
	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(HelpWindow::typeid));
			this->spravka = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// spravka
			// 
			this->spravka->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->spravka->AutoSize = true;
			this->spravka->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->spravka->Location = System::Drawing::Point(16, 11);
			this->spravka->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->spravka->Name = L"spravka";
			this->spravka->Size = System::Drawing::Size(744, 225);
			this->spravka->TabIndex = 0;
			this->spravka->Text = resources->GetString(L"spravka.Text");
			// 
			// HelpWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(936, 491);
			this->Controls->Add(this->spravka);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"HelpWindow";
			this->Text = L"Помощь";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		
	};
}
