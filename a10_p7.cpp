/*
CH-230-A
a10_p7.cpp
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include <iostream>
#include <cstring>  // standard C string.h header file

using namespace std;


class NaiveString {
private:
	char *str;
public:
	NaiveString(const char*);
	NaiveString(const NaiveString&);
	void update(char, char);
	void print();
    //destructor
    ~NaiveString();
};

NaiveString::NaiveString(const char* t) {
    cout << "First Constructor is being called.\n";
	str = new char[strlen(t) + 1];
	strcpy(str, t);
}

/* 
	Copy constructor: creates a new instance of 
	naive string starting from an existing one 
*/


NaiveString::NaiveString(const NaiveString& src) {
    cout << "Copy Constructor is being called.\n";
	str = new char[strlen(src.str) + 1];
	strcpy(str, src.str);
	// please note that we can access src.str even if it is private
	// as we are inside the NaiveString class
}

/* replaces occurrences of oldchar by newchar */
void NaiveString::update(char oldchar, char newchar) {
	unsigned int i;
	for (i = 0; i < strlen(str); i++) 
		if (str[i] == oldchar)
			str[i] = newchar;
}

void NaiveString::print() {
	cout << str << endl;
}

//Destructor
NaiveString::~NaiveString() { 
    cout << "Destructor is being called\n";
    delete[] str;
}

void funcByVal(NaiveString s) {
	cout << "funcbyval() being called" << endl;
	s.update('B', 'C');
	s.print();
}

//funcByref()
void funcByref(NaiveString &s) {
	//no copying here, and effect is seen 
	//outside the function
    cout << "funcByref() is being called\n";
    s.update('l', 'n');
    s.print();
}

//MAIN
int main(int argc, char** argv)
{
	NaiveString a("aBcBdB");
    NaiveString buffer("HEllo!");
    NaiveString b(buffer);

    cout << "\nPrinting before function call: \n\n";
	a.print();
    b.print();

    cout << "\nPrinting after function call:\n\n";

	cout << "About to call funcbyval()" << endl;
	funcByVal(a);
	a.print();
	cout << endl;
    funcByVal(b);
    b.print();

    cout << "\nAbout to call funcByref()" << endl;
    funcByref(a);
    a.print();
	cout << endl;
    funcByref(b);
    b.print();

    return 0;
}