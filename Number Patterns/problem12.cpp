/*
Problem 12: Write a program to print the pattern of asterisks using loop.
*****
****
***
**
*
*/

#include<iostream>

using namespace std;

int main(){
	int row = 5;
	for(int y = row; y > 0; y--){
		for(int x = 0; x < y; x++){
			cout << "*";
		}
		cout << endl;
	}
	
	return 0;
}
