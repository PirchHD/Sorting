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
	private: System::Windows::Forms::Button^ Reset;

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
			this->Reset = (gcnew System::Windows::Forms::Button());
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
			this->Sort->Location = System::Drawing::Point(1043, 193);
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
			this->Random->Click += gcnew System::EventHandler(this, &MyForm::Random_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(1034, 24);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(101, 20);
			this->textBox1->TabIndex = 4;
			// 
			// Reset
			// 
			this->Reset->Location = System::Drawing::Point(1043, 105);
			this->Reset->Name = L"Reset";
			this->Reset->Size = System::Drawing::Size(77, 29);
			this->Reset->TabIndex = 5;
			this->Reset->Text = L"Reset";
			this->Reset->UseVisualStyleBackColor = true;
			this->Reset->Click += gcnew System::EventHandler(this, &MyForm::Reset_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1183, 640);
			this->Controls->Add(this->Reset);
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

		int n  = 99999;
		int* tab = new int[n];


		
	// timer for front end :D

	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		
		pictureBox1->Height = MyForm::Height;
		pictureBox1->Width = MyForm::Width - 200;

		Start->Left = MyForm::Width - 150;
		Random->Left = MyForm::Width - 150;
		Sort->Left = MyForm::Width - 150;
		textBox1->Left = MyForm::Width - 150;
		
	}

private: System::Void Start_Click(System::Object^ sender, System::EventArgs^ e) {
		n = System::Convert::ToInt32(this -> textBox1->Text);

		Sektory = gcnew array<System::Windows::Forms::PictureBox^>(n);
		for (int i = 0; i < n; i++){

			int v1 = rand() % 300;
			tab[i] = v1;

			Sektory[i] = gcnew System::Windows::Forms::PictureBox;
			
			Sektory[i]->Size = System::Drawing::Size(pictureBox1->Width / n, 200 + v1);

			Sektory[i]->Location = System::Drawing::Point(pictureBox1->Width * i / n , pictureBox1->Height-Sektory[i]->Height - 39 );

			Sektory[i]->Name = "Sektor" + i.ToString();
			Sektory[i]->TabIndex = 5;
			Sektory[i]->BackColor = Color::White;
			Sektory[i]->Tag = (int)(i);
			Sektory[i]->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;

			pictureBox1->Controls->Add(Sektory[i]);

		}
		Start->Enabled = false;
		
		MyForm::FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
		
		MaximizeBox = false;
		MinimizeBox = false;
		
}
	   



	   // RANDOM MORE !!!!
private: System::Void Random_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < n; i++) {
		int v2 = rand() % 300;
		Sektory[i]->Size = System::Drawing::Size(pictureBox1->Width / n, 200 + v2);
		Sektory[i]->Location = System::Drawing::Point(pictureBox1->Width * i / n, pictureBox1->Height - Sektory[i]->Height - 39);
	}

}

	   //Reset this shit but u have to correct this
private: System::Void Reset_Click(System::Object^ sender, System::EventArgs^ e) {
	Start->Enabled = true;
	for (int i = 0; i < n; i++) {
		Sektory[i]->Visible = false;
	}

}
};
}
