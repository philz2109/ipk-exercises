#include "basis.hh"

Point::Point(double x, double y) : x(x), y(y){}

Point Point::operator+(Point& b) {
	return Point(x + b.getX(), y + b.getY());
}

Point Point::operator-(Point& b) {
	return Point(x - b.getX(), y - b.getY());
}

Point& Point::operator+=(Point& b) {
	*this = *this + b;
	return *this;
}

Point& Point::operator-=(Point& b) {
	*this = *this - b;
	return *this;
}

Point Point::operator*(double d) {
	return Point(x * d, y * d);
}

Point& Point::operator*=(const double d) {
	*this = *this * d;
	return *this;
}

Point Point::getPoint(){ return *this; }

double Point::getX(){ return x; }

double Point::getY(){ return y; }

Body::Body(Point pos, Point speed, double mass, std::array<int, 3> color) : pos(pos), speed(speed), mass(mass), color(color) {}

Point Body::getPos(){ return pos; }
Point Body::getSpeed(){ return speed; }
double Body::getMass(){ return mass; }
std::array<int, 3> Body::getColor(){ return color; }