#ifndef IT_RESULT
#define IT_RESULT

#include "canvas.hh"
#include <cmath>

class IterationResult {
	private:
		Point _point;
		int a_Iter;

	public:
		IterationResult(Point point,int a);
		Point getPoint();
		int geta_iter();
		void setPoint(Point i);
		void setA_iter(int i);
};
#endif