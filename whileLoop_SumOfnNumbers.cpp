#include <iostream>

using namespace std;

int main(){
	int num, sum=0, count;
	
	cout << "Enter Numbers to Calculate Sum" << endl << "Enter 0 to exit" << endl;
	cout << "Enter a Number: ";
	cin >> num;
	count = 1;
		
	while(num != 0){
		sum += num;
		cout << "Enter a Number: ";
		cin >> num;
		count++;
	}
	
	cout << endl << "-------End of Loop-----" << endl;
	cout << endl << "Sum: " << sum;
	cout << endl << "Total Numbers: " << --count;
	
	return 0;
}
