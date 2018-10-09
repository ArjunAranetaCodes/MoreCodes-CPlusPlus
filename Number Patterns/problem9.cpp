/*
Problem 9: Write a program to print the number pattern of ones and zeros using loop.
11011
11011
00000
11011
11011
*/

#include<iostream>

using namespace std;

int main(){
	int row = 5;
	int col = 5;
	for(int y = 0; y < row; y++){
		for(int x = 0; x < col; x++){
      if(col / 2 == x || row / 2 == y){
          cout << "0";
      }else if((col % 2 == 0 && (col / 2) == x) || (row % 2 == 0 && (row / 2) == y)){
          cout << "0";
      }else{
          cout << "1";
      }		
		}
		cout << endl;
	}
	
	return 0;
}
