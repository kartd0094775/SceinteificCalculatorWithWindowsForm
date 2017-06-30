
 
#include "stdafx.h"

using namespace System;
using namespace System::IO;

ref class Calculation {
public:
	static int equation_count = 0;
	static bool error;
	static String^ calculate(String^ readline);

};
ref class Expression {
private:
	const double exponential = 2.71828182846;

	String^ readline;
	double^ result;
public:
	//	Constructor
	Expression(String^ expression) {
		// initialized the object
		readline = expression;
		result = gcnew double(0.0);

		eatspaces();
		result = term();
		while (true) {
			if (readline->Length == 0) { break; }// EOF
			else if (match_Char(L'+')) {
				*result += *term();
			}
			else if (match_Char(L'-')) {
				*result -= *term();
			}
			else {
				Calculation::error = true;
				break;
			}
		}
	}
	//	getting function
	double^ get_result() { return result; }
	double^ get_number(int index) {
		String^ temp = readline->Substring(0, index + 1);
		if (index + 1 < readline->Length)
			readline = readline->Substring(index + 1);
		else
			readline = L"";
		return gcnew Double(Double::Parse(temp));
	}
	bool match_Char(wchar_t^ ch) {
		array<wchar_t>^ temp = readline->ToCharArray();
		if (temp[0] == *ch) {
			readline = readline->Substring(1);
			return true;
		}
		return false;
	}
	bool match_Str(String^ str) {
		String^ temp = readline->Substring(0, str->Length);
		if (!String::Compare(temp, str)) {
			readline = readline->Substring(str->Length + 1);
			return true;
		}
		else {
			return false;
		}
	}
	bool contain_scientific_operator() {
		String^ op = gcnew String("+-*/%");
		array<wchar_t>^ temp = readline->ToCharArray();
		if (readline->Length == 0) { return false; }
			if (op->IndexOf(temp[0]) != -1) {
				return false;
			}
		return true;
	
	
	}
	int EndIndex() {
		String^ number = gcnew String(L"0123456789.");
		array<wchar_t>^ temp = readline->ToCharArray();
		int index = 0;
		for (int i = 0; i < temp->Length; i++) {
			if (number->IndexOf(temp[index]) == -1) { break; }
			index++;
		}
		return index - 1;
	}
	String^ eatspaces() {	// remove the spaces in the string
		return readline->Trim(L' ');
	}
	double^ term() {
		double^ value = gcnew double(0.0);
		value = science();
		while (true) {
			if (readline->Length == 0) { return value; }
			if (match_Char(L'*')) {
				*value *= *science();
			}
			else if (match_Char(L'/')) {
				*value /= *science();
			}
			else if (match_Char(L'%')) {
				*value = (int)*value % (int)*science();
			}
			else { return value; }
		}
	}
	double^ science() {
		double^ value = gcnew double(0.0);
		array<double^ >^ buffer = gcnew array<double^ >(20);
		int buffer_index = int(0);
		String^ bufString = gcnew String(L"");
		Expression^ expression;
		do {
			if (match_Char(L'p')) {
				if (match_Str(L"ow")) {	// operation: pow
					buffer[buffer_index++] = power_extract();
				}
				else {	// prevent bug
					Calculation::error = true;
				}
				bufString += L"#";
			}
			else if (match_Char(L's')) {
				if (match_Str(L"qrt")) {	// operation: sqrt
					expression = gcnew Expression(extract());
					buffer[buffer_index++] = sqrt(*expression->get_result());
				}
				else if (match_Str(L"in"))	// operation: sin
				{
					expression = gcnew Expression(extract());
					buffer[buffer_index++] = sin(*expression->get_result());
				}
				else if (match_Str(L"ec")) {	// operation: sec
					expression = gcnew Expression(extract());
					buffer[buffer_index++] = 1.0 / cos(*expression->get_result());
				}
				else {	// prevent bug
					Calculation::error = true;
				}
				bufString += L"#";
			}
			else if (match_Char(L'c')) {
				if (match_Str(L"sc")) {	// operation: csc
					expression = gcnew Expression(extract());
					buffer[buffer_index++] = 1.0 / sin(*expression->get_result());
				}
				else if (match_Str(L"ot")) {	// operation: cot
					expression = gcnew Expression(extract());
					buffer[buffer_index++] = 1.0 / tan(*expression->get_result());
				}
				else if (match_Str(L"os")) {
					expression = gcnew Expression(extract());
					buffer[buffer_index++] = cos(*expression->get_result());
				}
				else {	// prevent bug
					Calculation::error = true;
				}
				bufString += L"#";

			}
			else if (match_Char(L'l')) {
				if (match_Str(L"og")) {	// operation: log
					expression = gcnew Expression(extract());
					buffer[buffer_index++] = log10(*expression->get_result());
				}
				else {	// prevent bug
					Calculation::error = true;
				}
				bufString += L"#";
			}
			else if (match_Char(L't')) {
				if (match_Str(L"an")) {	// opertaion: tan
					expression = gcnew Expression(extract());
					buffer[buffer_index++] = tan(*expression->get_result());
				}
				else {	// prevent bug
					Calculation::error = true;
				}
				bufString += L"#";
			}
			else if (match_Char(L'!')) {	// operation: !
				bufString += L"!";
			}
			else if (match_Char(L'^')) {	// operation: ^
				bufString += L"^";
			}
			else {
				buffer[buffer_index++] = *number();
				bufString += L"#";
			}
		} while (contain_scientific_operator());
		return scientific_cal(bufString, buffer, buffer_index - 1);
	}
	double^ number() {
		double^ value = gcnew double(0.0);
		if (match_Char(L'(')) {
			Expression^ expression = gcnew Expression(extract());
			value = expression->get_result();
			return value;
		}
		if (match_Char(L'e')) { return exponential; }
		return  get_number(EndIndex());
	}
	double^ power_extract() {
		String^ temp = extract();
		int powerindex = temp->IndexOf(L"pow");
		int dotindex = temp->IndexOf(L",");
		
		while (dotindex > powerindex && powerindex != -1) {
			powerindex = powerindex = temp->IndexOf(L"pow", powerindex + 1);
			int dotindex = temp->IndexOf(L",", + 1);
		}
		Expression^ exp1 = gcnew Expression(temp->Substring(0, dotindex));
		Expression^ exp2 = gcnew Expression(temp->Substring(dotindex + 1));
		double^ result = gcnew double(pow(*exp1->get_result(), *exp2->get_result()));
		return result;
		
	}
	String^ extract() {
		String^ temp;
		int rightindex = readline->IndexOf(L")");
		int leftindex = readline->IndexOf(L"(");
		int count = 0;
		while (leftindex < rightindex) {
			if (leftindex == -1) { break; }
			count++;
			leftindex = readline->IndexOf(L"(", leftindex + 1);
		}
		for (int i = 0; i < count; i++) {
			rightindex = readline->IndexOf(L")", rightindex + 1);
		}
		temp = readline->Substring(0, rightindex);
		readline = readline->Substring(rightindex + 1);
		return temp;
	}


	double^ scientific_cal(String^ sci_str, array<double ^>^ buffer, int buffer_index) {
		if (sci_str->Length == 0) { return 0.0; }	// zero
		if (!sci_str->Contains(L"^")) {	// no power operator
			return factorial_divide(sci_str, buffer[0]);
		}
		array<String^>^ num = sci_str->Split(L'^');
		double^ valueL = gcnew double(0);
		double^ valueR = gcnew double(0);
		valueR = factorial_divide(num[num->Length - 1], buffer[buffer_index--]);
		for (int i = num->Length - 2; i >= 0; i--) {
			valueL = factorial_divide(num[i], buffer[buffer_index--]);
			valueR = pow(*valueL, *valueR);
		}
		return valueR;
	}
	double^ factorial_divide(String^ token, double^ initial) {
		double^ value = initial;
		for (int i = 1; i < token->Length; i++) {
			value = factorial_cal(value);
		}
		return value;
	}
	double^ factorial_cal(double^ number) {
		int^ value = gcnew int(1);
		for (int i = 1; i <= (int)*number; i++) {
			*value *= i;
		}
		return (gcnew double(*value));
	}


};

