#include <iostream>
#include "Square.h"


Square::Square(const char *n, double s) : Area(n)
{
    side = s;
}

Square::~Square()
{}

double Square::calcArea() const
{
    std::cout << "calcArea of Square...";
    return side * side;
}

//new added method
double Square::calcPerimeter() const
{
    std::cout << "calcPerimeter of Square...";
    return 4*side;
}