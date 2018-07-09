//Problem 19: Write a program that counts all numbers in a string using Regular Expression.
//#include <regex> in stdafx.h
//#include <iostream> in stdafx.h
//#include <string> in stdafx.h
#include "stdafx.h" 

using namespace std;

int main()
{
	string word = "Hello World123";
	regex rx0("[^0-9]");
	cout << regex_replace(word, rx0, "").length() << endl;

	cin.get();
}
