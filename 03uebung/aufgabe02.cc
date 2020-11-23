#include <iostream>

namespace power{
	
	int iterative(int q, unsigned int n){
		int c = q;
		while(n > 0){
			n--;
			c = q * c;
		}
		return c;
	}
	
	int recursive(int q, int n){
		
	}
	
}

int main(){
	unsigned int n;
	int q;
	std::cout << "Eingabe q:" << std::flush;
	std::cin >> q;
	std::cout << "Eingabe n:" << std::flush;
	std::cin >> n;
	std::cout << "Das Ergebnis von " << q << "^" << n << std::endl;
	power::iterative(q, n):
}



