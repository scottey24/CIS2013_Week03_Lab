#include <iostream>
using namespace std;



int main(){

	char op = 'A';
	char again = 'Y';
	int num1 = 0;
	int num2 = 0;
	cout<< " Our C++ Calculator\n";
	
	while('N' != again){
		cout << "(A)dd,(S)ubtract,(M)ultiply";
		cin >> op;		
		
			cout << " Enter first number:";
			cin >> num1;
			cout << " Enter you r second numnber:";
			cin >> num2;
			
			if('A' == op)||('a' == op) {	
				cout << endl << num1 << "+" 
					<< num2<< "=" << (num1 + num2); << endl;
			
			
	}else if (('S' == op) || ('s' == op)) {
		cout << endl << num1 << "-"
			<< num2 << "=" << (num1-num2) << end;
			
			
	}else if (('M' ==op) || ('m' ==op)) {
		cout << endl << num1 << "x"
			<< num2 << "=" << (num1*num2) << end;
	}else{
		cout <<op<< " Is not a valid option..." <<endl
	}
			
	cout << " Do you want to use Calculator again (Y/N)?";
				cin >> again;
	}
	
	return 0;
	
	{