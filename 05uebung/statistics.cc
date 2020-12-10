#include "statistics.hh"
#include <vector>
#include <algorithm>
#include <cmath>

double mean(const std::vector<double>& v) { //Main-Funktion
	double m = 0;
	for(auto a : v){
		m += a;
	}
	if(v.size() != 0){
		m = m / v.size();
	}
	return(m);
}

bool sort_by_value(double a, double b){
	if(a<b){ //Sortierung von kleinstem Wert zu größtem Wert
		return true;
	}else{
		return false;
	}
}

double median(const std::vector<double>& v){
	if(v.size()>0){
		std::vector<double> f = v;
		std::sort(f.begin(), f.end(), sort_by_value);
		if(f.size()%2==0){
			return((f[(int)f.size()/2-1]+f[(int)f.size()/2])/2);
		}else{
			return(f[((int)f.size())/2]);
		}
	}else{
		return 0;
	}
}

double moment(const std::vector<double>& v, int k){
	double mk = 0;
	double b;
	for(auto a : v){
		b = 1;
		for(int i = 0; i<k; i++){
			b = b*a;
		}
		mk += b;
	}
	if(v.size() != 0){
		mk = mk / v.size();
	} 
	return(mk);
}

double standard_deviation(const std::vector<double>& v){
	double s;
	double u = mean(v);
	for(auto a : v){
		s += (a-u)*(a-u);
		
	}
	if(v.size() != 0){
		s = s / v.size();
	}
	s = sqrt(s);
	return(s);
} 
/*Die Relation gilt:
/Beispiel:
/2-statistische Moment: 7786,72 
/mean hoch 2: 86,9167
/7786,72-86,9167 = 232,20 
/Standartabweichung hoch 2: 232,20 
(alle Angaben gerundet)*/
