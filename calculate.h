#pragma once
#ifndef CALCULATE_H
#define CALCULATE_H

#include <iostream>
#include<cstdlib>
#include <string>
#include <cmath>
using namespace std;

class Calculator {

public:
	Calculator() : val(0)
	{}
	Calculator(double entVal);
	Calculator operator + (const Calculator & right);
	Calculator operator - (const Calculator & right);
	Calculator operator * (const Calculator & right);
	Calculator operator / (const Calculator & right);
	//Calculator operator + (const Calculator & right);
	friend ostream & operator << (ostream & out, const Calculator & fi);
	friend istream & operator >> (istream & in, Calculator & c)
	{
		in >> c.val;

		//in.ignore();

		

		return in;
	}


private:
	//char choice;
	double val;

};










#endif
