#ifndef POLYGON_HH
#define POLYGON_HH

#include <vector>
#include <cmath>
#include "point.hh"

class Polygon{
	std::vector<Point> list;
	
	public:
		Polygon(const std::vector<Point>& corners);
		
		Polygon(const std::vector<double>& x, const std::vector<double>& y);
		
		std::size_t corners() const;
		
		void ausgabePunkteListe();
		
		const Point& corner(std::size_t i) const;
		
		double volume() const;
};

#endif