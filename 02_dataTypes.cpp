#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	//start of program
	int a;		//variable declaration
	
	a = 10; 	//variable initialization
	
	cout << a << endl;	//printing value of a
	
	int b = 50;		//variable declaration & initialization
	
	cout << "Value of b: " << b << endl;	//printing value of b with msg
	
	int c=9, h=6;	//multiple variables in single statement
	
	//printing multiple variables in single statement
	cout << "value of c: " << c << ", value of h: " << h ;	
	
	cout << endl << endl << endl;
	
	//character datatype
	char ch = 'h';
	cout << "value of ch: " << ch;
	
	cout << endl << endl << endl;

	//float and double datatype
	float myFloat = 3.142;
	double myDbl = 45.36998;
	
	cout << "value of myFloat: " << myFloat << endl;
	cout << "value of myDbl: " << myDbl << endl;
	
	cout << endl << endl << endl;
	
	bool myBoolean = 0;
	cout << "value of myBoolean: " << myBoolean << endl;
	
	string str = "Code";
	cout << endl << str;
	
	return 0;
}
