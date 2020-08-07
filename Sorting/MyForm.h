#pragma once
#include <cstdlib>

namespace Sorting {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Button^ Start;
	private: System::Windows::Forms::Button^ Sort;
	private: System::Windows::Forms::Button^ Random;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Start = (gcnew System::Windows::Forms::Button());
			this->Sort = (gcnew System::Windows::Forms::Button());
			this->Random = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1000, 641);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// Start
			// 
			this->Start->Location = System::Drawing::Point(1043, 61);
			this->Start->Name = L"Start";
			this->Start->Size = System::Drawing::Size(77, 29);
			this->Start->TabIndex = 1;
			this->Start->Text = L"Start";
			this->Start->UseVisualStyleBackColor = true;
			this->Start->Click += gcnew System::EventHandler(this, &MyForm::Start_Click);
			// 
			// Sort
			// 
			this->Sort->Location = System::Drawing::Point(1043, 106);
			this->Sort->Name = L"Sort";
			this->Sort->Size = System::Drawing::Size(77, 29);
			this->Sort->TabIndex = 2;
			this->Sort->Text = L"Let\'s Sort";
			this->Sort->UseVisualStyleBackColor = true;
			// 
			// Random
			// 
			this->Random->Location = System::Drawing::Point(1043, 150);
			this->Random->Name = L"Random";
			this->Random->Size = System::Drawing::Size(74, 26);
			this->Random->TabIndex = 3;
			this->Random->Text = L"Random";
			this->Random->UseVisualStyleBackColor = true;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(1040, 22);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(101, 20);
			this->textBox1->TabIndex = 4;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1184, 639);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Random);
			this->Controls->Add(this->Sort);
			this->Controls->Add(this->Start);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		public: array<System::Windows::Forms::PictureBox^>^ Sektory;

		int n = 100;
		int* tab = new int[n];

	// timer for front end :D

	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		pictureBox1->Height = MyForm::Height;
		pictureBox1->Width = MyForm::Width - 200;

		Start->Left = MyForm::Width - 150;
		Random->Left = MyForm::Width - 150;
		Sort->Left = MyForm::Width - 150;
	}

private: System::Void Start_Click(System::Object^ sender, System::EventArgs^ e) {
		Sektory = gcnew array<System::Windows::Forms::PictureBox^>(n);
		for (int i = 0; i < n; i++){

			int v1 = rand() % 300;
			tab[i] = v1;

			Sektory[i] = gcnew System::Windows::Forms::PictureBox;
			Sektory[i]->Location = System::Drawing::Point((pictureBox1->Width / n) * i, pictureBox1->Height - 500 + v1);
			Sektory[i]->Name = "Sektor" + i.ToString();
			Sektory[i]->Size = System::Drawing::Size(pictureBox1->Width / n, pictureBox1->Bottom);
			Sektory[i]->TabIndex = 5;
			Sektory[i]->BackColor = Color::Red;
			//Sektory[i]->Tag = (int)(i);
			Sektory[i]->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;

			pictureBox1->Controls->Add(Sektory[i]);

		}
}

private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	//test
}
};
}
