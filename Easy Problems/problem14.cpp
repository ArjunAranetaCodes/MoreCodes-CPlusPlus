//Problem 14: Write a program that replaces all letter
//a' in a string with letter 'e'
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
 string word = "program";
 replace(word.begin(), word.end(), 'a', 'e');
 cout << word;

 return 0;
}
