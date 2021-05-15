#include <iostream>
#include "Complex.h"
#include <fstream>		//for file streams
#include <string>

using namespace std;

int main() 
{
	Complex c1, c2;

	//opening input and output files
	ifstream input("in1.txt");
	if(!input.good())
	{
		cerr << "Error opeing input file\n";
		exit (1);
	}
	
	//reading 1st complex number
	float a, b;
	input >> a >> b;
	c1.setReal(a);
	c1.setImag(b);
	
	//open 2nd file
	ifstream input2("in2.txt");
	if(!input2.good())
	{
		cerr << "Error opeing input file\n";
		exit (1);
	}
	
	//reading complex number
	input2 >> a >> b;
	c2.setReal(a);
	c2.setImag(b);
	
	//opening output file
	ofstream outf("output.txt");
	if(!outf)
	{
		cerr << "Error opening output file\n";
		exit (1);
	}
	
	cout << "\nComplex number 1: ";
	cout << c1;

	cout << "Complex number 2: ";
	cout << c2;

	//Calculations
	cout << "\nSum: ";
	outf << "\nSum: ";
	cout << c1+c2;
	outf << c1+c2;

	cout << "\nDifference: ";
	outf << "\nDifference: ";
	cout << c1-c2;
	outf << c1-c2;

	cout << "\nProduct: ";
	outf << "\nProduct: ";
	cout << c1*c2;
	outf << c1*c2;

	//close files
	input2.close();
	input.close();
	outf.close();
	return 0;
}