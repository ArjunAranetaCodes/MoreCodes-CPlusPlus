//Problem 10: Write a program that converts a decimal number to octal number.
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int main(){
 int dec = 256;      
 string oct = "";
 
 while (dec > 0){   
  int newnum;
  string strnum;          
  ostringstream convert;   
 
  convert << dec % 8;     
  strnum = convert.str(); 
  oct = strnum + oct;
  dec = dec / 8;
 } 

 cout << oct;

 return 0;
}
