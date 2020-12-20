#include "canvas.hh"
 
Canvas::Canvas(const Point& center, double width, double height, int horPixels, int vertPixels): center(center), width(width), height(height), vertPixels(vertPixels), horPixels(horPixels), mrGrey(horPixels, std::vector<int>(vertPixels, 0)){	 
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

double Canvas::getMrGreyVertSize() const{
	return mrGrey[0].size();
}
	
double Canvas::getMrGreyHoriSize() const{
	return mrGrey.size();
}

int Canvas::getWidth() const{
	return width;
}

int Canvas::getHeight() const{
	return height;
}

Point Canvas::getCenter() const{
	return center;
}

void Canvas::write(const std::string& filename){
	write_pgm(mrGrey, filename);
}
 