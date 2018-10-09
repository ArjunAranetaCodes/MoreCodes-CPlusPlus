/*
Problem 10: Write a program to print the number pattern using loop.
12345
23456
34567
45678
56789
*/

#include<iostream>

using namespace std;

int main(){
	int row = 5;
	int col = 5;
	int min = 1;
	for(int y = 0; y < row; y++){
		int num = min + y;
		for(int x = 0; x < col; x++){
			cout << num;
			num = num + 1;
		}
		cout << endl;
	}
	
	return 0;
}
