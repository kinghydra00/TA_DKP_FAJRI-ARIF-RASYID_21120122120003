#include "Blackjack.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TAPDKP::Blackjack form; //xx diubah ke nama kelompok kalian.Sesuaikan dengan nama project
		Application::Run(% form);
}
