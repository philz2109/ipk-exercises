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
		
		double getMrGreyVertSize() const;
		double getMrGreyHoriSize() const;
		int getWidth() const;
		int getHeight() const;
		Point getCenter() const;
		int brightness(int i, int j) const;
		void setBrightness(int i, int j, int brightness);
		Point coord(int i, int j) const;
		
		void write(const std::string& filename); //PGM-Methode
};

#endif
