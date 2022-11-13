#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int num1, num2;
	
	cout << "basic Arthmetic Operators" << endl << endl;
	//+, -, *, /, %
	//example of + is here rest is your assignment	
	
	cout << "Enter Number 01: ";
	cin >> num1;
	
	cout << "Enter Number 02: ";
	cin >> num2;
	
	//method 01 direct displaying the result
	cout << endl << "sum = " << num1+num2;
	
	//method 02 storing the result into variable then displaying it
	int sum = num1+num2;
	cout << endl << "sum = " << sum;
	
	return 0;
}
