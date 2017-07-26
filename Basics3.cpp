//Variables and Input
#include<iostream>
using namespace std;
int main(){
 string name = "";
 char sex;
 int age = 0;

 cout << "What is your name? ";
 cin >> name;
 cout << "What is your sex? (M or F) ";
 cin >> sex;
 cout << "What is your age? ";
 cin >> age;
 cout << endl;
 cout << "Name: " << name << endl;
 cout << "Sex: " << sex << endl;
 cout << "Age: " << age << endl;

 return 0;
}
