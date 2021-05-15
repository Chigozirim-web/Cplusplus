#include <iostream>
#include "Box.h"

using namespace std;

int main ()
{
    double he, wi, de;
    int n, i;
    cout << "Enter number of boxes to be created: ";
    cin >> n;

    //creating array of 2n boxes
    Box *b = new Box[2*n];

    //for first n boxes
    for(i = 0; i < n; i++)
    {
        cout << "Enter parameter values (height, width and depth)"
        << " for box "<< i+1 << ": " << endl ;
        cin >> he >> wi >> de;

        b[i].setHeight(he);
        b[i].setWidth(wi);
        b[i].setDepth(de);
    } 

    //for next n boxes
    for(i = n; i < 2*n ; i++)
        b[i] = Box(b[i-n]);  //copy constructor

    //Calculating and printing volume
    for(i = 0; i < 2*n; i++)
    {
        cout << "The volume of box " << i+1
        << " is " << b[i].volume() << endl;
    }  
    //free dynamic memory
    delete [] b;

    return 0;
}