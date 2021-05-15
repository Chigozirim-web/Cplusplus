/*
CH-230-A
a13_p6.cpp
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <iostream>
#include <vector>

using namespace std;

int main ()
{
    //int array of size 20
    int numbers[] {-11, 73, 55, 3, 0, 49,-23, -9, 30, 2, -65
                   -44 ,1003, 23, -30, -345, -3, 20, 10, 1};   

    //adding 8 to each element               
    for (int i = 0; i < 20; i++)
        numbers[i] += 8;

    //vector of ints to store values above
    vector <int> num(numbers, numbers+20);
   
    try
    {
        cout << num.at(21) << endl;
    }
    catch(const out_of_range &e)
    {
        cerr << "Out of Range: " << e.what() << '\n';
        return 1;
    }

    cout << "Executed without any errors.\n";
    return 0;
}