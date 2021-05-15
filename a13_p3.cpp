/*
CH-230-A
a13_p3.cpp
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main ()
{
    int n, i;
    cout << "Number of files you want to open: ";
    cin >> n;

    string *name = new string [n];

    cout << "Opening " << n << " files...\n"; 
    for(i = 0; i < n; i++)
    {
        cout << "File" << i+1 << ": ";
        cin >> name[i];
    }

    //opening files

    //output file
    ofstream outfile;
    outfile.open("concatn.txt", ios::binary);
    if(!outfile)
    {
        cerr << "Error opening output file\n";
        exit (1);
    }

    //input files
    for(i = 0; i < n; i++)
    {
        ifstream infile;
        infile.open(name[i], ios::binary);
        if(! infile.good())
        {     
            cerr << "Error opening input file\n";
            exit (1);
        }

        //getting exact size of file
        infile.seekg(0, ios::end);
        int length = infile.tellg();
        infile.seekg(0, ios::beg);

        char BUFF[length];
        infile.read(BUFF, length);
        outfile.write(BUFF, length);
        //copied texts seperated by newline char
        outfile << endl;

        infile.close();
    }

    outfile.close();

    //deallocating dynamic memory
    delete[] name;

    return 0;
}