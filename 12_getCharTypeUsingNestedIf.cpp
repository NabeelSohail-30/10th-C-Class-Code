#include <iostream>
#include <string>
using namespace std;
int main(){
	char ch;
	cout << "enter a char: ";
	cin >> ch;
	
	if(ch >= 48 && ch <= 57){
		cout << "digit";
	}
	else{
		if(ch >= 65 && ch <= 90){
			cout << "upper case";
		}
		else{
			if(ch >= 97 && ch <= 122){
				cout << "lower case";
			}
			else{
				cout << "special char";
			}
		}
	}
	
	return 0;	
}
