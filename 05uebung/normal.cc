#include "io.hh"
#include "statistics.hh"
#include <iostream>
#include <vector>

int main(int argc, char *argv[]){
	long long a = 10*10*10*10*10*10;
	std::vector<double> v = normal_distribution(random_seed(), a, 100, 20); //Bildung Vektor
	for(auto a : v){ //Ausgabe Vektor
	std::cout << a << std::endl;
	}
	
	int k; //Einlesen k
	std::cin >> k;
	
	std::cout << "Mittelwert: " << mean(v) << std::endl; //Ausgabe implementierter Statistiken
	std::cout << "Median: " << median(v) << std::endl;
	std::cout << "k-te statistische Moment: " << moment(v, k) << std::endl;
	std::cout << "Standardabweichung: " << standard_deviation(v) << std::endl;
	return(0);
}