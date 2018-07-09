//Problem 9: Write a program that checks if the string is alphanumeric using Regular Expression.
//#include <regex> in stdafx.h
//#include <iostream> in stdafx.h
#include "stdafx.h" 

using namespace std;

int main()
{
	regex rx0("(([A-Z].*[0-9])|([0-9].*[A-Z]))");
	cout << boolalpha << regex_match("HelloWorld", rx0) << endl;
	cout << boolalpha << regex_match("HelloWorld123", rx0) << endl;

	cin.get();
}
