#include <iostream>

double root_iterative(double q, int n, int steps);
void test_root(double q, int n, int steps);
double potenz(double a, int n);

int main(int argc, char** argv){
	double q; //Variablendeklaration und Benutzereingabe
	int n;
	std::cout << "Eingabe q: " << std::flush;
	std::cin >> q;
	std::cout << "Eingabe n: " << std::flush;
	std::cin >> n;
	std::cout << "Die Rechnung ergibt: " << std::endl;
	//std::cout << "Näherungsweise: " << root_iterative(q, n, 1000) << std::endl;
	test_root(q, n, 1000);
}

double root_iterative(double q, int n, int steps){ //Funktion Berechnung Näherungsweise
	if(n == 0){ //Prüfung nach Falscher Eingabe
		std::cout << "Bor bisch du blede, des darfsch doch net eitibbe!" << std::endl;
		return 0;
	}
	double a = 1;
	for(int i = 0; i < steps; i++){ //Schleife für die wiederholung der Näherungsformel
		a = a + 1./n*(q/potenz(a, n-1)-a); //Näherungsformel
		//std::cout << "ZwischenA: " << a << std::endl;
	}
	return a; //Rückgabe
}

void test_root(double q, int n, int steps){ //Funktion des Näherungstests
	double a = root_iterative(q, n, steps); //Berechnung Näherung
	std::cout << "Näherungsweise: " << a << std::endl; //Ausgabe der Näherung
	std::cout << "Test der Näherung: q: " << q << ", n: " << n << ", Steps: " << steps << ", q-a^n: " << q - potenz(a, n) << std::endl; //Ausgabe wie gefordert
}

double potenz(double a, int n){ //Es wird nur a hoch n gerechnet
	double b = a;
		while(n > 1){ //es wird n Mal mit a multipliziert, da im Prinzip im ersten Schritt schon a * a gemacht wird, schreibt man n > 1 in die Bedingung
			n--;
			b = b * a;
		}
		if(n == 0){ //Fall n = 0
			b = 1;
		}
		return b;
}