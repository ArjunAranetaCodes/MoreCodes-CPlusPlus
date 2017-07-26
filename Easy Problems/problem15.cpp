//Problem 15: Write a program that finds if a string is
//within a string.
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
 string word1 = "programming";
 string word2 = "program";
 if (word1.find(word2) != string::npos) {
  cout << word2 << " found!" << endl;
 }else{
  cout << word2 << " not found" << endl;
 }

 return 0;
}
