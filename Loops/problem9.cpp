//Problem 9: Write a program to display the multiplication
//table of a given integer.
#include<iostream>

using namespace std;

int main(){
 int num = 2;
 int prod = 0;
 for(int x = 0; x <= 10; ++x){
  cout << num << " x " << x << " = " << num * x << "\n";
 }

 return 0;
}
