//Problem 4:Write a program that accepts radius of a circle and
//find its diameter, circumference, and area.
#include <iostream>
using namespace std;
int main(){
 int radius = 0;
 float PI = 3.14, dia = 0.0, area = 0.0, cir = 0.0;

 cout << "Enter radius value: ";
 cin >> radius;

 dia = radius * radius;
 area = PI * dia;
 cir = 2 * PI * radius;

 cout << "Diameter of circle is " << dia << endl;
 cout << "Area of circle is " << area << endl;
 cout << "Circumference of circle is " << cir << endl;

 return 0;
}
