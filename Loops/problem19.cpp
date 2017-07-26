//Problem 19: (Recursion) Write a program that outputs
//all even numbers below 20.
#include<iostream>

using namespace std;

int PrintEven(int num){
 if (num == 0){
  return num;
 }else{
  if (num % 2 == 0){
   cout << num << endl;
  }
 return PrintEven(num - 1);
 }
}

int main(){
 PrintEven(10);
 return 0;
}
