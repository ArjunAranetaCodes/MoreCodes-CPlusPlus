//Problem 16: Write a program that takes a value inside a <a> tag using Regular Expression.
//#include <regex> in stdafx.h
//#include <iostream> in stdafx.h
//#include <string> in stdafx.h
#include "stdafx.h" 

using namespace std;

int main()
{
	string word = "<a>Hello World</a>";
	regex rx0("<(\"[^\"]*\"|\'[^\']*\'|[^\'\">])*>");
	cout << regex_replace(word, rx0, "") << endl;

	cin.get();
}
