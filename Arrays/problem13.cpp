
#include<iostream>
using namespace std;

int main(){
 int arrNumbers[] = {1,2,3,4};
 int size = sizeof(arrNumbers)/sizeof(int);
 int x = 0;

 for(x = 0; x < size; x++){
  if(arrNumbers[x] % 2 == 0){
   cout << arrNumbers[x] << endl;
  }
 }

 return 0;
}

