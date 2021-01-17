#include <iostream>

#include "iterationResult.hh"

IterationResult iterate(Point z,Point c, double threshold, int maxIt){
	int k = 0;
	while(k < maxIt && sqrt(z.x()*z.x()+z.y()*z.y())<=threshold){
		z.setX(pow(z.x(),2)-pow(z.y(),2)+c.x());
		z.setY(2*z.x()*z.y()+c.y());
		++k;
	}
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

void mandelbrot(Canvas& canvas, double threshold,int maxIt, std::string filename, int pixel){
	int hell;
	for(int x = 0; x<canvas.getMrGreyHoriSize(); x++){
		for(int y = 0; y<canvas.getMrGreyVertSize(); y++){
			Point p = Point((x-canvas.getMrGreyHoriSize()/2)/pixel, (y-canvas.getMrGreyVertSize()/2)/pixel);
			Point p2= Point(0, 0);
			IterationResult itResult = iterate(p2, p, threshold, maxIt);
			if(itResult.getA_Iter()>=maxIt){
				canvas.setBrightness(x, y, 0);
			}else{
				//std::cout << itResult.getA_Iter() << std::endl;
				if(itResult.getA_Iter()<0){
					itResult.setIt(-itResult.getA_Iter());
				}
			    hell = std::log(itResult.getA_Iter())*100;
				if(hell < 0){
					hell = 0;
				}
				canvas.setBrightness(x, y, hell);;
				if(hell < 0){
					hell = -hell;
				}
				canvas.setBrightness(x, y, hell);
			}
		}
	}
	canvas.write(filename);
	std::cout << "File wurde generiert!" << std::endl;
}

void julia (Point c, Canvas& canvas, double threshold, int maxIt, std::string filename, int pixel){
	int hell;
	for(int x = 0; x<canvas.getMrGreyHoriSize(); x++){
		for(int y = 0; y<canvas.getMrGreyVertSize(); y++){
			Point p = canvas.coord(x,y);
			IterationResult itResult = iterate(p, c, threshold, maxIt);
			if(itResult.getA_Iter()>=maxIt){
				canvas.setBrightness(x, y, 0);
			}else{
				if(itResult.getA_Iter()<0){
					itResult.setIt(0);
				}
			    hell = std::log(itResult.getA_Iter())*100;
				if(hell < 0){
					hell = 0;
				}
				canvas.setBrightness(x, y, hell);;
				if(hell < 0){
					hell = -hell;
				}
				canvas.setBrightness(x, y, hell);
			}
		}
	}
	canvas.write(filename);
	std::cout << "File wurde generiert!" << std::endl;
}

int main(int argc, char *argv[]){
	double threshold = 1000;
	int maxIt = 1000;
	int pixel = 1000;
	Canvas can(Point(-1, 0), 4, 2, 4*pixel, 2*pixel);
	mandelbrot(can, threshold, maxIt, "BIssirbkseifbsiebs", pixel);
	//Point c(-0.8, 0.156);
	//Canvas can2(c, 8000, 6400, 4*pixel, 2*pixel);
	//julia(c, can2, threshold, maxIt, "Julia", pixel);
}