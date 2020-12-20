#include <iostream>

void collaps(int number);

int main(int argc, char** argv){
	int number;
	std::cout << "Eingabe: " << std::flush;
	std::cin >> number;
	collaps(number);
}

void collaps(int number){
	while(number != 1 && number != 0 && number != -1 && number != -5 && number != -17){ //Wiederholungder Zahlenwerte, bis die entsprechenden erreicht sind
		std::cout << "Number: " << number << std::endl; //Ausgabe
		if(number % 2 == 0){ //Wenn number gerade
			number = number / 2; //number geteilt durch 2
		} else { //Sonst
			number = number * 3 + 1; // number mal drei plus eins
		}
	}
	std::cout << "Ausgabe: " << number << std::endl; //Ausgabe
}