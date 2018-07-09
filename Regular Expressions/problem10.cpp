//Problem 10: Write a program that prints an integer with commas separator using Regular Expression.
//#include <regex> in stdafx.h
//#include <iostream> in stdafx.h
//#include <string> in stdafx.h
#include "stdafx.h" 

using namespace std;

int main()
{
	string word = "1000";
	regex rx0("(\\d)(?=(\\d{3})+$)");
	cout << regex_replace(word, rx0, "$1,") << endl;

	cin.get();
}
