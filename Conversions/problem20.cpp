//Problem 20: Write a program that converts a number to its 
//corresponding month (e.g. 1 = January).
#include <iostream>
#include <string>

using namespace std;
int main(){
 int index = 1;
 string month[] = {"January", "February", "March", "April",
 "May", "June", "July", "August",
 "September", "October", "November", "December"};
 
 cout << month[index - 1];

 return 0;
}
