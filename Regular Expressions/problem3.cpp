//Problem 3: Write a program that checks if string contains sample format date of (yyyy-mm-dd)
//#include <regex> in stdafx.h
//#include <iostream> in stdafx.h
#include "stdafx.h" 

using namespace std;

int main()
{	
	regex rx0("([0-9]{4})-([0-9]{2})-([0-9]{2})");
	cout << boolalpha << regex_match("2018-01-02", rx0) << endl;
	cout << boolalpha << regex_match("01-01-02", rx0) << endl;
	
	cin.get();
}
