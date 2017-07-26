//Problem 12: Write a program that asks a user for their
//name and outputs a greeting with their name.
#include<iostream>
#include<string>

using namespace std;

int main(){
 string name = "";
 cout << "Enter name: ";
 cin >> name;
 cout << "Hello " << name;

 return 0;
}
