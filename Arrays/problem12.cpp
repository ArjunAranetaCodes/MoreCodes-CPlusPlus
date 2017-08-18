
#include<iostream>
using namespace std;

int main(){
 int array1[3] = {1,2,3};
 int array2[3] = {1,2,3};
 int x = 0;
 int size = sizeof(array1)/sizeof(int);
 int notEqual = 0;

 for(x = 0; x < size; x++){
  if(array1[x] != array2[x]){
   notEqual++;
  }
 }

 if(notEqual > 0){
  cout << "Not Equal";
 }else{
  cout << "Equal Arrays";
 }

 return 0;
}

