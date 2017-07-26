//Problem 1: Write a program that prints the numbers from 1 to 50.
//Output "Fizz" for multiples of 3, output "Buzz" for multiples of 5, and
//both "FizzBuzz" for multiples of both 3 and 5.
#include <iostream>
using namespace std;

int main(){
 int x = 0;
 for(x = 1; x <= 50; x++){
  if((x % 3 == 0) && (x % 5 == 0)){
   cout << "FizzBuzz\n";
  }else if(x % 3 == 0){
   cout << "Fizz\n";
  }else if(x % 5 == 0){
   cout << "Buzz\n";
  }else{
   cout << x << "\n";
 }
}

return 0;
}
