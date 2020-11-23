#include <iostream>
#include <cmath>   						 //einlesen der verschiedenen Bibliotheken

void collatz(int number);

int main(int argc, char** argv) {
		int number;
		std::cout << "Eingabe :" << std::flush;    
		std::cin >> number;
		collatz(number);
	}
	
void collatz(int number) {
	while (number != 1 && number != 0 && number != -1 && number != -5 && number!= -17) {
		std::cout << "Number: " << number << std::endl;
		if (number % 2 == 0) {
			number = number / 2; 
			}
		else {
			number = (number * 3)+1;
			}
	}
		
	std::cout << "Endergebniss =" <<number << std::endl;
	
}
		
		
