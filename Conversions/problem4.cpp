//Problem 4: Write a program that converts a string to array/list.
#include <iostream>
using namespace std;
 
int main()
{
    string numbers = "1,2,3";  
	int * arrNumbers = new int[numbers.size()];  
	int arrCount = 0; 
	for (int i = 0; i < numbers.length(); ++i) {  
	    if(numbers[i] != ',') {  
	        arrNumbers[arrCount] = numbers[i];  
	        arrCount++;
	    }  
	}  
	
	int size = sizeof(arrNumbers);
	
	for (int i = 0; i < size; i++) {  
		cout << (char)arrNumbers[i];
	}  	
 
    return 0;
}
