#include <iostream>

#include "iterationResult.hh"

void mandelbrot (Canvas& canvas, double threshold,int maxIt, std::string filename){
	
}

IterationResult iterate(Point z,Point c, double threshold, int maxIt){
	int k;
	//Point r;
	for(k = 0; k < maxIt && sqrt(z.x()*z.x()+z.y()*z.y())<=threshold; k++){ //Betrag eines vektors ausrechene!!!!
		//Point z(z.x()*z.x()-z.y()*z.y()+c.x(), 2*z.x()*z.y()+c.y());
		z = Point(z.x()+1, z.y()+1);
	}
	if(k == 0){
		Point z(0, 0);
	}
	IterationResult i(z, k);
	return(i);
}

int main(int argc, char *argv[]){
	Point p(4,2);
	Point z(1,1);
	Point u(0,0);
	IterationResult i = iterate(z, u,10, 10);
	std::cout << i.getPoint().x() << "  " << i.getPoint().y() << std::endl;
}