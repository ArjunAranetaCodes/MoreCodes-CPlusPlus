/*
Problem 7: Write a program to print the number pattern of ones and zeros using loop.
10101
01010
10101
01010
10101
*/

#include<iostream>

using namespace std;

int main(){
	int count = 0;
	for(int y = 0; y < 5; y++){
		for(int x = 0; x < 5; x++){
			count += 1;
			if(count % 2 == 1){
				cout << "1";	
			}else{
				cout << "0";
			}			
		}
		cout << endl;
	}
	
	return 0;
}
