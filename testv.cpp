#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"
#include <string>
#include <cstdlib>  //for random and srandom

const int dimension = 25;

int main ()
{
    Area *list[dimension];
    int j;
    char colour[][10] = {"RED" ,"BLACK" ,"VIOLET", "BLUE"};
    
    srand((unsigned int) time(NULL));
    
    for(j = 0; j < dimension; j++)
    {
        //random number generator
        int randNum = random() % 100;
        int i = random() % 4; //for array color, chooses 
                                //between 0 and 4(not inclusive)

        if(randNum % 3 == 0)
            list[j] = new Circle(colour[i], (double)randNum);
        else if(randNum % 4 == 0)
            list[j] = new Ring(colour[i], (double)randNum, (double)randNum/4);
        else if(randNum % 5 == 0)
            list[j] = new Rectangle(colour[i], (double)randNum, (double)randNum/5);
        else
            list[j] = new Square(colour[i], (double)randNum);
    }

    //Computing and Printing Areas and Perimeters
    j = 0;
    while(j < dimension)
    {
        (list[j])->getColor();
        cout << "area is " << list[j]->calcArea()
            << " units";
        j++;
    }
    cout << endl;

    j = 0;
    while(j < dimension)
    {
        (list[j])->getColor();
        cout << "perimeter is " << list[j]->calcPerimeter()
            << " units";
        j++;
    }
    cout << endl;

    for (j = 0; j < dimension; j++ ) 
		delete list[j];

    return 0;
}