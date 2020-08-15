#pragma once
#include <cstdlib>
#include <windows.h>

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


	private: System::Windows::Forms::Button^ Reset;


	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::RadioButton^ BubbleSort;
	private: System::Windows::Forms::RadioButton^ InsertionSort;
	private: System::Windows::Forms::RadioButton^ QuickSort;
	private: System::Windows::Forms::RadioButton^ MergeSort;
	private: System::Windows::Forms::RadioButton^ SelectionSort;
	private: System::Windows::Forms::RadioButton^ HeapSort;














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
			this->Reset = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->BubbleSort = (gcnew System::Windows::Forms::RadioButton());
			this->InsertionSort = (gcnew System::Windows::Forms::RadioButton());
			this->QuickSort = (gcnew System::Windows::Forms::RadioButton());
			this->MergeSort = (gcnew System::Windows::Forms::RadioButton());
			this->SelectionSort = (gcnew System::Windows::Forms::RadioButton());
			this->HeapSort = (gcnew System::Windows::Forms::RadioButton());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
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
			this->Start->Location = System::Drawing::Point(1094, 12);
			this->Start->Name = L"Start";
			this->Start->Size = System::Drawing::Size(69, 20);
			this->Start->TabIndex = 1;
			this->Start->Text = L"Start";
			this->Start->UseVisualStyleBackColor = true;
			this->Start->Click += gcnew System::EventHandler(this, &MyForm::Start_Click);
			// 
			// Sort
			// 
			this->Sort->BackColor = System::Drawing::Color::Lime;
			this->Sort->ForeColor = System::Drawing::Color::Black;
			this->Sort->Location = System::Drawing::Point(1094, 64);
			this->Sort->Name = L"Sort";
			this->Sort->Size = System::Drawing::Size(69, 32);
			this->Sort->TabIndex = 2;
			this->Sort->Text = L"Let\'s Sort";
			this->Sort->UseVisualStyleBackColor = false;
			this->Sort->Click += gcnew System::EventHandler(this, &MyForm::Sort_Click);
			// 
			// Random
			// 
			this->Random->Location = System::Drawing::Point(1094, 38);
			this->Random->Name = L"Random";
			this->Random->Size = System::Drawing::Size(69, 20);
			this->Random->TabIndex = 3;
			this->Random->Text = L"Random";
			this->Random->UseVisualStyleBackColor = true;
			this->Random->Click += gcnew System::EventHandler(this, &MyForm::Random_Click);
			// 
			// Reset
			// 
			this->Reset->Location = System::Drawing::Point(1006, 38);
			this->Reset->Name = L"Reset";
			this->Reset->Size = System::Drawing::Size(77, 20);
			this->Reset->TabIndex = 5;
			this->Reset->Text = L"Reset";
			this->Reset->UseVisualStyleBackColor = true;
			this->Reset->Click += gcnew System::EventHandler(this, &MyForm::Reset_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(1006, 12);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9999, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(77, 20);
			this->numericUpDown1->TabIndex = 8;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick_1);
			// 
			// BubbleSort
			// 
			this->BubbleSort->AutoSize = true;
			this->BubbleSort->Location = System::Drawing::Point(1006, 108);
			this->BubbleSort->Name = L"BubbleSort";
			this->BubbleSort->Size = System::Drawing::Size(77, 17);
			this->BubbleSort->TabIndex = 9;
			this->BubbleSort->TabStop = true;
			this->BubbleSort->Text = L"BubbleSort";
			this->BubbleSort->UseVisualStyleBackColor = true;
			// 
			// InsertionSort
			// 
			this->InsertionSort->AutoSize = true;
			this->InsertionSort->Location = System::Drawing::Point(1006, 131);
			this->InsertionSort->Name = L"InsertionSort";
			this->InsertionSort->Size = System::Drawing::Size(84, 17);
			this->InsertionSort->TabIndex = 10;
			this->InsertionSort->TabStop = true;
			this->InsertionSort->Text = L"InsertionSort";
			this->InsertionSort->UseVisualStyleBackColor = true;
			// 
			// QuickSort
			// 
			this->QuickSort->AutoSize = true;
			this->QuickSort->Location = System::Drawing::Point(1089, 108);
			this->QuickSort->Name = L"QuickSort";
			this->QuickSort->Size = System::Drawing::Size(72, 17);
			this->QuickSort->TabIndex = 11;
			this->QuickSort->TabStop = true;
			this->QuickSort->Text = L"QuickSort";
			this->QuickSort->UseVisualStyleBackColor = true;
			// 
			// MergeSort
			// 
			this->MergeSort->AutoSize = true;
			this->MergeSort->Location = System::Drawing::Point(1087, 131);
			this->MergeSort->Name = L"MergeSort";
			this->MergeSort->Size = System::Drawing::Size(74, 17);
			this->MergeSort->TabIndex = 12;
			this->MergeSort->TabStop = true;
			this->MergeSort->Text = L"MergeSort";
			this->MergeSort->UseVisualStyleBackColor = true;
			// 
			// SelectionSort
			// 
			this->SelectionSort->AutoSize = true;
			this->SelectionSort->Location = System::Drawing::Point(1006, 154);
			this->SelectionSort->Name = L"SelectionSort";
			this->SelectionSort->Size = System::Drawing::Size(88, 17);
			this->SelectionSort->TabIndex = 13;
			this->SelectionSort->TabStop = true;
			this->SelectionSort->Text = L"SelectionSort";
			this->SelectionSort->UseVisualStyleBackColor = true;
			// 
			// HeapSort
			// 
			this->HeapSort->AutoSize = true;
			this->HeapSort->Location = System::Drawing::Point(1091, 154);
			this->HeapSort->Name = L"HeapSort";
			this->HeapSort->Size = System::Drawing::Size(70, 17);
			this->HeapSort->TabIndex = 14;
			this->HeapSort->TabStop = true;
			this->HeapSort->Text = L"HeapSort";
			this->HeapSort->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1183, 640);
			this->Controls->Add(this->HeapSort);
			this->Controls->Add(this->SelectionSort);
			this->Controls->Add(this->MergeSort);
			this->Controls->Add(this->QuickSort);
			this->Controls->Add(this->InsertionSort);
			this->Controls->Add(this->BubbleSort);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->Reset);
			this->Controls->Add(this->Random);
			this->Controls->Add(this->Sort);
			this->Controls->Add(this->Start);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: array<System::Windows::Forms::PictureBox^>^ Sektory;

		  int n = 99999;
		  int* tab = new int[n];



		  // timer for front end :D

	private: System::Void timer1_Tick_1(System::Object^ sender, System::EventArgs^ e) {
		pictureBox1->Height = MyForm::Height;
		pictureBox1->Width = MyForm::Width - 200;

		Start->Left = MyForm::Width - 100;
		Random->Left = MyForm::Width - 100;
		Sort->Left = MyForm::Width - 100;
		Reset->Left = MyForm::Width - 190;

		BubbleSort->Left = MyForm::Width - 190;
		QuickSort->Left =  MyForm::Width - 100;
		InsertionSort->Left  = MyForm::Width - 190;
		MergeSort->Left = MyForm::Width - 100;
		SelectionSort->Left = MyForm::Width - 190;
		HeapSort->Left = MyForm::Width - 100;

		numericUpDown1->Left = MyForm::Width - 190;
	}


	private: System::Void Start_Click(System::Object^ sender, System::EventArgs^ e) {
		n = Convert::ToInt32(numericUpDown1->Value);


		Sektory = gcnew array<System::Windows::Forms::PictureBox^>(n);
		for (int i = 0; i < n; i++) {

			int v1 = rand() % 300;
			tab[i] = v1;

			Sektory[i] = gcnew System::Windows::Forms::PictureBox;

			Sektory[i]->Size = System::Drawing::Size(pictureBox1->Width / n, 200 + v1);

			Sektory[i]->Location = System::Drawing::Point(pictureBox1->Width * i / n, pictureBox1->Height - Sektory[i]->Height - 39);

			Sektory[i]->Name = "Sektor" + i.ToString();
			Sektory[i]->TabIndex = 5;
			Sektory[i]->BackColor = Color::White;
			Sektory[i]->Tag = (int)(i);
			Sektory[i]->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;

			pictureBox1->Controls->Add(Sektory[i]);

		}
		Start->Enabled = false;

		//MyForm::FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;

		MaximizeBox = false;
		MinimizeBox = false;

	}




		   // RANDOM MORE !!!!
	private: System::Void Random_Click(System::Object^ sender, System::EventArgs^ e) {
		Random->Enabled = false;
		for (int i = 0; i < n; i++) {
			int v2 = rand() % 300;
			Sektory[i]->Size = System::Drawing::Size(pictureBox1->Width / n, 200 + v2);
			Sektory[i]->Location = System::Drawing::Point(pictureBox1->Width * i / n, pictureBox1->Height - Sektory[i]->Height - 39);
		}
		Random->Enabled = true;

	}

		   //Reset this shit but u have to correct this
	private: System::Void Reset_Click(System::Object^ sender, System::EventArgs^ e) {
		Start->Enabled = true;
		for (int i = 0; i < n; i++) {
			Sektory[i]->Visible = false;
		}

	}
	private: System::Void Sort_Click(System::Object^ sender, System::EventArgs^ e) {
		if (BubbleSort->Checked) {
			Bubble();
		}
		if (QuickSort->Checked) {
			Quick(0,n-1);
			Verification();
		}
		if (InsertionSort->Checked) {
			Insertion();
			Verification();
		}
		if (MergeSort->Checked) {
			Merge_Sort(0,n-1);
			Verification();
		}
		if (SelectionSort->Checked) {
			Selection();
			Verification();
		}
		if (HeapSort->Checked) {
			Heap();
			Verification();
		}

	}

	//================================Sorting Algorithms===============================================

	private: System::Void LooksOk() {
		for (int k = 0; k < n; k++) {
			Sektory[k]->Location = System::Drawing::Point(pictureBox1->Width * (k) / n, pictureBox1->Height - Sektory[k]->Height - 39);
		}

	}

	private: System::Void Verification() {
		for (int i = 0; i < n; i++) {
			Sektory[i]->BackColor = Color::Green;
			Application::DoEvents();
			System::Threading::Thread::Sleep(10);
		}
	}

	public: System::Void swap(int xp, int yp) {
		
		/*int ^temp = xp;
		xp = yp;
		yp = temp;*/
		
		int temp = Sektory[xp]->Height;
		Sektory[xp]->Height = Sektory[yp]->Height;
		Sektory[yp]->Height = temp;
	   };

	private: System::Void Bubble() {
		
		bool swapped;

		for (int i = 0; i < n-1; i++) {	
			swapped = false;
			for (int j = 0; j < n - i - 1; j++) {

				if (Sektory[j]->Height > Sektory[j + 1]->Height) {
					Sektory[j]->BackColor = Color::Green;

					
					swap(j,j+1);
					
					Sektory[j]->Location = System::Drawing::Point(pictureBox1->Width * j / n, pictureBox1->Height - Sektory[j]->Height - 39);
					
					swapped = true;
			
					Application::DoEvents();

					Sektory[j]->BackColor = Color::White;

				}
				Sektory[j+1]->Location = System::Drawing::Point(pictureBox1->Width * (j+1) / n, pictureBox1->Height - Sektory[j+1]->Height - 39 );
				
			}
			
			if (swapped == false) {
				Verification();
			}
		}
	
	}

	private: System::Void Quick(int left, int right) {
		int i = left, j = right;
		int tmp;
		int pivot = Sektory[(i + j) / 2] -> Height;


		while (i <= j ) {
			while (Sektory[i]->Height < pivot) i++;
			while (Sektory[j]->Height > pivot) j--;
			if (i <= j) {
				Sektory[j]->BackColor = Color::Green;
				tmp = Sektory[i]->Height;

				Sektory[i]->Height = Sektory[j]->Height;
				Sektory[j]->Height = tmp;

				Sektory[j]->Location = System::Drawing::Point(pictureBox1->Width * j / n, pictureBox1->Height - Sektory[j]->Height - 39);
				Application::DoEvents();

				Sektory[j]->BackColor = Color::White;

				i++; j--;
			}
			Sektory[i-1]->Location = System::Drawing::Point(pictureBox1->Width * (i-1) / n, pictureBox1->Height - Sektory[i-1]->Height - 39);

		}
		if (left < j) Quick(left, j);
		if (i < right) Quick(i, right);
		
	}
	
	private: System::Void Insertion() {
		int i, key, j;
		
		for (i = 1; i < n; i++) {
			key = Sektory[i]->Height;
			Sektory[i]->BackColor = Color::Green;
			for (j = i - 1; j >= 0 && Sektory[j]->Height > key; j--) {
				Sektory[j]->BackColor = Color::Red;
				Sektory[j + 1]->Height = Sektory[j]->Height;
				// i can change this and use fuction swap() so change this later
				Sektory[j]->Location = System::Drawing::Point(pictureBox1->Width * (j) / n, pictureBox1->Height - Sektory[j]->Height - 39);
				Application::DoEvents();		
				Sektory[j]->BackColor = Color::White;
			}
			Sektory[i]->BackColor = Color::White;
			Sektory[j + 1]->Height = key;	
		}

		LooksOk(); // i have to change this. This get around the problem. Aligns the blocks correctly
		
		Verification();

	}

	private: System::Void Merge_Sort(int start,int koniec) {
		int srodek;

		if (start != koniec)
		{
			srodek = (start + koniec) / 2;
			Merge_Sort(start, srodek);
			Merge_Sort(srodek + 1, koniec);
			Marge( start, srodek, koniec);
		}

	}

	private: System::Void Marge(int start,int srodek,int koniec) {
	
		int* temp = new int[n];

		for (int Z = 0; Z < n; Z++) {
			temp[Z] = Sektory[Z]->Height;
		}

		int i = start, j = srodek + 1, k = 0;

		while (i <= srodek && j <= koniec) {
			if (Sektory[j]->Height < Sektory[i]->Height) {
				temp[k]= Sektory[j]->Height;
				j++;
			}
			else {
				temp[k] = Sektory[i]->Height;
				i++;
			}
			k++;
		}

		if (i <= srodek) {
			while (i <= srodek) {
				temp[k] = Sektory[i]->Height;
				i++; k++;
			}
		}
		else {
			while (j <= koniec) {
				temp[k] = Sektory[j]->Height;
				j++; k++;
			}
		}
		for (i = 0; i <= koniec - start; i++) {
			Sektory[start + i]->BackColor = Color::Red;
			Sektory[start + i]->Height = temp[i];
			Sektory[start + i]->Location = System::Drawing::Point(pictureBox1->Width * (start + i) / n, pictureBox1->Height - Sektory[start + i]->Height - 39);
			Application::DoEvents();
			Sektory[start + i]->BackColor = Color::White;
		}

	}

	private: System::Void Selection() {
		int i, j, min_idx;
		for (i = 0; i < n - 1; i++) {
			min_idx = i;
			for (j = i + 1; j < n; j++) 
				if (Sektory[j]->Height < Sektory[min_idx]->Height) min_idx = j;
			Sektory[i]->BackColor = Color::Green;
			swap(min_idx,i);	
			Sektory[min_idx]->Location = System::Drawing::Point(pictureBox1->Width * min_idx / n, pictureBox1->Height - Sektory[min_idx]->Height - 39);
			Application::DoEvents();
			Sektory[i]->Location = System::Drawing::Point(pictureBox1->Width * i / n, pictureBox1->Height - Sektory[i]->Height- 39);
			Sektory[i]->BackColor = Color::White;
		}
	}


	private: System::Void heapify(int n, int i) {

		int largest = i; 
		int l = 2 * i + 1; // left = 2*i + 1 
		int r = 2 * i + 2; // right = 2*i + 2 

		if (l < n && Sektory[l]->Height > Sektory[largest]->Height)
			largest = l;

		
		if (r < n && Sektory[r]->Height > Sektory[largest]->Height)
			largest = r;

		
		if (largest != i)
		{
			swap(i, largest);
			Sektory[largest]->Location = System::Drawing::Point(pictureBox1->Width * largest / n, pictureBox1->Height - Sektory[largest]->Height - 39);
			heapify(n, largest);
		}
	
	}

	private: System::Void Heap() {
		for (int i = n / 2 - 1; i >= 0; i--) {
			heapify(n, i);
		}
		for (int i = n - 1; i > 0; i--){
			
			swap(0, i);
			Sektory[i]->Location = System::Drawing::Point(pictureBox1->Width * i / n, pictureBox1->Height - Sektory[i]->Height - 39);
			Application::DoEvents();
			heapify(i, 0);
			Sektory[0]->Location = System::Drawing::Point(pictureBox1->Width * 0 / n, pictureBox1->Height - Sektory[0]->Height - 39);

		}

	}




};
}
