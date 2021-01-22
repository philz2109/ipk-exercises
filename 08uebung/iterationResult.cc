#include "iterationResult.hh"

IterationResult::IterationResult(Point point, int a) {
_point = point;
a_Iter= a;
}

Point IterationResult::getPoint() {
	return(_point);
}

int IterationResult::geta_iter() {
	return(a_Iter);
}

void IterationResult::setPoint(Point i){
	_point = i;
}

void IterationResult::setA_iter(int i) {
	a_Iter = i;
}
