#include <iostream>

using namespace std;

int main(){
	int num;
	
	cout << "Enter a Number from 1-100: ";
	cin >> num;
	
	cout << endl << "-------Start of Loop-----" << endl;
	
	//start of loop
	while(num < 1 || num > 100){
		cout << endl << "You entered invalid number" << endl;
		cout << "Enter a Number from 1-100: ";
		cin >> num;
	} //end of loop
	
	cout << endl << "-------End of Loop-----" << endl;
	cout << "num: " << num;
	
	return 0;
}
