/*
CH-230-A
a13_p1.cpp
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main (int argc, char **argv)
{
    string name;
    cout << "Input the name of your file: ";
    cin >> name;

    //opening file
    ifstream in(name);
    if(!in)
    {
        cerr << "Error opening input file\n";
        exit (1);
    } 

    string oname;
    int pos = name.find('.');
    oname = name.substr(0,pos) + "_copy.txt";

    ofstream out(oname);
    if(!out)
    {
        cerr << "Error opening output file\n";
        exit (1);
    }

    //copying
    char ch; 
    while(in.get(ch))
        out.put(ch);

    //closing files
    in.close();
    out.close();

    return 0;
}