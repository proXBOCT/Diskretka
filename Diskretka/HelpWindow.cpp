#include "HelpWindow.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main1(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Diskretka::HelpWindow form; //WinFormsTest - ��� ������ �������
	Application::Run(%form);
}