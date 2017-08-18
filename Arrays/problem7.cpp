
#include <iostream>
using namespace std;

int main(){
 int arrNumbers[3] = {1,2,3};
 int size = sizeof(arrNumbers)/sizeof(int);
 int x = 0;
 int max = arrNumbers[0];

 for(x = 0; x < size; x++){
  if(arrNumbers[x] > max){
   max = arrNumbers[x];
  }
 }

 cout << "Largest number: " << max;

 return 0;
}

