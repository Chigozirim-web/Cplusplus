// simple class for fractions

#ifndef FRACTION_H_
#define FRACTION_H_

#include <iostream>


class Fraction {

private:						// internal implementation is hidden
    int num;	// numerator
	int den;	// denominator

	int gcd(int a, int b);		// calculates the gcd of a and b
	int lcm(int a, int b);

public:
	Fraction();					// empty constructor
	Fraction(int, int = 1); 	// constructor taking values for fractions and
								// integers. Denominator by default is 1
	void print();				// prints it to the screen
    
    //overloading operators
    //ostream and istream are under namespace std
    friend std::ostream& operator<< (std::ostream& out, const Fraction &F);
    friend std::istream& operator>> (std::istream& in, Fraction &F);
    Fraction operator* (Fraction &f);
    Fraction operator/ (Fraction &f);
    Fraction operator+ (Fraction &f);
    Fraction operator- (Fraction &f); //fraction - f
    Fraction& operator= (Fraction &f); //assignment operator
    bool operator< (Fraction f); //compare if fraction is less than f
    bool operator> (Fraction f); //compare if fraction is greater than f
};


#endif /* FRACTION_H_ */