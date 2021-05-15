/*
CH-230-A
a11_p1.cpp
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#ifndef  BOX_H
#define BOX_H

class Box
{
    private:
        double height;
        double width;
        double depth;

    public:
        Box(); //default constructor
        Box(double, double, double);
        Box(const Box&); //copy constructor
        ~Box();  //destructor

        //setters
        void setHeight(double h);
        void setWidth(double w);
        void setDepth(double d);

        //getters
        double getHeight();
        double getWidth();
        double getDepth();

        //printing
        void print();

        //volume calculation
        double volume();
};

#endif