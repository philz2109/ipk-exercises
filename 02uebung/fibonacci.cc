#include <iostream>

void fibonacci(int n);

int main(int argc, char** argv){
	int n;
	std::cout << "Endnummer = " << std::flush;//Einlesen N
	std::cin >> n;
	fibonacci(n); //Funktionsaufruf
}

void fibonacci(int n){
	std::cout << "Ausgabe der Fusilli- Folge: " << std::endl;
	std::cout << 0 << std::endl; //Die ersten beiden Nummern werden manuell ausgegeben
	std::cout << 1 << std::endl;
	unsigned long long f1 = 0; //Deklarierung der Variablen
	unsigned long long f2 = 1;
	while(n > 1){ //Wiederholung bis zu der gewünschten Fibonacci Nummer
		n--;
		if(f1 > f2){ //Der kleinere Zahlenwert wird überschrieben
			f2 = f1 + f2; //Berechnung der neuen Zahl
			std::cout << f2 << std::endl; //Ausgabe
		}else{
			f1 = f2 + f1; //Berechnung der neuen Zahl
			std::cout << f1 << std::endl; //Ausgabe
		}
	}
	std::cout << "Finished!!!!" << std::endl;
}

//iii: Ja, die Werte werden negaiv, da ein Integer nur begrenzt große Zahlen anzeigen kann.
	