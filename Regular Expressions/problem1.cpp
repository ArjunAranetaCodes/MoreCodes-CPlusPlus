//Problem 1: Write a program to test if the first character of the String is uppercase.
//#include <regex> in stdafx.h
//#include <iostream> in stdafx.h
#include "stdafx.h" 

using namespace std;

int main()
{	
	regex rx0("^[A-Z][a-z0-9_-]{3,19}$");
	cout << boolalpha << regex_match("Hello", rx0) << endl;
	cout << boolalpha << regex_match("world", rx0) << endl;
	
	cin.get();
}
