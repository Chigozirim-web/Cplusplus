/*
CH-230-A
a9_p4.cpp
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <iostream>

using namespace std;

//Overload functions definitions
int mycount(int x, int y)   { return y-x; }

int mycount(char c, string s)
{
    int count = 0, i = 0;
    while(s[i] != '\0')
    {
        if(c == s[i])
            count++;
        
        i++;
    }
    return count;
}

//Main function
int main()
{
    int num1 = 7, num2 = 3;
    char ch = 'i'; string str = "this is a string";

    cout << num1 << "-" << num2 << " = " 
    << mycount(num1, num2) << endl;

    cout << ch << " occurs " << mycount(ch, str) 
    << " times in " << "\"" << str << "\"." <<endl;

    return 0;

}