#include <iostream>
#include <cmath>                                //einlesen der verschiedenen Bibliotheken

void fibonacci(int number) ;

int main(int argc, char** argv) {
	int number;
	
	std::cout << "Eingabe bis welche Stelle berechnet werden soll :" << std::flush;
	std::cin >> number;
	fibonacci(number);
}

void fibonacci(int number) {
	unsigned long long n = 3;
	unsigned long long a = 0;
	unsigned long long b = 1;
	unsigned long long c ;
	std::cout << "F an der Stelle 1 ist gleich " << a << std::endl;  // f1 = a
	std::cout << "F an der Stelle 2 ist gleich "<< b <<std::endl;  // f2 = b
	
	while( n <= number) {	
				c = a + b; 						//f(n)
		std::cout << "F an der Stelle " << n << " ist gleich " << c << std::endl;		
				a = b;
				b = c;
				n++;
				
			}
		}
