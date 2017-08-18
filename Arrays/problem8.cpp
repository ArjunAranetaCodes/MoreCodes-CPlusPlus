
#include <iostream>
using namespace std;

int main(){
 int arrNumbers[3] = {1,2,3};
 int size = sizeof(arrNumbers)/sizeof(int);
 int x = 0;
 int min = arrNumbers[0];

 for(x = 0; x < size; x++){
  if(arrNumbers[x] < min){
   min = arrNumbers[x];
  }
 }

 cout << "Lowest number: " <<  min;

 return 0;
}

