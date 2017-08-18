
#include <iostream>
using namespace std;

int main(){
 int arrNumbers[3] = {1,2,3};
 int size = sizeof(arrNumbers)/sizeof(int);
 int x = 0;
 int sum = 0;

 for(x = 0; x < size; x++){
  sum = sum + arrNumbers[x];
 }

 cout << "Sum is " << sum;

 return 0;
}

