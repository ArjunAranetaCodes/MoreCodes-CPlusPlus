//Problem 2: Write a program that accepts two numbers
//and perform all arithmetic operations.
#include <iostream>
#include <cstdlib>

using namespace std;

main(){
 int n, max, num;
 max = 9;

 for (int x = 0 ; x < 5 ; x++){
  num = (rand() % max) + 1;
  cout << num << endl;
 }

 return 0;
}
