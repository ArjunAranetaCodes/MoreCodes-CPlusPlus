//Problem 6: Write a program that outputs all odd numbers
//below 20.
#include<iostream>

using namespace std;

int main(){
 int x = 0;
 for(x = 0; x <= 20; x++){
  if(x % 2 == 1){
   cout << x << "\n";
  }
 }

 return 0;
}
