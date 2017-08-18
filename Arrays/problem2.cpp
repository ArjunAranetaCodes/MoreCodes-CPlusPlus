
#include <iostream>
using namespace std;

int main(){
 int arrNumbers[3] = {1,2,3};
 int size = sizeof(arrNumbers)/sizeof(int);
 int x = 0;
 int indexOfNum = 0;

 for(x = 0; x < size; x++){
  if(arrNumbers[x] == 2){
   indexOfNum = x;
  }
 }


 cout << indexOfNum;

 return 0;
}

