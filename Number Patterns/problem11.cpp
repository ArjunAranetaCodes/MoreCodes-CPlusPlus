/*
Problem 11: Write a program to print the pattern of asterisks using loop.
*
**
***
****
*****
*/

#include<iostream>

using namespace std;

int main(){
	int row = 5;
	for(int y = 0; y <= row; y++){
		for(int x = 0; x < y; x++){
			cout << "*";
		}
		cout << endl;
	}
	
	return 0;
}
