//Problem 4: Write a program that matches time in 12 hour format.
//#include <regex> in stdafx.h
//#include <iostream> in stdafx.h
#include "stdafx.h" 

using namespace std;

int main()
{	
	regex rx0("(((0[1-9])|(1[0-2])):([0-5])([0-9])\\s(a|p)m)");
	cout << boolalpha << regex_match("08:01 am", rx0) << endl;
	cout << boolalpha << regex_match("18:01 pm", rx0) << endl;
	
	cin.get();
}
