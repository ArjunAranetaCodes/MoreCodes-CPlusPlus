//Problem 18: (Recursion) Write a program that outputs the
//fibonacci sequence of a number.
#include<iostream>

using namespace std;

int Fibonacci(int num){
 if ((num == 1) || (num == 0)){
  return num;
 }else{
  return Fibonacci(num - 1) + Fibonacci(num - 2);
 }
}

int main(){
 int x = 0;
 for (x = 0; x <= 11; x++){
  cout << Fibonacci(x) << endl;
 }
 return 0;
}
