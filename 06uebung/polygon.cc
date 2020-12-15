#include "polygon.hh"
#include <iostream>

const double pi = M_PI;

Polygon::Polygon(const std::vector<Point>& corners): list(corners){
}

Polygon::Polygon(const std::vector<double>& x, const std::vector<double>& y){
	for(int i = 0; i<(int)x.size(); i++){
		list.push_back(Point(x[i], y[i]));
	}
}

std::size_t Polygon::corners() const{
	return list.size();
}

const Point& Polygon::corner(std::size_t i) const{
	return list[i];
}

void Polygon::ausgabePunkteListe(){
	for(int i = 0; i<corners(); i++){
		std::cout << corner(i).getX() << "     " << corner(i).getY() << std::endl;
	}
	std::cout << "---------------" << std::endl;
}

double Polygon::volume() const{
	double a = 0;
	if(corners() < 3){
		a = 0;
	}else{
		for(int i = 0; i<corners()-1; i++){
			a += corner(i).getX()*corner(i+1).getY()-corner(i+1).getX()*corner(i).getY();
		}
		a = 0.5*(a+corner(corners()-1).getX()*corner(0).getY()-corner(0).getX()*corner(corners()-1).getY());
	}
	return a;
}

void erstellePolygon(int n){
	std::vector<double> x;
	std::vector<double> y;
	for(int i = 0; i<n; i++){
		x.push_back(std::cos((double)i/n*2*pi));
		y.push_back(std::sin((double)i/n*2*pi));
	}
	Polygon p(x, y);
	//p.ausgabePunkteListe();
	std::cout << p.volume() << std::endl;
}

void ueberschlagendesPolygon(){
	std::vector<double> x = {1, 2, 2, 3, 3, 1}; //Überschlagendes Polygon mit gleich großen Flächen bei beiden abgeschnittenen Flächen
	std::vector<double> y = {1, 1, 3, 3, 2, 2};
	Polygon p(x, y);
	p.ausgabePunkteListe();
	std::cout << p.volume() << std::endl;
}

/*
Bei einem überschlagenden Polygon wird der Flächeninhalt einer Seite negativ, sodass sich am Ende die abgeschlossenen Seiten beispielsweise aufheben würden, falls sie gleich groß sind oder eben von einander abziehen.
*/

int main(int argc, char *argv[]) { //Main-Funktion
	int n;
	std::cin >> n;
	erstellePolygon(n); //Die Berechnung stimmt
	ueberschlagendesPolygon();
	return(0);
}