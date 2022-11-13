#include <iostream>
using namespace std;

int main(){
	int a=5, x;
	cout << a << endl;
	cout << x << endl;
	
	x = a++;
	cout << x << endl;
	cout << a << endl;
	
	x = ++a;
	cout << x << endl;
	cout << a << endl;
	
	return 0;
}
