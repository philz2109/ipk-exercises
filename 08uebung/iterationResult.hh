#ifndef IT_RESULT
#define IT_RESULT

#include "canvas.hh"
#include <cmath>

class IterationResult{
	private:
		Point point;
		int a_Iter;
	
	public:
		IterationResult(Point point, int a);
		Point& getPoint();
		int& getA_Iter();
		IterationResult iterate(Point z, Point c, double threshold, int maxIt);
};

#endif