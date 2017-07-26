//Problem 17: Write a program that outputs the index
//of the first occurrence of the letter in a string.
#include<iostream>
#include<string>

using namespace std;

int main(){
 string program = "program";
 string letter = "a";

 if (program.find(letter) != string::npos) {
  cout << "Contains a" << endl;
 }else{
  cout << "Does not contain a" << endl;
 }

 return 0;
}
