#include <iostream>

#include "iterationResult.hh"

IterationResult iterate(Point z,Point c, double threshold, int maxIt){
	int k;
	for(k = 0; k < maxIt && sqrt(z.x()*z.x()+z.y()*z.y())<=threshold; k++){
		z = Point(z.x()*z.x()-z.y()*z.y()+c.x(), 2*z.x()*z.y()+c.y());
	}
	IterationResult i(z, k);
	return(i);
}

void mandelbrot(Canvas& canvas, double threshold,int maxIt, std::string filename){
	//IterationResult itResult();
	for(int i = 0; i<canvas.width(); i++){
		for(int j = 0; j<canvas.height(); j++){
			auto itResult = iterate(Point(0, 0), canvas.coord(i, j), threshold, maxIt).getA_Iter();
			if(itResult.getA_Iter()>=maxIt){
				canvas(i, j) = 0;
			}else{
				canvas(i, j) = std::log(itResult.getPoint())*100;
			}
		}
	}
}

int main(int argc, char *argv[]){
	Point p(4,2);
	Point z(1,1);
	Point u(0,0);
	IterationResult i = iterate(z, u,10, 10);
	std::cout << i.getPoint().x() << "  " << i.getPoint().y() << std::endl;

	Canvas can(Point(-1, 0), 8000, 6400, 400, 300);
	mandelbrot(can, 1000, 1000, "Mandelbrot");
}