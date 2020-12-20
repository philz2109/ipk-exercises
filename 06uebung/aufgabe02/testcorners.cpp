#include "canvas.hh"
#include <iostream>

int main(int argc, char *argv[]) { //Main-Funktion
	int horPixels = 10;
	int vertPixels = 8;
	Canvas c(Point(500, 400), 1000, 800, vertPixels, horPixels);
	bool o = true;
	if(c.coord(0, 0).getX()!=c.getCenter().getX()-0.5*c.getWidth() || c.coord(0, 0).getY()!=c.getCenter().getY()-0.5*c.getHeight()){
		o = false;
	}
	if(c.coord(horPixels-1, 0).getX()!=c.getCenter().getX()+0.5*c.getWidth() || c.coord(0, 0).getY()!=c.getCenter().getY()-0.5*c.getHeight()){
		o = false;
	}
	if(c.coord(0, vertPixels-1).getX()!=c.getCenter().getX()-0.5*c.getWidth() || c.coord(0, 0).getY()!=c.getCenter().getY()+0.5*c.getHeight()){
		o = false;
	}
	if(c.coord(horPixels-1, vertPixels-1).getX()!=c.getCenter().getX()+0.5*c.getWidth() || c.coord(0, 0).getY()!=c.getCenter().getY()+0.5*c.getHeight()){
		o = false;
	}
	return o;
}