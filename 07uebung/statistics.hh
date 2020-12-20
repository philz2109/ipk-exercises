#ifndef STATISTICS_HH
#define STATISTICS_HH

#include <vector>
#include <algorithm>
#include <cmath>

template<typename T>
typename T::value_type mean(const T& v) { //Main-Funktion
	typename T::value_type m = 0;
	for(auto a : v){
		m += a;
	}
	if(v.size() != 0){
		m = m / v.size();
	}
	return(m);
}

template<typename begin, typename end>
bool sort_by_value(begin a, end b){
	if(a<b){ //Sortierung von kleinstem Wert zu größtem Wert
		return true;
	}else{
		return false;
	}
}

template<typename T>
typename T::value_type median(const T& v){
	if(v.size()>0){
		T f = v;
		std::sort(f.begin(), f.end(), sort_by_value<typename T::value_type, typename T::value_type>);
		if(f.size()%2==0){
			return((f[(int)f.size()/2-1]+f[(int)f.size()/2])/2);
		}else{
			return(f[((int)f.size())/2]);
		}
	}else{
		return 0;
	}
}

template<typename T>
typename T::value_type robust_median(const T v){
	std::vector<typename T::value_type> v2;
	/*for(typename T::value_type i : v){
		v2.push_back(i);
	}*/
	v2.resize(v.size());
	std::copy(v.begin(), v.end(), v2.begin());
	return median(v2);
}

template<typename T>
typename T::value_type moment(const T& v, int k){
	typename T::value_type mk = 0;
	typename T::value_type b;
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

template<typename T>
typename T::value_type standard_deviation(const T& v){
	typename T::value_type s;
	typename T::value_type u = mean(v);
	for(auto a : v){
		s += (a-u)*(a-u);
	}
	if(v.size() != 0){
		s = s / v.size();
	}
	s = sqrt(s);
	return(s);
} 

#endif