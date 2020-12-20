#ifndef POINT_HH
#define POINT_HH

#include <array>
#include <cmath>

template<typename Coord, int dim>
class Point {

private:
  std::array<Coord, dim> co;
  
public:
	Point() { //Erzeugen des Ursprungs
		for(int i = 0; i<dim; i++){
			co().push_back(0);
		}
	}
	
	// Constructor taking coordinates
	Point(std::array<Coord, dim> co) : co(co) {}

	// Accessors
	std::array<Coord, dim> _co() const { return co; }
	
	// Methoden
	Coord& x(int i){
		return co[i];
	}
	
	Coord norm() const{
		Coord x = 0;
		for(int i = 0; i<(int)co.size(); i++){
			x += co[i]*co[i];
		}
		x = sqrt(x);
		return x;
	}
	
	Coord& operator[](int i){
		return co[i];
	}
	
    const Coord& operator[](int i) const{
		return co[i];
	}
	
	// Constant
	static const int dimension = dim;
	
	// Type Aliases
	using Coordinate = Coord;
};

#endif  // POINT_HH
