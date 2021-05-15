#ifndef _SQUARE_H
#define _SQUARE_H
#include "Area.h"

class Square : public Area {
	public:
		Square(const char *n, double s);
		~Square();
		double calcArea() const;
		//new added method
		double calcPerimeter() const;
	private:
		double side;
};

#endif
