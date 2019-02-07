#include <iostream>
using namespace std;

int num1 = 0;
int num2 = 0;
	
void printoptions(){
	cout << " Enter your first number:";
	cin >> num1;
	cout << " Enter your second number:";
	cin >> num2;
	}
	
	int main(){

	char op = 'A';
	char again = 'Y';
	
	cout << " Our C++ Calculator\n";
	
	do{
		cout << "(A)dd,(S)ubtract, Multiply, Divide";
		cin >> op;	

		switch(op) {
			case 'a':
			case 'A':
				cout << endl << num1 << "+" 
					<< num2<< "=" << (num1 + num2) << endl;
					break;
			case 's':
			case 'S':
				cout << endl << num1 << "-"
					<< num2 << "=" << (num1-num2) << endl;
				break;
			case 'm':
			case 'M':
				cout << endl << num1 << "x"
					<<num2 << "=" << (num1*num2) << endl;
				break;
			case 'd':
			case 'D':
				cout << endl << num1 << "/"
				<< num2 << "=" << (num1/num2) << endl;
		
			cout << " Enter first number:";
			cin >> num1;
			cout << " Enter you r second numnber:";
			cin >> num2;
			
			default:
				cout << op << " Is not a valid option..." << endl;
	}
			
	cout << " Do you want to use Calculator again (Y/N)?";
				cin >> again;
	}while('n' !=again);
	
	
	return 0;
	
}