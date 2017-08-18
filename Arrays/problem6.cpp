
#include <iostream>
using namespace std;

int main(){
 int arrNumbers[3] = {1,2,3};
 int size = sizeof(arrNumbers)/sizeof(int);
 int x = 0;
 int count = 0;
 for(x = 0; x < size; x++){
  if(arrNumbers[x] == 2){
   count++;
  }
 }

 if(count > 0){
  cout << "Contains 2";
 }else{
  cout << "Does not contain 2";
 }

 return 0;
}

