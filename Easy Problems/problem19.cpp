//Problem 19: Write a program that counts the total number
//of vowels in a string.
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
 string word = "program";
 string vowels = "aeiou";
 int vowelCount = 0;

 for(int x = 0; x < word.length(); x++){
  char letter = word[x];
  string str(1, letter);
  if(vowels.find(letter) != string::npos){
   vowelCount += 1;
  }
 }

 cout << "Total Vowels: " << vowelCount;

 return 0;
}
