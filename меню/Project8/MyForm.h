#pragma once

namespace Project8 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����1ToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ToolStripMenuItem^ ����2ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ timesNewRomanToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ arialToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ consolasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem5;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ wsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ xzczxcToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gyfhfgToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ asdasdToolStripMenuItem;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����2ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->timesNewRomanToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->arialToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->consolasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->wsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->xzczxcToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gyfhfgToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->asdasdToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->���������ToolStripMenuItem,
					this->������ToolStripMenuItem, this->�����ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(501, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->����1ToolStripMenuItem,
					this->����2ToolStripMenuItem, this->xzczxcToolStripMenuItem
			});
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(73, 20);
			this->���������ToolStripMenuItem->Text = L"���������";
			// 
			// ����1ToolStripMenuItem
			// 
			this->����1ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->wsToolStripMenuItem });
			this->����1ToolStripMenuItem->Name = L"����1ToolStripMenuItem";
			this->����1ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->����1ToolStripMenuItem->Text = L"���� 1";
			this->����1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����1ToolStripMenuItem_Click);
			// 
			// ����2ToolStripMenuItem
			// 
			this->����2ToolStripMenuItem->Name = L"����2ToolStripMenuItem";
			this->����2ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->����2ToolStripMenuItem->Text = L"���� 2";
			this->����2ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����2ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�����ToolStripMenuItem,
					this->������������ToolStripMenuItem
			});
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(62, 20);
			this->������ToolStripMenuItem->Text = L"������";
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {
				this->timesNewRomanToolStripMenuItem,
					this->arialToolStripMenuItem, this->consolasToolStripMenuItem, this->����������ToolStripMenuItem, this->������ToolStripMenuItem,
					this->������������ToolStripMenuItem, this->toolStripMenuItem2, this->toolStripMenuItem3, this->toolStripMenuItem4, this->toolStripMenuItem5
			});
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->�����ToolStripMenuItem->Text = L"�����";
			// 
			// timesNewRomanToolStripMenuItem
			// 
			this->timesNewRomanToolStripMenuItem->Name = L"timesNewRomanToolStripMenuItem";
			this->timesNewRomanToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->timesNewRomanToolStripMenuItem->Text = L"Times New Roman";
			this->timesNewRomanToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::timesNewRomanToolStripMenuItem_Click);
			// 
			// arialToolStripMenuItem
			// 
			this->arialToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->gyfhfgToolStripMenuItem });
			this->arialToolStripMenuItem->Name = L"arialToolStripMenuItem";
			this->arialToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->arialToolStripMenuItem->Text = L"Arial";
			this->arialToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::arialToolStripMenuItem_Click);
			// 
			// consolasToolStripMenuItem
			// 
			this->consolasToolStripMenuItem->Name = L"consolasToolStripMenuItem";
			this->consolasToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->consolasToolStripMenuItem->Text = L"Consolas";
			this->consolasToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::consolasToolStripMenuItem_Click);
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->����������ToolStripMenuItem->Text = L"����������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����������ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������ToolStripMenuItem_Click);
			// 
			// ������������ToolStripMenuItem
			// 
			this->������������ToolStripMenuItem->Name = L"������������ToolStripMenuItem";
			this->������������ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->������������ToolStripMenuItem->Text = L"������������";
			this->������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������������ToolStripMenuItem_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(180, 22);
			this->toolStripMenuItem2->Text = L"10";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem2_Click);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(180, 22);
			this->toolStripMenuItem3->Text = L"12";
			this->toolStripMenuItem3->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem3_Click);
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(180, 22);
			this->toolStripMenuItem4->Text = L"14";
			this->toolStripMenuItem4->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem4_Click);
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			this->toolStripMenuItem5->Size = System::Drawing::Size(180, 22);
			this->toolStripMenuItem5->Text = L"16";
			this->toolStripMenuItem5->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem5_Click);
			// 
			// ������������ToolStripMenuItem
			// 
			this->������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->��������ToolStripMenuItem,
					this->�������������ToolStripMenuItem, this->������������ToolStripMenuItem
			});
			this->������������ToolStripMenuItem->Name = L"������������ToolStripMenuItem";
			this->������������ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->������������ToolStripMenuItem->Text = L"������������";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->��������ToolStripMenuItem->Text = L"�� ������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������ToolStripMenuItem_Click);
			// 
			// �������������ToolStripMenuItem
			// 
			this->�������������ToolStripMenuItem->Name = L"�������������ToolStripMenuItem";
			this->�������������ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->�������������ToolStripMenuItem->Text = L"�� ������� ����";
			this->�������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������������ToolStripMenuItem_Click);
			// 
			// ������������ToolStripMenuItem
			// 
			this->������������ToolStripMenuItem->Name = L"������������ToolStripMenuItem";
			this->������������ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->������������ToolStripMenuItem->Text = L"�� ������ ����";
			this->������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->asdasdToolStripMenuItem });
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����ToolStripMenuItem_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 61);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(212, 257);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(277, 61);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(212, 257);
			this->textBox2->TabIndex = 2;
			// 
			// wsToolStripMenuItem
			// 
			this->wsToolStripMenuItem->Name = L"wsToolStripMenuItem";
			this->wsToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->wsToolStripMenuItem->Text = L"ws";
			// 
			// xzczxcToolStripMenuItem
			// 
			this->xzczxcToolStripMenuItem->Name = L"xzczxcToolStripMenuItem";
			this->xzczxcToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->xzczxcToolStripMenuItem->Text = L"xzczxc";
			// 
			// gyfhfgToolStripMenuItem
			// 
			this->gyfhfgToolStripMenuItem->Name = L"gyfhfgToolStripMenuItem";
			this->gyfhfgToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->gyfhfgToolStripMenuItem->Text = L"gyfhfg";
			// 
			// asdasdToolStripMenuItem
			// 
			this->asdasdToolStripMenuItem->Name = L"asdasdToolStripMenuItem";
			this->asdasdToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->asdasdToolStripMenuItem->Text = L"asdasd";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(501, 380);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ����1ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		System::IO::StreamReader ^sr = gcnew
			System::IO::StreamReader("C:\\Users\\student\\Documents\\text1.txt");
		System::String ^text = sr->ReadToEnd();
		textBox1->Text = text;
		sr->Close();
	}
