#pragma once
#include <math.h>
class Complex
{
public:
	double real_part;
	double fake_part;
	double modul;
	double argument;

	Complex operator=(Complex &complex)
	{
		return (Complex(real_part = complex.real_part, fake_part = complex.fake_part));
	}

	bool operator<(Complex &complex)
	{
		return ((real_part < complex.real_part) || (fake_part < complex.fake_part));
	}

	Complex operator++()
	{
		return (Complex(real_part ++, fake_part ++));
	}

	Complex operator--()
	{
		return (Complex(real_part--, fake_part--));
	}

	friend istream& operator>>(istream &in,Complex complex)
	{
		in >> complex.real_part;
		in >> complex.fake_part;

		return in;
	}

	friend ostream& operator<(ostream &out, Complex complex)
	{
		out << complex.real_part;
		out << complex.fake_part;

		return out;
	}

	double complex_modul()
	{
		modul = sqrt(pow(real_part, 2) + pow(fake_part, 2));

		return (modul);
	}



	double complex_argument()
	{
		argument = atan(fake_part / real_part) * (180/3.14);

		return (argument);
	}


	Complex()
	{

	}

	Complex(double real_part, double fake_part) : real_part(real_part), fake_part(fake_part)
	{

	}

	~Complex()
	{

	}
};