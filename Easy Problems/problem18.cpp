//Problem 18: Write a program that outputs the frequency of a
//letter in a string.
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
 string word = "program";
 char letter = 'a';
 int letterCount = 0;

 for(int x = 0; x < word.length(); x++){
  if(word[x] == letter){
   letterCount += 1;
  }
 }

 cout << "Total: " << letterCount;

 return 0;
}
