#pragma once
#include <iostream>
using namespace std;
class Fraction
{
protected:
	int tu;
	int mau;

public:
	Fraction(int);
	friend ostream& operator<<(ostream& out, Fraction ps);
	float operator+(Fraction);
	float operator-(Fraction);
	float operator*(Fraction);
};