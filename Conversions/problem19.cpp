//Problem 19: Write a program that converts numbers to words.
#include <iostream>
#include <string>

using namespace std;

string NumberToWords(int number, string word) {
	if((number >= 1) && (number <= 19)){
	string map[] = {"One", "Two", "Three", "Four", "Five", "Six", "Seven",
	"Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen",
	"Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
	word = map[(number - 1)];
	return word;
	}else if((number >= 20) && (number <= 99)){
	string map[] = {"Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy",
	"Eighty", "Ninety"};
	word = map[(number - 1) - 3];
	return word + " " + NumberToWords(number % 10, "");
	}else if((number >= 100) && (number <= 999)){
	return NumberToWords((number) / 100, "") +
	" Hundred " + NumberToWords(number % 100, "");
	}else if((number >= 1000) && (number <= 9999)){
	return NumberToWords((number) / 1000, "") +
	" Thousand " + NumberToWords(number % 1000, "");
	}else if((number >= 1000000) && (number <= 999999999)){
	return NumberToWords((number) / 1000000, "") +
	" Million " + NumberToWords(number % 1000000, "");
	}

return word;
}

int main(){
 cout << NumberToWords(10, "");

 return 0;
}
