#include <iostream>

#include "iterationResult.hh"

void mandelbrot (Canvas& canvas, double threshold,int maxIt, std::string filename){
	
}

int main(int argc, char *argv[]){
	Point p(4,2);
	IterationResult i(p, 1);
	std::cout << i.getPoint().x() << std::endl;
}