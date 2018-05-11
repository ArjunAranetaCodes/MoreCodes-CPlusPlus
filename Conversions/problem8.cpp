//Problem 8: Write a program that converts a decimal number to hexadecimal number.
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int main(){
 int dec = 256;      
 string hex = "";
 
 while (dec > 0){   
  int newnum;
  string strnum;          
  ostringstream convert;   
 
  convert << dec % 16;     
  strnum = convert.str(); 
  hex = strnum + hex;
  dec = dec / 16;
 } 

 cout << hex;

 return 0;
}
