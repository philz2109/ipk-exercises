#include "point.hh"


Point::Point(double x, double y): x(x), y(y){}

Point::Point(){}

double Point::getX() const{
	return x;
}

double Point::getY() const{
	return y;
}

