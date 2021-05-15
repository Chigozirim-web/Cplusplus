#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
    Fraction F1, F2;

    cout << "Fraction 1: \n";
    cin >> F1;
    cout << "Fraction 2: \n";
    cin >> F2;

    cout << endl << F1 << endl;;
    cout << F2 << endl;

    if(F1 > F2)
        cout << F1 << " is greater than " << F2 << endl;
    else 
        cout << F2 << " is greater than " << F1 << endl;

    cout << "\nComputing Sum: \n";
    Fraction Fsum = F1+F2;
    cout << Fsum << endl;

    cout << "\nComputing Difference: \n";
    Fraction Fdiff= F1-F2;
    cout << Fdiff << endl;

    //to test
    Fraction* fp = &Fdiff;
    cout << *fp << endl;
    
    return 0;
}