
#include<iostream>
using namespace std;

int main(){
 int array1[4] = {1,2,3};
 int size = sizeof(array1)/sizeof(int);
 int x = 0;
 array1[size-1] = 5;

 for(x = 0; x < size; x++){
  cout << array1[x] << endl;
 }

 return 0;
}

