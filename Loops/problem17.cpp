//Problem 17: Write a program that outputs the
//fibonacci sequence of a number.
#include<iostream>

using namespace std;

int main(){
 int num1 = 1;
 int num2 = 1;

 cout << num1 << "\n";
 while (num2 < 100){
  cout << num2 << "\n";
  num2 = num2 + num1;
  num1 = num2 - num1;
 }
 return 0;
}
