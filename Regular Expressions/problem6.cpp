//Problem 6: Write a program that removes white space and non-visible characters.
//#include <regex> in stdafx.h
//#include <iostream> in stdafx.h
#include "stdafx.h" 

using namespace std;

int main()
{	
	string word = "Hello World";
	regex rx0("\\s");
	cout << boolalpha << regex_replace(word, rx0, "") << endl;
	
	cin.get();
}
