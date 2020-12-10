#include "io.hh"
#include "statistics.hh"
#include <iostream>
#include <vector>

int main(int argc, char *argv[]){
	long long a = 5;
	std::vector<double> v = normal_distribution(5, a, 100, 20); //Bildung Vektor
	for(auto a : v){ //Ausgabe Vektor
	std::cout << a << std::endl;
	}
	
	double test_val = mean(v);
	std::cout << "Mittelwert: " << test_val << std::endl; //Test
	//double reference_val = 0; //Referenz für a = 0
	//double reference_val = 97.3208; //Referenz für a = 4
	double reference_val = 99.4181; //Referenz für a = 5
	//double reference_val = 98.5991; //Referenz für a = 10
	if (std::abs(test_val - reference_val) < 1e-10) {
		return(0);
	}else{
		return(1);
	}
}