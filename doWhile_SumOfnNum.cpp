#include <iostream>

using namespace std;

int main(){
	int num, sum=0, count;
	
	cout << "Enter Numbers to Calculate Sum" << endl << "Enter 0 to exit" << endl;
	
	do{
		cout << "Enter a Number: ";
		cin >> num;
		count++;
		sum+=num;
	}while(num != 0);
	
	cout << endl << "-------End of Loop-----" << endl;
	cout << endl << "Sum: " << sum;
	cout << endl << "Total Numbers: " << --count;
	
	return 0;
}
