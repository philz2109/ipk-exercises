#ifndef BASE_HH
#define BASE_HH

class Point{
	private: 
		double x, y;

	public:
		Point(double x, double y);


		Point getPoint();
		double getX();
		double getY();
};

class Body{
	private: 
		Point pos, speed;
		double mass;
		int color[3];
	
	public:
		Body(Point pos, Point speed, double mass, int color[]);

		Point getPos();
		Point getSpeed();
		double getMass();
		int* getColor();

};

#endif