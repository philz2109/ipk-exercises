#ifndef IT_RESULT
#define IT_RESULT

#include "canvas.hh"
#include <cmath>

class IterationResult{
	private:
		const Point point;
		const int a_Iter;
	
	public:
		IterationResult(Point point, int a);
		Point getPoint();
		int getA_Iter();
};

#endif