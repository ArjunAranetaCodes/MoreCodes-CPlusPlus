//Problem 2: Write a program that matches email address.
//#include <regex> in stdafx.h
//#include <iostream> in stdafx.h
#include "stdafx.h" 

using namespace std;

int main()
{	
	regex rx0("^[_A-Za-z0-9-\\+]+(\\.[_A-Za-z0-9-]+)*@[A-Za-z0-9-]+(\\.[A-Za-z0-9]+)*(\\.[A-Za-z]{2,})$");
	cout << boolalpha << regex_match("mark@yahoo.com", rx0) << endl;
	cout << boolalpha << regex_match("mark-yahoo.com", rx0) << endl;
	
	cin.get();
}
