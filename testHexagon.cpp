#include "Shapes.h"
#include <iostream>

using namespace std;

int main ()
{
    Hexagon h1("h1", 0, 0, 6, 9, "blue");
    Hexagon h2("h2", 0, 0, 6, 15, "green");
    Hexagon h3(h2);
    h3.setName("copy");

    cout << "\nPerimeter of " << h1.getName() << ": "
    << h1.perimieter() << ".\n";
    cout << "Area of " << h1.getName() << ": "
    << h1.area() << ".\n";

    cout << "\nPerimeter of " << h2.getName() << ": "
    << h2.perimieter() << ".\n";
    cout << "Area of " << h2.getName() << ": "
    << h2.area() << ".\n";

    cout << "\nPerimeter of " << h3.getName() << ": "
    << h3.perimieter() << ".\n";
    cout << "Area of " << h3.getName() << ": "
    << h3.area() << ".\n\n";

    return 0;
}