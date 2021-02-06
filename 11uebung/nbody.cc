#include "sdlwrapper.hh"
#include "io.hh"
#include "basis.hh"
#include <string>
#include <vector>

template<typename Mass>
void displayBodies(SDLCanvas* can, Mass planets){
	for(std::size_t i = 0; i < planets.size(); i++){
		can->drawPixel(planets[i].getPos().getX(), planets[i].getPos().getY(), planets[i].getColor());
	}
	can->display();
}

int main(int argv, char* argc[]){
	int winWidth = 1024;
	int winHeight = 768;
	std::string name = "Behindertes Planetensystem";
	Body one({ 0., 0.}, { 0., 0.}, 1e3, {255, 0, 0});
	Body two({ 100., 0.}, { 0.,0.3}, 10., { 0,255, 0});
	Body three({-200., 0.}, { 0.,0.2}, 10., { 0, 0,255});
	Body four({ 0.,250.}, {-0.25, 0.}, 10., {255,255, 0});
	std::vector<Body> planets = {one, two, three, four};
	/*std::vector<Body> planets = {
		{{ 0., 0.}, { 0., 0.}, 1e3, {255, 0, 0}},
 		{{ 100., 0.}, { 0.,0.3}, 10., { 0,255, 0}},
 		{{-200., 0.}, { 0.,0.2}, 10., { 0, 0,255}},
 		{{ 0.,250.}, {-0.25, 0.}, 10., {255,255, 0}}
 	};
 	std::vector<Body> alienplanets = {
		{{ 150., 0.}, { 0.,-0.2}, 1e3, {255, 0, 0}},
 		{{ -150., 0.}, { 0., 0.2}, 1e3, { 0,255, 0}},
 		{{ 0., 150.}, { 0.2, 0.}, 1e3, { 0, 0,255}},
 		{{ 0., -150.}, {-0.2, 0.}, 1e3, {255,255, 0}}
 	};*/
	SDLCanvas can(name, winWidth, winHeight);
	displayBodies<std::vector<Body>>(&can, planets);
	while(!can.windowClosed()) {}
	return 0;
}