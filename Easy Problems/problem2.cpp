//Problem 2: Write a program that accepts two numbers
//and perform all arithmetic operations.
#include <iostream>
using namespace std;
int main(){
 int num1 = 0;
 int num2 = 0;
 int sum = 0;
 int diff = 0;
 int prod = 0;
 int quot = 0;

 cout << "Enter num1 value: ";
 cin >> num1;
 cout << "Enter num2 value: ";
 cin >> num2;
 sum = num1 + num2;
 diff = num1 - num2;
 prod = num1 * num2;
 quot = num1 / num2;

 cout << "Sum is " << sum << endl;
 cout << "Difference is " << diff << endl;
 cout << "Product is " << prod << endl;
 cout << "Quotient is " << quot << endl;

 return 0;
}
