#include <iostream>
#include <cmath>
#include "iterationResult.hh"


double norm(Point p) {
	 return sqrt(p.x()*p.x()+p.y()*p.y());
}


IterationResult iterate(Point z, Point c, double threshold, int maxIT) 
{
	int i = 0 ;
	IterationResult j(z,i);
	while (i < maxIT && norm(z) <= threshold) {
		Point tempz(z);
		z.setX(tempz.x()*tempz.x()-tempz.y()*tempz.y()+c.x());
		z.setY(2*tempz.x()*tempz.y()+c.y());
		i++;
	}
	j.setPoint(z);
	j.setA_iter(i);
	return(j);

}



void mandelbrot (Canvas& canvas,double threshold, int maxIT, std::string filename){
	for(int x = 0; x < canvas.horPixels(); x++) {
		for(int y = 0; y < canvas.vertPixels(); y++) {
			Point p = Point(canvas.coord(x,y).x(),canvas.coord(x,y).y());
			Point p2 = Point(0,0);
			IterationResult itResult(iterate(p2, p, threshold, maxIT));
			if(itResult.geta_iter() < maxIT) {
				canvas(x,y) = std::log(itResult.geta_iter())*100;
			}
			else {
				canvas(x,y) = 0;
			}
		}
	}
	canvas.write(filename);
	std::cout << "Mandelbrot wurde generiert";
}

void julia (Point c, Canvas& canvas2, double threshold, int maxIT, std::string filename) {
	Point p(c);
	for(int x = 0; x < canvas2.horPixels(); x++) {
		for(int y = 0;y < canvas2.vertPixels(); y++) {
			Point p2 = Point(canvas2.coord(x,y).x(),canvas2.coord(x,y).y());
			IterationResult itResult = iterate(p2, p, threshold, maxIT);
			if(itResult.geta_iter() < maxIT) {
				canvas2(x,y) = std::log(itResult.geta_iter())*100;
			}
			else {
				canvas2(x,y) = 0;
			}
		}
	}
	canvas2.write(filename);
	std::cout << "Julia menge wurde generiert wurde generiert";
} 





int main () {
	double threshold = 2;
	int maxIT = 355;
	Point c(-0.8,0.156);
	Canvas canvas(Point(0,0),4,3,4000,3000);
	mandelbrot(canvas, threshold, maxIT, "test.pgm");
	std::cout << iterate(Point(0,0), Point(-1,0), 100,100).geta_iter();
	//Canvas canvas2(Point(0,0),4,3,4000,3000);
	//julia(c,canvas2,threshold, maxIT, "Julia.pgm");

}


