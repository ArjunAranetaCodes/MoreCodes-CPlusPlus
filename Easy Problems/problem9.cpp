//Problem 9: Write a program that accepts a number
//and outputs 1 to the input (1 to n).
#include <iostream>
using namespace std;
int main(){
 int num = 0;
 int sum = 0;

 cout << "Enter value of num: ";
 cin >> num;

 for(int x = 1; x <= num; x++){
  sum = sum + x;
 }

 cout << "The sum of 1 to " << num
 << " is " << sum << endl;

 return 0;
}
