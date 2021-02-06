#ifndef BASE_HH
#define BASE_HH

#include <iostream>
#include <array>

class Point{
	private: 
		double x, y;

	public:
		Point(double x, double y);

		Point operator+(Point& b);

		Point operator-(Point& b);

		Point& operator+=(Point& b);

		Point& operator-=(Point& b);

		Point operator*(double d);

		friend Point operator*(double d, Point& b) {
			return Point(b.getX() * d, b.getY() * d);
		}

		Point& operator*=(const double d);

		friend std::ostream& operator<<(std::ostream& os, Point& v) {
			os << "(" << v.getX() << ", " << v.getY() << ")";
			return os;
		}

		Point getPoint();
		double getX();
		double getY();
};

class Body{
	private: 
		Point pos, speed;
		const double mass;
		const std::array<int, 3> color;
		const int farb_size = 3;
	
	public:
		Body(Point pos, Point speed, double mass, std::array<int, 3> color);

		Point getPos();
		Point getSpeed();
		double getMass();
		std::array<int, 3> getColor();

};

#endif