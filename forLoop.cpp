#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int i, sum=0;
    
    for(i=1;i<=10;i++){
    	cout << i << endl;
    	sum+=i;
    	cout << "sum: " << sum << endl;
	}
	
	cout << "after loop" << endl;
	cout << i << endl;
	cout << "sum = " << sum;
    
    return 0;
}
