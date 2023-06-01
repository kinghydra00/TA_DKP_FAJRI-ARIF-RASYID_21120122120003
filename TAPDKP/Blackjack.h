#pragma once
#include <stdlib.h>
#include <time.h>
#include <string>


namespace TAPDKP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Blackjack
	/// </summary>
	public ref class Blackjack : public System::Windows::Forms::Form
	{
	private:
		System::Collections::Generic::Queue<String^>^ kartuQueue;
		System::Collections::Generic::Queue<String^>^ dealerQueue;
		int Total;
		int Totalkartu;
		int Totaldealer;
	private: System::Windows::Forms::Button^ button6;
		   bool no;

	public:
		Blackjack(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			kartuQueue = gcnew System::Collections::Generic::Queue<String^>();
			dealerQueue = gcnew System::Collections::Generic::Queue<String^>();
			button1->Enabled = false;
			button2->Enabled = false;
		}
	
		int ambil()
		{
			return rand() % 10 + 1;
		}

		int kartu()
		{
			return Totalkartu + ambil();
		}

		int kartudealer()
		{
			return Totaldealer + ambil();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Blackjack()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ KarPlay;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ KarDel;
	private: System::Windows::Forms::Label^ Hasil;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Blackjack::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->KarPlay = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->KarDel = (gcnew System::Windows::Forms::Label());
			this->Hasil = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 90);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(205, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Jumlah Kartu Player";
			// 
			// KarPlay
			// 
			this->KarPlay->BackColor = System::Drawing::Color::White;
			this->KarPlay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->KarPlay->Location = System::Drawing::Point(14, 132);
			this->KarPlay->Name = L"KarPlay";
			this->KarPlay->Size = System::Drawing::Size(203, 79);
			this->KarPlay->TabIndex = 1;
			this->KarPlay->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(493, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(207, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Jumlah Kartu Dealer";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(493, 214);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(194, 25);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Hasil Pertandingan";
			// 
			// KarDel
			// 
			this->KarDel->BackColor = System::Drawing::Color::White;
			this->KarDel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->KarDel->Location = System::Drawing::Point(495, 132);
			this->KarDel->Name = L"KarDel";
			this->KarDel->Size = System::Drawing::Size(205, 56);
			this->KarDel->TabIndex = 4;
			this->KarDel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Hasil
			// 
			this->Hasil->BackColor = System::Drawing::Color::White;
			this->Hasil->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Hasil->Location = System::Drawing::Point(495, 252);
			this->Hasil->Name = L"Hasil";
			this->Hasil->Size = System::Drawing::Size(205, 41);
			this->Hasil->TabIndex = 5;
			this->Hasil->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button1->Location = System::Drawing::Point(17, 231);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Lanjut";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Blackjack::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button2->Location = System::Drawing::Point(142, 231);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Berhenti";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Blackjack::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button3->Location = System::Drawing::Point(17, 270);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 8;
			this->button3->Text = L"History";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Blackjack::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Red;
			this->button4->Location = System::Drawing::Point(393, 310);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Keluar";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Blackjack::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Lime;
			this->button5->Location = System::Drawing::Point(241, 310);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 10;
			this->button5->Text = L"Mulai";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Blackjack::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button6->Location = System::Drawing::Point(142, 270);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 11;
			this->button6->Text = L"Clear";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Blackjack::button6_Click);
			// 
			// Blackjack
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(712, 361);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Hasil);
			this->Controls->Add(this->KarDel);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->KarPlay);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Blackjack";
			this->Text = L"Blackjack";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Totalkartu = kartu();
		KarPlay->Text = Totalkartu.ToString();

		if (Totalkartu >= 21)
		{
			KarDel->Text = Totaldealer.ToString();
			button1->Enabled = false;

			if ((Totalkartu < 22 && Totalkartu > Totaldealer) || (Totaldealer > 21 && Totalkartu < 22) || (Totalkartu > 21 && Totalkartu < Totaldealer))
			{
				Hasil->Text = "Anda Menang";
			}
			else if (Totalkartu == Totaldealer)
			{
				Hasil->Text = "Seri";
			}
			else
			{
				Hasil->Text = "Anda Kalah";
			}
			dealerQueue->Enqueue(Totaldealer.ToString());
			kartuQueue->Enqueue(Totalkartu.ToString());
		}
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	KarDel->Text = Totaldealer.ToString();

	if ((Totalkartu < 22 && Totalkartu > Totaldealer) || (Totaldealer > 21 && Totalkartu < 22) || (Totalkartu > 21 && Totalkartu < Totaldealer))
	{
		Hasil->Text = "Anda Menang";
	}
	else if (Totalkartu == Totaldealer)
	{
		Hasil->Text = "Seri";
	}
	else
	{
		Hasil->Text = "Anda Kalah";
	}

	kartuQueue->Enqueue(Totalkartu.ToString()); 
	dealerQueue->Enqueue(Totaldealer.ToString()); 

	button1->Enabled = false;
	button2->Enabled = false;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	srand(time(0));
	Totalkartu = ambil() + ambil();
	Totaldealer = ambil() + ambil();
	KarPlay->Text = Totalkartu.ToString();
	KarDel->Text = "";
	Hasil->Text = "";

	no = false; // Reset the flag for dealer's turn

	while (Totaldealer <= 21 && !no)
	{
		if (Totaldealer >= 17)
			no = true;
		else
			Totaldealer += ambil();
	}

	button1->Enabled = true;
	button2->Enabled = true;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ hasilPemain = "Kartu Pemain:\n";
	for each (String ^ kartu in kartuQueue)
	{
		hasilPemain += kartu + "\n";
	}

	String^ hasilDealer = "Kartu Dealer:\n";
	for each (String ^ kartu in dealerQueue)
	{
		hasilDealer += kartu + "\n";
	}

	MessageBox::Show(hasilPemain + "\n" + hasilDealer, "Hasil");
}


private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	kartuQueue->Clear();
	dealerQueue->Clear();
}
};
}
