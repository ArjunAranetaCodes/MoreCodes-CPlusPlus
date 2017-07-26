//Problem 10: Write a program that accepts three numbers
//and outputs their average.
#include <iostream>
using namespace std;
int main(){
 int num1 = 0;
 int num2 = 0;
 int num3 = 0;
 int ave = 0;

 cout << "Enter value of num1: ";
 cin >> num1;
 cout << "Enter value of num2: ";
 cin >> num2;
 cout << "Enter value of num3: ";
 cin >> num3;

 ave = (num1 + num2 + num3) / 3;

 cout << "Average is " << ave << endl;

 return 0;
}
