#ifndef COMPLEX_H
#define COMPLEX_H

// simple class for complex numbers

class Complex {

private:  // internal implementation is hidden
	float real;  // real part
	float imag;  // imaginary part

public:
	Complex();              // empty constructor
	Complex(float, float); // constructor taking values for real 
						   //and imaginary parts
	Complex(const Complex&);  //copy constructor
	~Complex();			       //destructor

	//setters
	void setReal(float r);
	void setImag(float i);

	//getters
	float getReal() const;
	float getImag() const;
	void conjugate();

	//void print() const;           // prints it to the screen

	/*****************
	arithmetic operations
	Complex add(Complex);
	Complex subtract(Complex);
	Complex multiply(Complex);
	******************/

	//overloading arithmetic operators
	Complex operator+ (Complex&);
	friend Complex operator- (Complex&, Complex&);
	Complex operator* (Complex&);
	Complex& operator= (Complex&);
	//for printing output and extracting input
	friend std::ostream& operator<< (std::ostream& out, const Complex &C);
    friend std::istream& operator>> (std::istream& in, Complex &C);
};

#endif