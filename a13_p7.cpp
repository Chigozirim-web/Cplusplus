/*
CH-230-A
a13_p7.cpp
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <iostream>
#include <exception>
#include <string>

using namespace std;


//Class ownException
class OwnException : public exception
{
    private:
        string str;
    public:
    OwnException(string s) : str(s) { }
    const char* what() const throw() //method prototype gotten 
    {return "Own Exception"; }      //from exception library
};


//function
void excep(int n)
{
    if(n == 1)
        throw 'a';
    else if(n == 2)
        throw 12;
    else if(n == 3)
        throw true;
    else
        throw OwnException("Default Case exception.\n");

    return;   
}

//MAIN
int main ()
{
    //testing exceptions
    for(int i = 1; i < 5; i++)
    {
        cout << "For i = " << i << ": \n";
        try
        {
            excep(i);
        }
        
        catch(int e)
        {
            cerr << "Caught in main: " << e << '\n';
        }

        catch(char e)
        {
            cerr << "Caught in main: " << e << '\n';
        }

        catch(bool e)
        {
            cerr << "Caught in main: " << e << '\n';
        }
        
        catch(OwnException& e)
        {
            cerr << "Caught in main: " << e.what() << '\n';
        }
    }
    return 0;
}