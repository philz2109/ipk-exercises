#include "iterationResult.hh"

IterationResult::IterationResult(Point point, int a): point(point), a_Iter(a){}

Point& IterationResult::getPoint(){
	return(point);
}

int& IterationResult::getA_Iter(){
	return(a_Iter);
}
	
IterationResult IterationResult::iterate(Point z, Point c, double threshold, int maxIt){
	for(int k = 0; k < maxIt; k++){
		Point z(z.x()*z.x()-z.y()*z.y()+c.x(), 2*z.x()*z.y()+c.y());
	}
	return(*this);
}