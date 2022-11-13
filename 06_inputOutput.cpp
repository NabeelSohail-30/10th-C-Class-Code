#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <cstdio>

using namespace std;

int main(){
	
	cout << endl << "Using puts and cout" << endl;
	puts("print using puts");
	
	cout << endl << endl << "Using Getch" << endl;
	char ch1;
	ch1 = getch();
	cout << "output: " << ch1;
	
	cout << endl << endl << "Using Getche" << endl;
	char ch2;
	ch2 = getche();
	cout << endl << "output: " << ch2;
	
	cout << endl << endl << "Using Getchar" << endl;
	char ch3;
	ch3 = getchar();
	cout << "output: " << ch3;
	
	return 0;
}
