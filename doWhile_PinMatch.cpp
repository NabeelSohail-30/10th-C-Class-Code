#include <iostream>

using namespace std;

int main(){
	int num, count=0;
	cout << "Pin Number Validation Program" << endl;
	
	do{
		cout << "Enter a Number: ";
		cin >> num;
		count++;
		
		if(num == 2034){
			cout << "Your Pin is Correct";
			break;
		}
			
		if(count == 3){
			cout << "Pin Entered Several Times" << endl;
			cout << "Try Again Later";
			break;
		}
	}while(num != 2034);
	
	return 0;
}
