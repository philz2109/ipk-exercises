#include "canvas.hh"
 
Canvas::Canvas(const Point& center, double width, double height, int horPixels, int vertPixels): center(center), width(width), height(height), vertPixels(vertPixels), horPixels(horPixels){
	 
}
 
int Canvas::brightness(int i, int j) const{
	return mrGrey[i][j];
}
	
void Canvas::setBrightness(int i, int j, int brightness){
	mrGrey[i][j] = brightness;
}

Point Canvas::coord(int i, int j) const{
	double x = width/mrGrey.size()*i;
	double y = height/mrGrey.size()*j;
	return Point(x, y);
}

int main(int argc, char *argv[]) { //Main-Funktion
	Canvas c(Point(500, 400), 1000, 800, 10, 8);
	return(0);
}
 