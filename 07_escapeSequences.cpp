#include <iostream>

using namespace std;

int main(){
	cout << "using backslash a" << endl;
	cout << "\a";
	
	cout << endl << endl << "using backslash b" << endl;
	cout << "Hello\bWorld";
	
	cout << endl << endl << "using backslash t" << endl;
	cout << "Hello\tWorld";
	
	cout << endl << endl << "using backslash n" << endl;
	cout << "Hello\nWorld";
	
	cout << endl << endl << "using backslash r" << endl;
	cout << "Hello\rWorld";
	
	cout << endl << endl << "using backslash" << endl;
	cout << "Hello\\World";
	
	cout << endl << endl << "using backslash single quote" << endl;
	cout << "\'Hello World\'";
	
	cout << endl << endl << "using backslash single quote" << endl;
	cout << "\"Hello World\"";
	
	return 0;
}
