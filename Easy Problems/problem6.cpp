//Problem 6: Write a program that checks a number
//input is even or odd.
#include <iostream>
using namespace std;
int main(){
 int num = 0;

 cout << "Enter value of num: ";
 cin >> num;

 if(num % 2 == 0){
  cout << "Number is even" << endl;
 }else{
  cout << "Number is odd" << endl;
 }

 return 0;
}
