#include <iostream>
#include <cmath>       //needed for sqrt
#include "Complex.h"

using namespace std;  // for cout

Complex::Complex() 
{  // sets everything to 0
	real = imag = 0;
	cout << "Constructor one is being called" << endl;
}

Complex::Complex(float r, float i) {  
	real = r;                       
	imag = i;
	//cout << "Constructor two is being called" << endl;
} 

Complex::Complex(const Complex &c)
{
	real = c.real;
	imag = c.imag;
	cout << "Copy constructor is being called" << endl;
}


void Complex::setReal(float r)	{ real = r;}
void Complex::setImag(float i)	{ imag = i;}

float Complex::getReal() const 	{ return real;}
float Complex::getImag() const 	{ return imag;}

void Complex::conjugate() 	{imag *= -1;}


/****************************
 * 
Complex Complex::add(Complex c)
{
	Complex comp;
	comp.real = real + c.getReal(); 
	comp.imag = imag + c.getImag();
	return comp; 
}

Complex Complex::subtract(Complex c)
{
	Complex comp;
	comp.real = real - c.getReal();
	comp.imag = imag - c.getImag();
	return comp;
}

Complex Complex::multiply(Complex c)
{
	Complex comp;
	comp.real = (real * c.getReal()) - (imag * c.getImag());
	comp.imag = (imag * c.getReal()) + (real * c.getImag());
	return comp;
}

void Complex::print() const
{   // prints data to screen via cout
	if (imag) {
		cout << noshowpos << real << showpos << imag << "i" << endl;
	} else {
		cout << noshowpos << real << showpos << endl;
	}

}

*
******************************/

Complex::~Complex()
{
	//cout << "Destructor is being called" << endl;
}

/*****************************
 * OVERLOADED OPERATORS 
 * ***************************/

Complex Complex::operator+ (Complex &C)
{
	Complex res(real+C.real, imag+C.imag);
	return res;
}

Complex operator- (Complex &C1, Complex &C2)
{
	Complex res((C1.real - C2.real), (C1.imag - C2.imag));
	return res;
}

Complex Complex::operator* (Complex &c)
{
	float r = (real * c.getReal()) - (imag * c.getImag());
	float i = (imag * c.getReal()) + (real * c.getImag());

	Complex res(r, i);
	return res;
}

Complex& Complex::operator= (Complex &c)
{
	this->real = c.real;
	this->imag = c.imag;
	return *this;
}

ostream& operator<< (ostream& out, const Complex &C)
{
	if (C.imag) {
		out << noshowpos << C.real << showpos << C.imag << "i" << endl;
	} else {
		out << noshowpos << C.real << showpos << endl;
	}
	return out;
}

istream& operator>> (istream& in, Complex &C)
{
	cout << "Enter the real part of complex number: ";
	in >> C.real;
	cout << "Enter imaginary part: ";
	in >> C.imag;
	cout << endl;
	return in;
}