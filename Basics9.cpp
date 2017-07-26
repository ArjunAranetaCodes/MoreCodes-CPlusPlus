//Basics of Functions
#include<iostream>

using namespace std;

//function that has no return value and no passing argument/parameter
void function1(){
 cout<<"Hello there!"<<endl;
}

//function that has no return value but has passing argument/parameter
void function2(int num){
 cout<<"That number is "<<num<<endl;
}

//function that has return value but has no passing argument/parameter
int function3(){
 int sum = 1 + 1;
 return sum;
}

//function that has return value and has passing argument/parameter
string function4(string firstName, string lastName){
 string fullName = firstName + " " + lastName;
 return fullName;
}

int main(){
 function1();
 function2(5);
 cout<<"It's true! 1+1 = "<<function3()<<endl;
 cout<<"Hi "<<function4("More","Codes")<<endl;
 return 0;
}
