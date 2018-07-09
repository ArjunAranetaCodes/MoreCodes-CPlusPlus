//Problem 12: Write a program that counts the occurrence of digits in a string using Regular Expression.
//#include <regex> in stdafx.h
//#include <iostream> in stdafx.h
//#include <string> in stdafx.h
#include "stdafx.h" 

using namespace std;

int main()
{
	string word = "Hello12 World12";
	regex rx0("\\D");
	cout << regex_replace(word, rx0, "") << endl;

	cin.get();
}
