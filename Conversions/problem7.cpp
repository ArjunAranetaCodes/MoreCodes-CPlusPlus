//Problem 7: Write a program that converts a decimal number to binary number.
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int main(){
 int dec = 10;      
 string binary = "";
 
 while (dec > 0){   
  int newnum;
  string strnum;          
  ostringstream convert;   
 
  convert << dec % 2;     
  strnum = convert.str(); 
  cout << strnum << endl;
  binary = strnum + binary;
  dec = dec / 2;
 } 

 cout << binary;

 return 0;
}
