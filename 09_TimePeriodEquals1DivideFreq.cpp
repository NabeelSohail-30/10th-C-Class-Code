#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	float TimePeriod, Frequency;
	
	cout << "Program to Calculate Time Period" << endl << endl;
	//T = 1/f
	
	cout << "Enter Frequency: ";
	cin >> Frequency;
	
	TimePeriod = 1/Frequency;
	cout << endl << "Time Period = " << TimePeriod;
	
	return 0;
}
