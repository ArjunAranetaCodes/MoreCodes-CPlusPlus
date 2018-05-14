//Problem 14: Write a program that converts lower case to upper case characters.
#include <iostream>
#include <string>

using namespace std;
int main(){
 string str = "abc";
 for(int x = 0; x < str.length(); x++){
  str[x] = toupper(str[x]);	
 }
 
 cout << str;

 return 0;
}
