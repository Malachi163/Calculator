#include "calculate.h"

// default constructor
Calculator::Calculator(double entVal) {
	val = entVal;
	

	return;
}

//Addition
Calculator Calculator::operator+(const Calculator & right)
{
	Calculator result;

	result.val = val + right.val;

	return result;
}

//subtraction
Calculator Calculator::operator-(const Calculator & right)
{
	Calculator result;

	result.val = val - right.val;

	return result;
}

//multiplication
Calculator Calculator::operator*(const Calculator & right)
{
	Calculator result;

	result.val = val * right.val;

	return result;
}

//division
Calculator Calculator::operator/(const Calculator & right)
{
	Calculator result;

	result.val = val / right.val;

	return result;
}



ostream & operator << (ostream & out, const Calculator & fi)
{
	out << fi.val ;
	return out;
}

int main()
{
	
	Calculator ob1, ob2,r,r2;
	char choice, response = 'y';
	string clr;

	while (response == 'y')
	{
		//add the input promt and add the rest of the imput code
		cout << "Choice number One: ";
		cin >> ob1;

		cout << "Choice number two: ";
		cin >> ob2;

		// Good: 8+8
		// 8 + 8
		// 8 +8
		// -8 + 8
		// 8 + -8
		// bad: 8E2
		// bad: 8 +-8
		// bad: +8
		// good: 8+ 8

		cout << "Type c to erase previous entry: " << endl;
		cout << "What mathematical operation you want to use ?" << endl;
		cout << "Type: '+' - addition, '-' - subtraction, '*' - multiplication, '/' - division,  " << endl;
		
		cin >> choice;

		switch (choice)
		{
		case '+':
		
			r = ob1 + ob2;
			cout << r << endl;
			break;
		case '-':
			r2 = ob2 - ob1;
			cout << r2 << endl;
			break;
		case '*':
			r2 = ob2 * ob1;
			cout << r2 << endl;
			break;
		case '/':
			r2 = ob2 / ob1;
			cout << r2 << endl;
			break;

		
		
		}

		cout << "Would you like to continue(y/n): ";
		
		cin >> response;

		
		//Also make sure the response if coded in as well
		if(choice == 'c') { system("cls"); } //fix this later on
		


	}
	
	

	
	

	
	

	
	




	system("pause");
	return 0;
}
