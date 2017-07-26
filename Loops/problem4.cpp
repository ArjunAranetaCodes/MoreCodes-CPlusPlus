//Problem 4: Write a program that outputs an asterisk
//pyramid.
#include<iostream>

using namespace std;

int main(){
 int x = 0;
 int y = 0;
 for(y = 0; y <= 5; y++){
  for(x = 0; x <= y; x++){
   cout << "*";
  }
  cout << "\n";
 }

 return 0;
}
