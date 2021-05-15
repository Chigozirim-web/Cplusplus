/*
CH-230-A
a13_p5.cpp
Chigozirim Margaret Arukwe
c.arukwe@jacobs-university.de
*/

#include<iostream>
using namespace std;
 
class A
{
  int x;
public:
  A(int i) { x = i; cout << "Calling A's constructor\n";}
  void print() { cout << x << endl; }
};
 
class B: virtual public A
{
public:
  B():A(10) { cout << "Calling B's constructor\n"; }
};
 
class C:  virtual public A 
{
public:
//change to A(10) to a different number
// to see effect when calling class D
  C():A(10) { cout << "Calling C's constructotr\n"; }
};
 
class D: public B, public C {
  public:
  D(): A(B()) {cout << "Calling D's constructor.\n"; } 
  //inserting A(C()) produces different result 
};
 
int main()
{
    D d;
    d.print(); //will print 10, but if C()
    //was inserted into the constructor for D,
    //then it would print the value for C(which is
    //also 10 here)
    return 0;
}

/**********************
 * CORRECTION
 * ********************
No constructor was created for class D
Solve: Adding a constructor for class D.
In addition, the particular value of x has to
be explicitly stated for the creation of class D.
Therefore, to have class B has to be specified
in D's constructor if we want the B's value of x,
 else class C has to be specified. 
**********************/