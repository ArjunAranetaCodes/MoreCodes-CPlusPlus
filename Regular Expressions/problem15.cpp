//Problem 15: Write a program that takes a value inside a <div> tag using Regular Expression.
//#include <regex> in stdafx.h
//#include <iostream> in stdafx.h
//#include <string> in stdafx.h
#include "stdafx.h" 

using namespace std;

int main()
{
	string word = "<div>Hello World</div>";
	regex rx0("<(\"[^\"]*\"|\'[^\']*\'|[^\'\">])*>");
	cout << regex_replace(word, rx0, "") << endl;

	cin.get();
}
