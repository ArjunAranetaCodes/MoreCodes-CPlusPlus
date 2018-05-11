//Problem 6: Write a program that converts a binary number to decimal number.
#include <algorithm>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
 int dec = 0;
 string binary = "110";
 reverse(binary.begin(), binary.end());
 
 for(int x = 0; x < binary.length(); x++){
 	if(binary[x] == '1'){
 		dec = dec + pow(2, x);
 	}
 }

 cout << dec; 

 return 0;
}
