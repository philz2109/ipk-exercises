#include "point.hh"
#include <iostream>
#include <cmath>

int main() {
	using einD = Point<double, 1>;
	using dreiD = Point<double, 3>;
	double number = 2;
	std::array<double, 1> a = {number};
	einD p1(a);
	std::array<double, 3> b = {number, number, number};
	dreiD p3(b);
	p1[0] = 2;
	p3[2] = 2;
	if(p1.norm()==2 && p3.norm()==2*sqrt(3)){
		return(0);
	}else{
		return(1);
	}
}