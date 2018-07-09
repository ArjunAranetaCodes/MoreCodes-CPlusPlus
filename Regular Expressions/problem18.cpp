//Problem 18: Write a program that extracts string inside quotation marks using Regular Expression.
//#include <regex> in stdafx.h
//#include <iostream> in stdafx.h
//#include <string> in stdafx.h
#include "stdafx.h" 

using namespace std;

int main()
{
	string target2("Hello 'World'");
	regex rx0("\'([^\"]*)\'");
	std::cmatch mr;
	regex_search("Hello 'World'", mr, rx0);
	cout << mr[0] << endl;

	cin.get();
}
