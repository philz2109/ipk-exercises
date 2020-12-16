#ifndef POINT_HH
#define POINT_HH

class Point{
	double x;
	double y;
	
	public:
		Point(double x, double y);
		Point();
		
		double getX() const;
		double getY() const;
	
};

#endif