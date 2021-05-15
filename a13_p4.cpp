/*
CH-230-A
a13_p4.cpp
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include<iostream>
using namespace std;

//adding the printing for each constructor call
//to observe how object D is being created
class A
{
  int x;
public:
  void setX(int i) { cout << "calling A's constructor\n"; x = i;}
  void print() { cout << x << endl; }
};
 
class B:  public virtual A
{
public:
  B()  {cout << "calling B's constructor\n"; setX(10); }
};
 
class C:  public virtual A  
{
public:
  C()  {cout << "calling C's constructor\n"; setX(20); }
};
 
class D: public B, public C //note order!
{
    public:
    D() {cout << "calling D's constructor\n";}
};
 
int main()
{
    D d;
    d.print(); //returns 20
    /*because Constructor C is the last constructor
    called during the creation of object D, so
    it inherits the value of x from C.
    If the order were changed, d.print() would return 10
    instead */
    return 0;
}

/******************************
 * EXPLANATION
 * ***************************
 * 
error: request for member ‘print’ is ambiguous
   37 |     d.print();
This error shows because d is a base class of both B and C;
therefore, it automatically inherits the data x (in class A)
from both B and C. Calling the print function d.print() confuses
the compiler on which x to choose ie. x from class B or from class C.

To fix this:
1) The particular class x is being printed from should be explicitly stated.
This can be done by static_cast <*B>... or static_cast <*C>....
2) Declare the parent classes of D (that is B and C), as virtual base classes
to avoid multiple inheritance of x from their parent class (that is A)
=> class B : virtual public A and
=> class C : virtual public A

Because, there is only one print method here (in A), it would make more sense,
or be more feasible to use the 2nd fix, and that was used in this code.

*************************************/