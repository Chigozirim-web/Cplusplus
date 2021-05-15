/********************************************
 * DIAGRAM SHOWING RELATIONSHIP OF CLASSES
* *******************************************
*************** Area ************************
*************** /|\ *************************
*********______/ | \________*****************
********|--------|----------| ***************
****** Circle  Square     Rectangle *********
******* |-----(newly added)---***************
****** Ring		          *******************
*/

#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"
#include <cstdlib>  //for random and srandom

const int num_obj = 7; //increase to 7 because one Square
					//object was created
int main()
{
	// (1) Creating an array of pointer objects of class Area
	Area *list[num_obj];

	// (2) intializing an int variable with value 0
	//to be used as index in the while loop later
	int index = 0;

	// (3) initializing an object of type double with value 0.0
	//to be used to calculate total area of all objects created
	double sum_area = 0.0;						

	cout << "Creating Ring: ";
	/*(4) Creating 2 instances each of class Rectangle, Ring and Circle 
	Area constructor is called first, then the constructor of the
	respective class is called after. Effect of the latter does not show
	since no message is being printed in the child class's constructor */
	Ring blue_ring("BLUE", 5, 2);				
	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);
	//instance of class Square
	cout << "Creating Square: ";
	Square orange_square("ORANGE", 12);

	/*(5) Making the array of Area pointers point 
	to the objects created just above ie. assigning
	objects of child classes to parent class (Area) */
	list[0] = &blue_ring;						
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
	list[6] = &orange_square;

	/*(7) while loop traverses the Area array,
	printing color of each Area object,
	calculating each area, and summing the 
	areas up as well */
	while (index < num_obj) {					
		(list[index])->getColor();	
		/*(8) Because of polymorphism(the parent class -Area-
		double method was made virtual), the double method 
		for the respective child class is called instead. Also
		index++ means the original value of index is used,
		and then increased by 1 to be used for next iteration of loop
		until index == num_obj-1 */		
		double area = list[index++]->calcArea();
		sum_area += area;
	}

	// (9) The total area of all 6 objects is printed,
	//after being calculated in the loop above
	cout << "\nThe total area is "
			<< sum_area << " units " << endl;

	//calculating and printing perimeters of objects
	double sum_per = 0.0;
	index = 0;

	while (index < num_obj) {					
		(list[index])->getColor();
		double per = list[index]->calcPerimeter();
		sum_per += per;
		index++;
	}

	cout << "\nThe total perimeter is "
		<< sum_per << " units\n";

	return 0;
}
