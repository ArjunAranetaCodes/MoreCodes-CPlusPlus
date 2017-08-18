
#include<iostream>
using namespace std;

int main(){
 int array1[4] = {1,3,2,4};
 int i, j, temp;
 int size = sizeof(array1)/sizeof(int);
 int x = 0;

 for (i = 0; i < size; ++i){
  for (j = i + 1; j < size; ++j){
   if (array1[i] > array1[j]){
    temp =  array1[i];
    array1[i] = array1[j];
    array1[j] = temp;
   }
  }
 }

 for(x = 0; x < size; x++){
  cout << array1[x] << endl;
 }

 return 0;
}

