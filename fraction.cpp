#include <iostream>
#include "fraction.h"

Fraction::Fraction()
{
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d)
{
    int tmp_gcd = gcd(n, d);

    num = n / tmp_gcd;
    den = d / tmp_gcd;

}

//defining gcd function
int Fraction::gcd(int a, int b)
{
	int tmp_gcd = 1;

	//find max between a and b
    int max, min;
    if(a>b)
    {   
        max = a;
        min = b;
    }
    else if(a<b)
    {
        max = b;
        min = a;
    }

    //while divisor is not 0
    while (min != 0)
    {
        //gcf algorithm
        int rem = max % min;
        while(rem != 0)
        {
            tmp_gcd = rem;
            rem = min % tmp_gcd;
            min = tmp_gcd;
        }

    return min;
    }

    //random value returned in the case of division by 0
    return -1111111111;
}

int Fraction::lcm(int a, int b)
{
	return (a * b / gcd(a, b));

}

/*
void Fraction::print()
{
	std::cout << num << "/" << den << std::endl;
}
*/

//instead of print function
std::ostream& operator<< (std::ostream& out, const Fraction &F)
{
    if (F.den == 0)
    {
        out << "Undefined.\n";
        return out;
    }

    out << F.num << "/" << F.den;
    return out;    
}

//for input
std::istream& operator>> (std::istream& in, Fraction &F)
{
    std::cout << "Input the numerator: ";
    in >> F.num;
    std::cout << "Input the denominator: ";
    in >> F.den;

    while(F.den == 0)
    {
        std::cout << "Invalid. Fraction is undefined\n"
        << "Input different denominator: ";
        in >> F.den;
    }   
        
    return in; 
}

Fraction Fraction::operator* (Fraction &f)
{
    Fraction res(num * f.num, den * f.den);
    return res;
}

Fraction Fraction::operator/ (Fraction &f)
{
    Fraction res(num * f.den, den * f.num);
    return res;
}


Fraction Fraction::operator+ (Fraction &f)
{
    int _lcm = lcm(den, f.den);

    int a = (num * _lcm/den) + (f.num * _lcm/f.den);
    Fraction res(a, _lcm);
    return res;
       
}

Fraction Fraction::operator- (Fraction &f)
{
    int _lcm = lcm(den, f.den);
    int a = (num * _lcm/den) - (f.num * _lcm/f.den);

    Fraction res(a,_lcm);
    return res;
}

Fraction& Fraction::operator= (Fraction &f)
{
    this->num = f.num;
    this->den = f.den;
    return *this;
}

bool Fraction::operator< (Fraction f)
{
    //storing num and den values in new variables, 
    //to prevent direct manipulation of data
    int n = num, d = den;
    int _lcm = lcm(d, f.den);
    
    n = n * _lcm/ d;
    f.num = f.num * _lcm /f.den;

    return (n < f.num);
}

//Fraction f not reference so that change does not reflect outside
bool Fraction::operator> (Fraction f)
{
    int n = num, d = den;
    int _lcm = lcm(d, f.den);

    n = n * _lcm / d;
    f.num = f.num * _lcm /f.den;

    return (n > f.num);
}
