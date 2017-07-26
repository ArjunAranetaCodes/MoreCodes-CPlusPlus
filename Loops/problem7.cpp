//Problem 7: Write a program that outputs the sum of
//numbers from 1 to n.
#include<iostream>

using namespace std;

int main(){
 int n = 10;
 int x = 0;
 int sum = 0;
 for(x = 1; x <= n; x++){
  sum = sum + x;
 }

 cout << "Sum is " << sum;
 return 0;
}
