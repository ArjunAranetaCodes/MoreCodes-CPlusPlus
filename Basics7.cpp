//If, ElseIf, and Else Structure
#include<iostream>

using namespace std;

int main(){
 int num1 = 1,
 num2 = 2;

 //if statement
 if(num1>num2){
  cout<<"First number is higher!"<<endl;
 }

 //if-else statement
 if(num1==num2){
  cout<<"They are equal!"<<endl;
 }else{
  cout<<"They are not equal!"<<endl;
 }

 //if-else if statement
 if(num1>num2){
  cout<<"First number is greater!"<<endl;
 }else if(num1<num2){
  cout<<"Second number is greater!"<<endl;
 }

 return 0;
}
