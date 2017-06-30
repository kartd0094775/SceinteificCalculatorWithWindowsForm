// Sceinteific_Calculator_WindowsForm.cpp : main project file.
/**
* Scientific Calculator with Widows Form
========================================
* 4102056019 林凡煒 第五次作業 12/4
* Implement a scientific calculator and display on the Windows Form to the user
* 
* starting date: 2015/12/4
*
*/

#include "stdafx.h"
#include "MyForm.h"
using namespace System;
using namespace Sceinteific_Calculator_WindowsForm;
[STAThread]
int main(array<System::String ^> ^args)
{
	MyForm^ myform = gcnew MyForm();
	myform->ShowDialog();
    return 0;
}
