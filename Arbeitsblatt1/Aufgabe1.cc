#include <iostream>
#include <cmath>                                //einlesen der verschiedenen Bibliotheken

int main(int argc, char** argv) {

	double a ;                                    
		std::cout << "a= " <<std::flush;    
		std::cin >> a;                
	                                             //anlegen bzw einlesen der Variable a
	double b ;
		std::cout << "b= " <<std::flush;
		std::cin >> b;
												 //anlegen bzw einlesen der Variable b
	double c ;
		std::cout << "c= " <<std::flush;
		std::cin >> c;
												 //anlegen bzw einlesen der Variable c	
	double x1,x2 ;
		x1 =(-b + sqrt(b*b - 4*a*c)) / (2*a);		//Mitternachtsformel anwenden für + die Wurzel
		x2 =(-b - sqrt(b*b - 4*a*c)) / (2*a);		//Mitternachtsformel anwenden für + die Wurzel
		std::cout << "x1 = " << x1 << std::endl;    //Ausgabe der Variable x1	
		std::cout << "x2 = " << x2 << std::endl;	//Ausgabe der Variable x2

}
