#include "stdafx.h"
#include"Calculation.h"
String^ Calculation::calculate(String^ readline){
	equation_count++;
	error = false;
	Expression^ expression = gcnew Expression(readline);
	if (error) { return L"ERROR"; }
	return expression->get_result()->ToString();
}

