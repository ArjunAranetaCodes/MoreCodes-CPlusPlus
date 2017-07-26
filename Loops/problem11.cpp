//Problem 11: Write a program that checks if a number
//is palindrome.
#include<iostream>

using namespace std;

int main(){
 int num = 3333;
 int sum = 0;
 int temp = 0;
 int rmdr = 0;

 temp = num;

 while (temp != 0){
  rmdr = temp % 10;
  sum = sum * 10 + rmdr;
  temp = temp / 10;
 }

 if(num == sum){
  cout << "Palindrome number";
 }else{
  cout << "Not an Palindrome number";
 }
 return 0;
}
