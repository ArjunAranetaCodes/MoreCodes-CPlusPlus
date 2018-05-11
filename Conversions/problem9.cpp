//Problem 9: Write a program that converys a hexadecimal number to decimal number.
#include <algorithm>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
 int dec = 0;
 string hex = "100";
 reverse(hex.begin(), hex.end());
 
 for(int x = 0; x < hex.length(); x++){
 	if(hex[x] == '1'){
 		dec = dec + pow(16, x);
 	}
 }

 cout << dec; 

 return 0;
}
