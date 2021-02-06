#include "basis.hh"

Point::Point(double x, double y) : x(x), y(y){}

Point Point::operator+(const Point& b) const {
	return Point(x + b.getX(), y + b.getY());
}

Point Point::operator-(const Point& b) const {
	return Point(x - b.getX(), y - b.getY());
}

Point Point::operator+=(const Point& b) const { //Eventuell nicht als return, sondern zuweiseung, weil gleich
	return *this + b;
}

Point Point::operator-=(const Point& b) const {
	return *this - b;
}

friend Point Point::operator*(const Point& b, const double d) const {
	return Point(b.x() * d, b.y() * d);
}

friend Point Point::operator*(const double d, const Point& b) const {
	return Point(b.x() * d, b.y() * d);
}

Point::operator*=(const Point& b) {
	//this->x *= b.getX();
}

Point Point::getPoint(){ return *this; }

double Point::getX(){ return x; }

double Point::getY(){ return y; }

Body::Body(Point pos, Point speed, double mass, int color[]) : pos(pos), speed(speed), mass(mass), color(color) {}

Point Body::getPos(){ return pos; }
Point Body::getSpeed(){ return speed; }
double Body::getMass(){ return mass; }
int* Body::getColor(){ return color; }