 //Problem 13: Write a program that reverses a string.
#include<iostream>
#include<string>

using namespace std;

int main(){
 string word = "MoreCodes";
 string newWord;
 int x = 0;
 int n = word.length() - 1;

 for (x = n; x >= 0; x--){
  newWord = newWord + word[x];
 }

 cout << newWord;

 return 0;
}
