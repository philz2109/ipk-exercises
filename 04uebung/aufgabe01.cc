#include <iostream>
#include <vector>
#include <utility>
#include <cmath>

void aufgabe1a();
std::pair<double, double> aufgabe1b();
std::vector<double> reversed(const std::vector<double>& v);
void aufgabe1c();
void aufgabe1d();
void runden(std::vector<double>& v);
void aufgabe1e();

int main(int argc, char** argv){
	//aufgabe1a();
	//std::pair<double, double> p = aufgabe1b();
	//std::cout << p.first << std::endl << p.second << std::endl;
	//aufgabe1c();
	//aufgabe1d();
	aufgabe1e();
}

void aufgabe1a(){
	std::vector<double> v1;
	std::vector<double> v2(10);
	std::vector<double> v3 = {{ 3, 8, 7, 5, 9, 2 }};
	std::cout << "v1: " << std::endl;
	for(int i = 0; i < (int)v1.size(); i++){ //Wert Einträge: Es gibt keine Einträge, da auch keine Länge angegeben wurde und dementsprechend keine Speicherplätze reserviert wurden
		std::cout << "Eintrag an Stelle " << i << ": " << v1[i] << std::endl;
	}
	std::cout << "v2: " << std::endl;
	for(int i = 0; i < (int)v2.size(); i++){ //Wert Einträge: Alle Einträge sind 0, da nichts zugewiesen wurde
		std::cout << "Eintrag an Stelle " << i << ": " << v2[i] << std::endl;
	}
	std::cout << "v3: " << std::endl;
	for(int i = 0; i < (int)v3.size(); i++){ //Die EInträge entsprechend den zugewiesenen Zahlen
		std::cout << "Eintrag an Stelle " << i << ": " << v3[i] << std::endl;
	}
}

std::pair<double, double> aufgabe1b(){
	std::vector<double> v = {{1, 2, 3, 4, 5, 6, 700, 2, 5, 9, 5, 12, 1}};
	double x = v[0];
	double y = v[0];
	for(int i = 1; i < (int)v.size(); i++){
		if(x > v[i]){
			x = v[i];
		}
		if(y < v[i]){
			y = v[i];
		}
	}
	return std::make_pair(x, y);
}

void aufgabe1c(){
	const std::vector<double> v = {{1, 2, 3, 4, 5, 6, 7, 8}};
	std::vector<double> r = reversed(v);
	for(int zahl : r){
		std::cout << zahl << std::endl;
	}
}

std::vector<double> reversed(const std::vector<double>& v){
	std::vector<double> v2(v.size());
	for(int i = 0; i < (int)v.size(); i++){
		v2[i] = v[v.size()-i-1];
	}
	return v2;
}

void aufgabe1d(){
	std::vector<double> v = {{1.824, 2.8364, 3.764, 4.2038426}};
	runden(v);
	for(int zahl : v){
		std::cout << zahl << std::endl;
	}
}

void runden(std::vector<double>& v){
	for(double& zahl : v){
		zahl = std::round(zahl);
	}
}

void aufgabe1e(){
	std::vector<double> v = {{1, 2, 3, 4, 5, 6, 7, 8}};
	for(int e = 1; e < (int)v.size(); e++){
		for(int i = 0; i < (int)v.size()-e; i++){
			std::swap(v[i], v[i+1]);
		}
	}
	for(int zahl : v){
		std::cout << zahl << std::endl;
	}
}











