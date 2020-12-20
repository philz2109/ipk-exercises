#include <iostream>
#include <cmath>

int main(int argc, char** argv){
	double a;
	std::cout << "a = " << std::flush;//Einlesen a
	std::cin >> a;
	double b;
	std::cout << "b = " << std::flush;//Einlesen b
	std::cin >> b;
	double c;
	std::cout << "c = " << std::flush;//Einlesen c
	std::cin >> c;
	double x1, x2;
	if(a == 0 || b*b - 4*a*c < 0){
		std::cout << "Unzulässige Eingabe" << std::endl;
	}else{
		x1 = (-b + sqrt(b*b - 4*a*c))/(2*a);//Rechnung
		x2 = (-b - sqrt(b*b - 4*a*c))/(2*a);
		std::cout << "x1 = " << x1 << std::endl;//Ausgabe
		std::cout << "x2 = " << x2 << std::endl;
	}
}