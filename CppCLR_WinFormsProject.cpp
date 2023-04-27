#include "pch.h"
#include <bits/stdc++.h>
#include <msclr\marshal_cppstd.h>
#include "stat.h"

using namespace std;
using namespace System;
using namespace System::Runtime::InteropServices;

// int main(array<System::String ^> ^args)
// {
//    return 0;
// }

#include "Form1.h"

using namespace System::Windows::Forms;

[STAThread]
int main()
{
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);
  Application::Run(gcnew CppCLRWinFormsProject::Form1());
  return 0;
}