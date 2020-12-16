#ifndef CANVAS_HH
#define CANVAS_HH

#include "point.hh"
#include "pgm.hh"

class Canvas{
	const double vertPixels, horPixels;
	const double width, height;
	const Point center;
	std::vector<std::vector<int>> mrGrey;
	
	public:
		Canvas(const Point& center, double width, double height, int horPixels, int vertPixels);
		
		//double getHorPixels() const;
		//double getVertPixels() const;
		//int getWidth() const;
		//int getHeight() const;
		int brightness(int i, int j) const;
		void setBrightness(int i, int j, int brightness);
		Point coord(int i, int j) const;
};

#endif
