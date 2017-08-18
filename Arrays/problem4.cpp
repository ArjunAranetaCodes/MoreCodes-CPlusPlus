
#include <iostream>
using namespace std;

int main(){
 int arrNumbers[3] = {1,2,3};
 int size = sizeof(arrNumbers)/sizeof(int);

 cout << arrNumbers[0] << endl;
 cout << arrNumbers[size - 1] << endl;

 return 0;
}

