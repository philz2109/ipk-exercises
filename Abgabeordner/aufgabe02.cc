#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <fstream>
#include <algorithm>
#include <cstdlib>

std::vector<std::array<double, 2>> read_points_from_file(std::string filename);
void ausgabeVector(std::vector<std::array<double, 2>>& v);
bool sort_by_y(std::array<double, 2> a, std::array<double, 2> b);
void convex_hull(std::vector<std::array<double, 2>>& points);
bool sort_by_angle(std::array<double, 2> a, std::array<double, 2> b);
void write_points_into_file(std::string filename, std::vector<std::array<double, 2>>& points);

int main(int argc, char** argv){
	//std::string filename = "/home/blackfire/Documents/ipk-exercises/04uebung/punkte.txt";
	std::string filename = "/home/blackfire/Documents/ipk-exercises/04uebung/punkte2.txt";
	std::string convexfile = "/home/blackfire/Documents/ipk-exercises/04uebung/convex.txt";
	std::vector<std::array<double, 2>> v = read_points_from_file(filename);
	convex_hull(v);
	write_points_into_file(convexfile, v);
}

void convex_hull(std::vector<std::array<double, 2>>& points){
	ausgabeVector(points);
	std::sort(points.begin(), points.end(), sort_by_y); //Begin und End geben Iteratoren zurück, die auf das erste, bzw. letzte Element zeigen
	ausgabeVector(points);
	for(int i = 1; i < (int)points.size(); i++){
		points[i][0] = points[i][0]-points[0][0];
		points[i][1] = points[i][1]-points[0][1];
	}
	std::sort(points.begin()+1, points.end(), sort_by_angle);
	for(int i = 1; i < (int)points.size(); i++){
		points[i][0] = points[i][0]+points[0][0];
		points[i][1] = points[i][1]+points[0][1];
	}
	ausgabeVector(points);
	int i = 1;
	while(i < (int)points.size()-1){
		if((points[i+1][0]-points[i-1][0])*(points[i][1]-points[i-1][1])-(points[i][0]-points[i-1][0])*(points[i+1][1]-points[i-1][1])<0){ ////A = points[i-1]  B = points[i+1]  C = points[i] ---- C liegt rechts des Vektors von A nach Bw
			i++;
		}else{ //Si liegt nicht rechts des vectors
			points.erase(points.begin()+i);
			i--;
		}
	}
	ausgabeVector(points);
}

bool sort_by_angle(std::array<double, 2> a, std::array<double, 2> b){
	if(a[0]*b[1]-a[1]*b[0] > 0 || (a[0]*b[1]-a[1]*b[0] == 0 && std::abs(a[0]) > std::abs(b[0]))){ //ax * by - ay * bx
		return true;
	}else{
		return false;
	}
}

bool sort_by_y(std::array<double, 2> a, std::array<double, 2> b){ //Nach y-Werten sortieren
	if(a[1]<b[1]||(a[1]==b[1]&&a[0]<b[0])){ //a[1] = y-Wert
		return true;
	}else{
		return false;
	}
}

void write_points_into_file(std::string filename, std::vector<std::array<double, 2>>& points){
	std::ofstream file(filename);
	for(int i = 0; i < (int)points.size(); i++){
		file << points[i][0] << " " << points[i][1] << std::endl;
	}
	file.close();
}

std::vector<std::array<double, 2>> read_points_from_file(std::string filename){
	std::vector<std::array<double, 2>> v;
	std::ifstream input(filename);
	if (input){
		double word;
		int a = 0;
		while (input >> word){
			if(a%2==0){
				v.resize(v.size()+1);
				v[a/2][0] = word;
			}else{
				v[a/2][1] = word;
			}
			a++;
		}
	}else{
		std::cerr << "Fehler beim öffnen der Datei!";
	}
	return v;
}

void ausgabeVector(std::vector<std::array<double, 2>>& v){
	std::cout << "Neue Ausgabe des Vektors:-----------------------------------------------" << std::endl;
	for(int i = 0; i < (int)v.size(); i++){
		std::cout << v[i][0] << "     " << v[i][1] << '\n';
	}
}