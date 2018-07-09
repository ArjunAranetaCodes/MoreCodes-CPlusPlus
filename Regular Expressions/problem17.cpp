//Problem 17: Write a program that removes the last word in a string using Regular Expression.
//#include <regex> in stdafx.h
//#include <iostream> in stdafx.h
//#include <string> in stdafx.h
#include "stdafx.h" 

using namespace std;

int main()
{
	string word = "Hello World";
	regex rx0("\\w+$");
	cout << regex_replace(word, rx0, "") << endl;

	cin.get();
}
