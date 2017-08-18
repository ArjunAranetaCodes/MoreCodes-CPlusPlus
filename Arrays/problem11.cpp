
#include <iostream>
using namespace std;

int main(){
 int array1[3] = {1,2,3};
 int array2[3];
 int size = sizeof(array1)/sizeof(int);
 int x = 0;
 int y = size - 1;

 for(x = 0; x < size; x++){
  array2[x] = array1[y];
  y--;
 }

 for(x = 0; x < size; x++){
  cout << array2[x];
 }

 return 0;
}

