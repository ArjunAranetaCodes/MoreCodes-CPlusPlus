/*
Problem 14: Write a program to print the number pattern using loop.
1
22
333
4444
55555
*/

#include<iostream>

using namespace std;

int main(){
	int row = 5;
	for(int y = 0; y <= row; y++){
		for(int x = 0; x < y; x++){
			cout << y;
		}
		cout << endl;
	}
	
	return 0;
}
