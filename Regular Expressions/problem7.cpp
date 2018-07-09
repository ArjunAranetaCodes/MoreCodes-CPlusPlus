//Problem 7: Write a program that counts vowels in a String using Regular Expression.
//#include <regex> in stdafx.h
//#include <iostream> in stdafx.h
//#include <string> in stdafx.h
#include "stdafx.h" 

using namespace std;

int main()
{	
	string word = "Hello World";
	regex rx0("[^aeiouAEIOU]");
	cout << regex_replace(word, rx0, "").length() << endl;
	
	cin.get();
}
