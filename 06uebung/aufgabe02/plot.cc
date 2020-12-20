#include "canvas.hh"
#include <iostream>
#include <algorithm>
#include <cmath>

void setBrightness(Canvas& c){
	double x2;
	double y2;
	for(int x = 0; x < c.getMrGreyHoriSize(); x++){
		for(int y = 0; y < c.getMrGreyVertSize(); y++){
			if(x == 0){ //Wenn x = 0, dann gibt die Berechnung einen Fehler aus
				x2 = 0.9;
			}else{
				x2 = x;
			}
			if(y == 0){
				y2 = 0.9;
			}else{
				y2 = y;
			}
			//c.setBrightness(x, y, fmax(0, (x+y)/3)); //sieht cooler aus
			c.setBrightness(x, y, fmax(0, 100*(sin(1/x2)*sin(1/y2)+1))); //Wie in der Aufgabe verlangt
		}
	}
}

int main(int argc, char *argv[]) { //Main-Funktion
	int horPixels = 4; //400 ist cooler
	int vertPixels = 3; //300 ist cooler
	Canvas c(Point(2000, 1500), 4000, 3000, vertPixels, horPixels); //und mit einer 0 Zusatz
	setBrightness(c);
	c.write("FiftyShades");
	return(0);
}