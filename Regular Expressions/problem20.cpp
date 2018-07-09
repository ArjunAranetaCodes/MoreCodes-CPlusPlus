//Problem 20: Write a program that validates if string length is between 5 to 10 using Regular Expression.
//#include <regex> in stdafx.h
//#include <iostream> in stdafx.h
//#include <string> in stdafx.h
#include "stdafx.h" 

using namespace std;

int main()
{
	regex rx0("\\w{5,10}\\b");
	cout << boolalpha << regex_match("Hello World", rx0) << endl;
	cout << boolalpha << regex_match("Hello", rx0) << endl;

	cin.get();
}
