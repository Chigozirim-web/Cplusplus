/*
CH-230-A
a9_p3.cpp
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <iostream>

using namespace std;

float absolute(float x)
{
    if(x < 0)   return x *-1;
    else    return x;
}

int main ()
{
    float num;
    cin >> num;

    cout << "The absolute value of " << num 
    << " is " << absolute(num) << endl;
    return 0;
}