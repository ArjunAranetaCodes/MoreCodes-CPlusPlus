//Problem 20: Write a program that checks if a string is a
//palindrome.
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main(){
 string word = "anna";
 string copy = word;
 reverse(copy.begin(), copy.end());

 if(word == copy){
  cout << "Palindrome";
 }else{
  cout << "Not Palindrome";
 }

 return 0;
}
