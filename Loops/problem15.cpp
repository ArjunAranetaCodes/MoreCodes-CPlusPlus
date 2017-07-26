//Problem 15: Write a program that will ask the user to
//input n positive numbers. The program will terminate
//if one of those number is not positive.
#include<iostream>

using namespace std;

int main(){
 int num = 0;
 while(num > -1){
  cout << "Enter a number: ";
  cin >> num;
 }

 cout << "Terminated";
 return 0;
}
