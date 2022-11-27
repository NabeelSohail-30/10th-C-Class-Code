//header files
#include <iostream>
#include <stdlib.h>
using namespace std;

//main function
int main(){
	//variable declaration
	float num1, num2, result;
	int op;
	
	
	//program heading	
	cout << "-------------- Basic Calculator ----------------" << endl;
	cout << "================================================" << endl << endl;
	
	//Welcome Note
	cout << " Welcome to My Calculator App" << endl << endl;
	
MAIN:
	//display menu
	cout << " Main Menu" << endl << endl;
	cout << " 1. Addition" << endl;
	cout << " 2. Subtraction" << endl;
	cout << " 3. Multiplication" << endl;
	cout << " 4. Division" << endl;
	cout << " 5. Power" << endl;
	cout << " 6. Factorial" << endl;
	cout << " 7. Exit" << endl;
	
	//get user prefrence	
	do{
		cout << endl << endl << " Enter Your Prefered Choice (1-7): ";
		cin >> op;
	}while(op < 1 || op > 7);
	
	//redirect to user selected operation
	switch(op){
		case 1:{		//Addition
			cout << endl << endl;
			
			//Take Number Input
			cout << "Enter Number 01: ";
			cin >> num1;
			
			cout << "Enter Number 02: ";
			cin >> num2;
			
			//Calculate and print Result
			result = num1 + num2;
			cout << endl << endl << "Sum: " << result;
			
			//get user choice to proceed
			do{
				cout << endl << endl << "Press 1 to Exit, 2 to goto Main Menu: ";
				cin >> op;
			}while(op != 1 && op != 2);
			
			//validate user choice
			if(op == 1){
				goto END;
			} else if (op == 2){
				goto MAIN;
			}
			
			break;
		}
		
		case 2:{		//Subtraction
			cout << endl << endl;
			
			//Take Number Input
			cout << "Enter Number 01: ";
			cin >> num1;
		
			cout << "Enter Number 02: ";
			cin >> num2;
			
			//Calculate and print Result
			result = num2 - num1;
			cout << endl << endl << "Difference: " << result;
			
			//get user choice to proceed
			do{
				cout << endl << endl << "Press 1 to Exit, 2 to goto Main Menu: ";
				cin >> op;
			}while(op != 1 && op != 2);
			
			//validate user choice
			if(op == 1){
				goto END;
			} else if (op == 2){
				goto MAIN;
			}
			
			break;
		}
			
		case 3:{	//multiplication
			cout << endl << endl;
			
			//Take Number Input
			cout << "Enter Number 01: ";
			cin >> num1;
		
			cout << "Enter Number 02: ";
			cin >> num2;
			
			//Calculate and print Result
			result = num1 * num2;
			cout << endl << endl << "Product: " << result;
			
			//get user choice to proceed
			do{
				cout << endl << endl << "Press 1 to Exit, 2 to goto Main Menu: ";
				cin >> op;
			}while(op != 1 && op != 2);
			
			//validate user choice
			if(op == 1){
				goto END;
			} else if (op == 2){
				goto MAIN;
			}
			
			break;
		}
				
		case 4:{	//division
			cout << endl << endl;
			
			//Take Number Input
			cout << "Enter Number 01: ";
			cin >> num1;
		
			cout << "Enter Number 02: ";
			cin >> num2;
			
			//Calculate and print Result
			result = num1 / num2;
			cout << endl << endl << "Quotent: " << result << endl;
			
			//get user choice to proceed
			do{
				cout << endl << endl << "Press 1 to Exit, 2 to goto Main Menu: ";
				cin >> op;
			}while(op != 1 && op != 2);
			
			//validate user choice
			if(op == 1){
				goto END;
			} else if (op == 2){
				goto MAIN;
			}
			
			break;
		}
			
		case 5:{	//power calculator
			cout << endl << endl;
			
			//Take Number Input
			cout << "Enter Base Number: ";
			cin >> num1;
		
			cout << "Enter Power: ";
			cin >> num2;
			
			//Calculate and print Result
			result = 1;
			for(int i=1; i<=num2; i++){
				result *= num1;
			}
			
			cout << endl << endl << "Result: " << result;
			
			//get user choice to proceed
			do{
				cout << endl << endl << "Press 1 to Exit, 2 to goto Main Menu: ";
				cin >> op;
			}while(op != 1 && op != 2);
			
			//validate user choice
			if(op == 1){
				goto END;
			} else if (op == 2){
				goto MAIN;
			}
			
			break;
		}
		
		case 6:{	//Factorial
			cout << endl << endl;
			
			//Take Number Input
			cout << "Enter Number: ";
			cin >> num1;
			
			//Calculate and print Result
			result = 1;
			for(int i = 1; i <= num1; ++i) {
            	result *= i;
        	}
			cout << endl << endl << "Factorial: " << result;
			
			//get user choice to proceed
			do{
				cout << endl << endl << "Press 1 to Exit, 2 to goto Main Menu: ";
				cin >> op;
			}while(op != 1 && op != 2);
			
			//validate user choice
			if(op == 1){
				goto END;
			} else if (op == 2){
				goto MAIN;
			}
			
			break;
		}
	}	
	
	END:
		exit(1);
	
	return 0;
}
