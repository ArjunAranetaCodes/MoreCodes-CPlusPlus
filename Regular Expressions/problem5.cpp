//Problem 5: Write a program that matches time in 24 hour format.
//#include <regex> in stdafx.h
//#include <iostream> in stdafx.h
#include "stdafx.h" 

using namespace std;

int main()
{	
	regex rx0("^(0?[1-9]|1[012])(:[0-5]\\d) [APap][mM]$");
	cout << boolalpha << regex_match("13:00", rx0) << endl;
	cout << boolalpha << regex_match("8:01 am", rx0) << endl;
	
	cin.get();
}
