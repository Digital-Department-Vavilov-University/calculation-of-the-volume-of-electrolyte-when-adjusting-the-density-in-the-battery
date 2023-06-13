#pragma once
#include <cmath>
namespace accum {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_V;
	private: System::Windows::Forms::TextBox^ textBox_vb;

	private: System::Windows::Forms::Label^ label_itog;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox_srelki;
	private: System::Windows::Forms::Label^ label_vb;
	private: System::Windows::Forms::Label^ label_ph;
	private: System::Windows::Forms::TextBox^ textBox_ph;
	private: System::Windows::Forms::TextBox^ textBox_pk;

	private: System::Windows::Forms::Label^ label_pk;
	private: System::Windows::Forms::TextBox^ textBox_pd;
	private: System::Windows::Forms::Label^ label_pd;
	private: System::Windows::Forms::Button^ button_start;






	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label_V = (gcnew System::Windows::Forms::Label());
			this->textBox_vb = (gcnew System::Windows::Forms::TextBox());
			this->label_itog = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox_srelki = (gcnew System::Windows::Forms::PictureBox());
			this->label_vb = (gcnew System::Windows::Forms::Label());
			this->label_ph = (gcnew System::Windows::Forms::Label());
			this->textBox_ph = (gcnew System::Windows::Forms::TextBox());
			this->textBox_pk = (gcnew System::Windows::Forms::TextBox());
			this->label_pk = (gcnew System::Windows::Forms::Label());
			this->textBox_pd = (gcnew System::Windows::Forms::TextBox());
			this->label_pd = (gcnew System::Windows::Forms::Label());
			this->button_start = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_srelki))->BeginInit();
			this->SuspendLayout();
			// 
			// label_V
			// 
			resources->ApplyResources(this->label_V, L"label_V");
			this->label_V->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label_V->ForeColor = System::Drawing::Color::Yellow;
			this->label_V->Name = L"label_V";
			// 
			// textBox_vb
			// 
			this->textBox_vb->BackColor = System::Drawing::SystemColors::HighlightText;
			resources->ApplyResources(this->textBox_vb, L"textBox_vb");
			this->textBox_vb->Name = L"textBox_vb";
			// 
			// label_itog
			// 
			resources->ApplyResources(this->label_itog, L"label_itog");
			this->label_itog->AutoEllipsis = true;
			this->label_itog->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label_itog->ForeColor = System::Drawing::Color::Beige;
			this->label_itog->Name = L"label_itog";
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			// 
			// pictureBox_srelki
			// 
			resources->ApplyResources(this->pictureBox_srelki, L"pictureBox_srelki");
			this->pictureBox_srelki->Name = L"pictureBox_srelki";
			this->pictureBox_srelki->TabStop = false;
			// 
			// label_vb
			// 
			resources->ApplyResources(this->label_vb, L"label_vb");
			this->label_vb->Name = L"label_vb";
			// 
			// label_ph
			// 
			resources->ApplyResources(this->label_ph, L"label_ph");
			this->label_ph->Name = L"label_ph";
			// 
			// textBox_ph
			// 
			this->textBox_ph->BackColor = System::Drawing::SystemColors::HighlightText;
			this->textBox_ph->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->textBox_ph, L"textBox_ph");
			this->textBox_ph->Name = L"textBox_ph";
			// 
			// textBox_pk
			// 
			this->textBox_pk->BackColor = System::Drawing::SystemColors::HighlightText;
			this->textBox_pk->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->textBox_pk, L"textBox_pk");
			this->textBox_pk->Name = L"textBox_pk";
			// 
			// label_pk
			// 
			resources->ApplyResources(this->label_pk, L"label_pk");
			this->label_pk->Name = L"label_pk";
			// 
			// textBox_pd
			// 
			this->textBox_pd->BackColor = System::Drawing::SystemColors::HighlightText;
			this->textBox_pd->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			resources->ApplyResources(this->textBox_pd, L"textBox_pd");
			this->textBox_pd->Name = L"textBox_pd";
			// 
			// label_pd
			// 
			resources->ApplyResources(this->label_pd, L"label_pd");
			this->label_pd->Name = L"label_pd";
			// 
			// button_start
			// 
			resources->ApplyResources(this->button_start, L"button_start");
			this->button_start->Name = L"button_start";
			this->button_start->UseVisualStyleBackColor = true;
			this->button_start->Click += gcnew System::EventHandler(this, &MyForm::button_start_Click);
			// 
			// MyForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Controls->Add(this->button_start);
			this->Controls->Add(this->textBox_pd);
			this->Controls->Add(this->label_pd);
			this->Controls->Add(this->textBox_pk);
			this->Controls->Add(this->label_pk);
			this->Controls->Add(this->textBox_ph);
			this->Controls->Add(this->label_ph);
			this->Controls->Add(this->label_vb);
			this->Controls->Add(this->pictureBox_srelki);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label_itog);
			this->Controls->Add(this->textBox_vb);
			this->Controls->Add(this->label_V);
			this->HelpButton = true;
			this->Name = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_srelki))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void button_start_Click(System::Object^ sender, System::EventArgs^ e) {
			float vb = System::Convert::ToSingle(textBox_vb->Text), ph = System::Convert::ToSingle(textBox_ph->Text), pk = System::Convert::ToSingle(textBox_pk->Text), pd = System::Convert::ToSingle(textBox_pd->Text);
				float start = round((vb*(ph-pk))/(ph-pd));
			label_itog->Text = start.ToString();


	}
};
}
