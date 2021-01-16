#include "iterationResult.hh"

IterationResult::IterationResult(Point point, int a): point(point), a_Iter(a){}

Point IterationResult::getPoint(){
	return(point);
}

int IterationResult::getA_Iter(){
	return(a_Iter);
}