private: System::Void ����2ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	System::IO::StreamReader ^sr = gcnew
		System::IO::StreamReader("C:\\Users\\student\\Documents\\text2.txt");
	System::String ^text = sr->ReadToEnd();
	textBox2->Text = text;
	sr->Close();
}
private: System::Void timesNewRomanToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
	textBox1->Font = gcnew System::Drawing::Font("Times New Roman", textBox1->Font->Size);
	textBox2->Font = gcnew System::Drawing::Font("Times New Roman", textBox2->Font->Size);
	
}
private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, textBox1->Font->Size, FontStyle::Bold);
	textBox2->Font = gcnew System::Drawing::Font(textBox2->Font->Name, textBox2->Font->Size, FontStyle::Bold);

}
private: System::Void arialToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Font = gcnew System::Drawing::Font("Arial", textBox1->Font->Size);
	textBox2->Font = gcnew System::Drawing::Font("Arial", textBox2->Font->Size);
}
private: System::Void consolasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Font = gcnew System::Drawing::Font("Consolas", textBox1->Font->Size);
	textBox2->Font = gcnew System::Drawing::Font("Consolas", textBox2->Font->Size);
}
private: System::Void ������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, textBox1->Font->Size, FontStyle::Italic);
	textBox2->Font = gcnew System::Drawing::Font(textBox2->Font->Name, textBox2->Font->Size, FontStyle::Italic);
}
private: System::Void ������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, textBox1->Font->Size, FontStyle::Underline);
	textBox2->Font = gcnew System::Drawing::Font(textBox2->Font->Name, textBox2->Font->Size, FontStyle::Underline);
}
private: System::Void toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name,10);
	textBox2->Font = gcnew System::Drawing::Font(textBox2->Font->Name, 10);

}
private: System::Void toolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, 12);
	textBox2->Font = gcnew System::Drawing::Font(textBox2->Font->Name, 12);
}
private: System::Void toolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, 14);
	textBox2->Font = gcnew System::Drawing::Font(textBox2->Font->Name, 14);
}
private: System::Void toolStripMenuItem5_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Font = gcnew System::Drawing::Font(textBox1->Font->Name, 16);
	textBox2->Font = gcnew System::Drawing::Font(textBox2->Font->Name, 16);
}
private: System::Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->TextAlign = HorizontalAlignment::Center;
	textBox2->TextAlign = HorizontalAlignment::Center;
}
private: System::Void �������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->TextAlign = HorizontalAlignment::Right;
	textBox2->TextAlign = HorizontalAlignment::Right;
}
private: System::Void ������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->TextAlign = HorizontalAlignment::Left;
	textBox2->TextAlign = HorizontalAlignment::Left;
}
private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
};
}
