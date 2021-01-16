#include "iterationResult.hh"

IterationResult::IterationResult(Point point, int a): point(point), a_Iter(a){}

Point& IterationResult::getPoint(){
	return(point);
}

int& IterationResult::getA_Iter(){
	return(a_Iter);
}
	
IterationResult IterationResult::iterate(Point z,old, i Point c, double threshnt maxIt){
	for(int k = 0; k < maxIt || sqrt(z.x()*z.x()+z.y()+z.y()); k++){ //Betrag eines vektors ausrechene!!!!
		Point z(z.x()*z.x()-z.y()*z.y()+c.x(), 2*z.x()*z.y()+c.y());
	}
	return(*this);
}