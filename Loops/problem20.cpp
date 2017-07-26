//Problem 20: (RecursioN) Write a program that outputs the
//sum of numbers from 1 to n.
#include<<iostream>

using namespace std;

int GetSum(int num, int sum){
 if (num == 0){
  return sum;
 }else{
  return GetSum((num - 1), (sum + num));
 }
}

int main(){
 cout << "Sum is " << GetSum(10, 0);
 return 0;
}
