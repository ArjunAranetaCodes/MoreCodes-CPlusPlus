//Problem 2: Write a program that converts a string to integer.
#include <iostream>
#include <sstream>
using namespace std;
 
int main()
{
    string strnum = "10";
    stringstream convert(strnum);
    int num = 0;
    convert >> num;
 
    cout << num;
 
    return 0;
}
