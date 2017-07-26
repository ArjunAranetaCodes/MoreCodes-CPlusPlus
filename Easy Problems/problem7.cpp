//Problem 7: Write a program that finds the sum of all
//numbers from 1 to 20.
#include <iostream>
using namespace std;
int main(){
 int sum = 0;

 for(int x = 1; x <= 20; x++){
  sum = sum + x;
 }

 cout << "The sum of 1 to 20 is "
  << sum << endl;

 return 0;
}
