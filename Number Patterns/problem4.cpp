/*
Problem 4: Write a program to print the number pattern of ones and zeros using loop.
10001
10001
10001
10001
10001
*/

#include<iostream>

using namespace std;

int main(){
	for(int y = 0; y < 5; y++){
		for(int x = 0; x < 5; x++){
			if((x == 0) || (x == 4)){
				cout << "1";	
			}else{
				cout << "0";
			}			
		}
		cout << endl;
	}
	
	return 0;
}
