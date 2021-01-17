#include <iostream>

#include "iterationResult.hh"

IterationResult iterate(Point z,Point c, double threshold, int maxIt){
	int k = 0;
	while(k < maxIt && sqrt(z.x()*z.x()+z.y()*z.y())<=threshold){
		z.setX(pow(z.x(),2)-pow(z.y(),2)+c.x());
		z.setY(2*z.x()*z.y()+c.y());
		++k;
	}
	//for(k = 0; k < maxIt && sqrt(z.x()*z.x()+z.y()*z.y())<=threshold; k++){
		//z = Point(z.x()*z.x()-z.y()*z.y()+c.x(), 2*z.x()*z.y()+c.y());
	//}
	IterationResult i(z, k);
	return(i);
}
/*
IterationResult iterate(Point z, Point c, double threshold, int maxIt)
{
    int i=0;
    while (sqrt(pow(z.x(),2)+pow(z.y(),2))<threshold && i<=maxIt)
    {
        double n=pow(z.x(),2)-pow(z.y(),2)+c.x();
        double m=2*z.x()*z.y()+c.y();
        z.setX(n);
        z.setY(m);
        ++i;
    }
    IterationResult iRes(Point(0, 0), 1);
    iRes.setPoint(z);
    iRes.setIt(i);
    return iRes;
}*/

void mandelbrot(Canvas& canvas, double threshold,int maxIt, std::string filename){
	for(int i = 0; i<canvas.horPixels(); i++){
		for(int j = 0; j<canvas.vertPixels(); j++){
			Point p = canvas.coord(i,j);
			Point p2(0.0,0.0);
			IterationResult itResult = iterate(p2, p, threshold, maxIt);
			if(itResult.getA_Iter()>=maxIt){
				canvas(i, j) = 0;
			}else{
				//std::cout << itResult.getA_Iter() << std::endl;
				canvas(i, j) = std::log(itResult.getA_Iter())*100;
			}
		}
	}
	canvas.write(filename);
	std::cout << "File wurde generiert!" << std::endl;
}

void julia (Point c, Canvas& canvas, double threshold, int maxIt, std::string filename){
	for(int i = 0; i<(int)canvas.vektor().size(); i++){
		for(int j = 0; j<(int)canvas.vektor()[0].size(); j++){
			Point p = canvas.coord(i,j);
			IterationResult itResult = iterate(p, c, threshold, maxIt);
			if(itResult.getA_Iter()>=maxIt){
				canvas(i, j) = 0;
			}else{
				canvas(i, j) = std::log(itResult.getA_Iter())*100;
			}
		}
	}
	canvas.write(filename);
	std::cout << "File wurde generiert!" << std::endl;
}

int main(int argc, char *argv[]){
	double threshold = 1000;
	int maxIt = 1000;
	Canvas can(Point(-1, 0), 8000, 6400, 400, 300);
	mandelbrot(can, threshold, maxIt, "BIssirbkseifbsiebs");
	Point c(-0.8, 0.156);
	Canvas can2(c, 8000, 6400, 40, 30);
	julia(c, can2, threshold, maxIt, "Julia");
}