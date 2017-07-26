//Problem 5: Write a program that accepts that accepts temperature in
//Celcius and convert it to Farenheit.
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
