#include <iostream>
using namespace std;

int main(){

	char op = 'A';
	char again = 'Y';
	cout<< " Our C++ Calculator\n";
	
	while('N' != again){
		cout << "(A)dd";
		cin >> op;		
		
			cout << " Enter first number to add; ";
			cin >> num1;
			cout << " Enter you r second numnber: ";
			cin >> num2;
			
			cout << endl << num1 << "+" 
			<< num2<< "=" << (num1 + num2); << endl;
			
			
		cout << " Do you want to use Calculator again (Y/N)?";
		cin >> again;
	}
	
	return 0;
	
	}