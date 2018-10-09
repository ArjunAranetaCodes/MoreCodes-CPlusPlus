/*
Problem 3: Write a program to print the number pattern of ones and zeros using loop.
01010
01010
01010
01010
01010
*/

#include<iostream>

using namespace std;

int main(){
	for(int y = 0; y < 5; y++){
		for(int x = 0; x < 5; x++){
			if(x % 2 == 0){
				cout << "0";	
			}else{
				cout << "1";
			}			
		}
		cout << endl;
	}
	
	return 0;
}
