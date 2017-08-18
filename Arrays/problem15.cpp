
#include<iostream>
using namespace std;

int main(){
 int array1[] = {1,2,3};
 int array2[3];
 int size = sizeof(array1)/sizeof(int);
 int x = 0;

 for(x = 0; x < size; x++){
  array2[x] = array1[x];
 }

 for(x = 0; x < size; x++){
  cout << array2[x] << endl;
 }

 return 0;
}

