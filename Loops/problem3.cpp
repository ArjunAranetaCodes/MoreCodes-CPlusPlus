//Problem 3: Write a program that accepts length and
//width of rectangle to find area.
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
 string word = "MoreCodes";
 int wordCount = 0;

 for(int x = 0; x < word.length(); x++){
  wordCount += 1;
 }

 cout << "Total: " << wordCount;

 return 0;
}
