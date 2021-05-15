/*
CH-230-A
a9_p2.cpp
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <iostream>

using namespace std;

int main ()
{
    int n;
    double x;
    string s;

    //reading input
    cin >> n;
    cin >> x;
    cin >> s;

    //printing
    for(int i = 1; i <= n; i++)
        cout << s << ":" << x << endl;
    
    return 0;

}