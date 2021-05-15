#include "Shapes.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{

    Circle c("first circle", 3, 4, 7);
    Rectangle R;

    Circle c1("Second circle", 1, 2, 8.55);
    Circle c2 = Circle(c1);  //testing copy constructor

    Square S("Square", 0, 0, 7.5);

    cout << "\nThe perimeter of Circle c is " << c.perimeter()
    << " meters.\n";

    cout << "Area of circle is " << c.area()
    << " squaremeters." << endl;

    cout << "\nThe perimeter of Circle c2 is " << c2.perimeter()
    << " meters.\n";

    cout << "Area of circle c2 is " << c2.area()
    << " squaremeters." << endl;

    cout << "\nThe perimeter of Rectangle R is " << R.perimeter()
    << " meter.\n";

    cout << "Area of Rectangle is " << R.area()
    << " squaremeters.\n";

    cout << "\nThe perimeter of Square S is " << S.perimeter()
    << " meters." << endl;

    cout << "Area of Square is " << S.area()
    << "squaremeters." << endl;

    return 0;
}