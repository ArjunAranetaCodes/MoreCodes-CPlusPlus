//Problem 16: Write a program that outputs the factorial
//of a number.
#include<iostream>

using namespace std;

int main(){
 int num = 5;
 int fact = 1;
 int x = 0;

 for (x = num; x >= 1; x--){
  fact = fact * x;
 }

 cout << "Factorial of 5 is " << fact;
 return 0;
}
