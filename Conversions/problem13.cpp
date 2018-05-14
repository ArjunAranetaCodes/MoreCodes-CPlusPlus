//Problem 13: Write a program that converts celsius to farenheit.
#include <iostream>
using namespace std;
int main(){
 float celsius = 0.0, farenheit = 0.0;

 cout << "Enter the temperature (Celsius): ";
 cin >> celsius;
 farenheit =(9.0/5.0) * celsius + 32;
 cout << celsius << "C equals to " << farenheit << "F";

 return 0;
}
