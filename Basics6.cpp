//Loop Structures
#include<iostream>

using namespace std;

int main(){
 int x = 0;
 cout << "For Loop" << endl;
 for(x = 0; x <= 10; x++){
  cout << x;
 }

 cout << endl << endl << "While Loop" << endl;
 x = 0;
 while ( x <= 10 ) {
  cout << x;
  x++;
 }

 cout << endl << endl << "Do Loop" << endl;
 x = 0;
 do {
  cout << x;
  x++;
 } while ( x <= 10 );

 return 0;
}
