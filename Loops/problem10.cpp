//Problem 10: Write a program to check whether a given
//number is an armstrong number or not.
#include<iostream>

using namespace std;

int main(){
 int num = 371;
 int sum = 0;
 int temp = 0;
 int rmdr = 0;

 temp = num;

 while (temp != 0){
  rmdr = temp % 10;
  sum = sum + (rmdr * rmdr * rmdr);
  temp = temp / 10;
 }

 if(num == sum){
  cout << "Armstrong number";
 }else{
  cout << "Not an armstrong number";
 }
 return 0;
}
