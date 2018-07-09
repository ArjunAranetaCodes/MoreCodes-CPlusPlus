//Problem 14: Write a program that recognizes valid hex color value using Regular Expression.
//#include <regex> in stdafx.h
//#include <iostream> in stdafx.h
//#include <string> in stdafx.h
#include "stdafx.h" 

using namespace std;

int main()
{
	regex rx0("^([01]?\\d\\d?|2[0-4]\\d|25[0-5])\\.([01]?\\d\\d?|2[0-4]\\d|25[0-5])\\.([01]?\\d\\d?|2[0-4]\\d|25[0-5])\\.([01]?\\d\\d?|2[0-4]\\d|25[0-5])$");
	cout << boolalpha << regex_match("192.168.1.1", rx0) << endl;
	cout << boolalpha << regex_match("1.1.1.1.1", rx0) << endl;

	cin.get();
}
