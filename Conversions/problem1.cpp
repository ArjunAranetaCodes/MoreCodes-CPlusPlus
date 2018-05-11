//Problem 1: Write a program that converts a number to string.
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int main(){
	int num = 10;      
	string strnum;          
	ostringstream convert;  
	convert << num;     
	strnum = convert.str();
	
	cout << strnum;

	return 0;
}

