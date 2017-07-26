//Problem 3: Write a program that accepts length and
//width of rectangle to find area.
#include <iostream>
using namespace std;
int main(){
 int length = 0;
 int width = 0;
 int area = 0;

 cout << "Enter length value: ";
 cin >> length;
 cout << "Enter width value: ";
 cin >> width;
 area = length * width;

 cout << "Area of rectangle " << area << endl;

 return 0;
}
