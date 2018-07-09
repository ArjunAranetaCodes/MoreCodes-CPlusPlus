//Problem 13: Write a program that recognizes valid hex color value using Regular Expression.
//#include <regex> in stdafx.h
//#include <iostream> in stdafx.h
//#include <string> in stdafx.h
#include "stdafx.h" 

using namespace std;

int main()
{
	regex rx0("^#([A-Fa-f0-9]{6}|[A-Fa-f0-9]{3})$");
	cout << boolalpha << regex_match("#fff", rx0) << endl;
	cout << boolalpha << regex_match("#asdf", rx0) << endl;

	cin.get();
}
