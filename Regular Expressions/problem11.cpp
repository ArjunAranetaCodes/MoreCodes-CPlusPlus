//Problem 11: Write a program that counts the occurrence of a string in a string using Regular Expression.
//#include <regex> in stdafx.h
//#include <iostream> in stdafx.h
//#include <string> in stdafx.h
#include "stdafx.h" 

using namespace std;

int main()
{
	string word = "HelloWorldHelloWorld";
	string strRx = "Hello";
	regex rx(strRx);
	string newword = regex_replace(word, rx, "");
	int count = (word.length() - newword.length()) / strRx.length();
	cout << count << endl;

	cin.get();
}
