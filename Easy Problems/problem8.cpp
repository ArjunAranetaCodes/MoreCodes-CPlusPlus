//Problem 8: Write a program that outputs all numbers divisible by
//5 from 1 to 30.
#include <iostream>
using namespace std;
int main(){
 int sum = 0;

 for(int x = 1; x <= 30; x++){
  if(x % 5 == 0){
   sum = sum + x;
  }
 }

 cout << "The sum of numbers divisible by 5 from 1 to 30 is "
 << sum << endl;

 return 0;
}
