//Problem 14: Write a program that accepts 5 numbers
//and outputs the average.
#include<iostream>

using namespace std;

int main(){
 int num = 0;
 int sum = 0;
 int ave = 0;
 int x = 0;

 for (x = 0; x <5; x++){
  cout << "Enter a number: ";
  cin >> num;
  sum = sum + num;
 }

 ave = sum / 5;

 cout << "Average is " << ave;

 return 0;
}
