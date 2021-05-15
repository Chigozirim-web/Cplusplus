/*
CH-230-A
a11_p6.cpp
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <iostream>
#include "Vector.h"

using namespace std;

int main ()
{
    //creating array for vectors
    double *d1, *d2;
    int i;

    d1 = new double[4];
    d2 = new double[4];

    for(i = 0; i < 4; i++)
    {
        cout << "input for array 1\n";
        cin >> d1[i];
    }
    cout << endl;

    for(i = 0; i < 4; i++)
    {
        cout << "input for array 2\n";
        cin >> d2[i];
    }
    cout << endl;

    //Creating 4 Vector objects
    Vector V1, V2(4, d1), V4(4, d2);
    Vector V3 = V2;

    //printing norm
    cout << "\nNorm of vector2 is: " << V2.norm()
    << ". \n\n";

    //scalar products
    double d =  V2.scalarProd(V4);
    cout << "\nScalar product of vector 2 and vector 4: "
    << d << ". \n\n";

    //sum
    (V2.add(V4)).printVector();
    cout << endl;

    //difference
    (V2.difference(V4)).printVector();
    cout << endl;

    //freeing double arrays
    delete[] d1;
    delete[] d2;

    return 0;
}