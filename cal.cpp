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
	out << fi.val;
	return out;
}