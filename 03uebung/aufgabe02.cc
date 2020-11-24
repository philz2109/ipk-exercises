#include <iostream>

namespace power{
	
	int e = 1;
	
	int iterative(int q, unsigned int n){//Funktionsaufruf
		int c = q;
		while(n > 1){ //es wird n Mal mit q multipliziert, da im Prinzip im ersten Schritt schon q * q gemacht wird, schreibt man n > 1 in die Bedingung
			n--;
			c = q * c;
		}
		if(n == 0){ //Fall n = 0
			c = 1;
		}
		return c;
	}
	
	int recursive(int q, int n){//Fukntionsaufruf
		if(e == 1 && n == 0){ //Fall n = 0 und Prüfung, ob es der erste Schleifendurchlauf ist
			e = 1;
		}
		if(n > 0){ //es wird geprüft ob man noch mit q multiplizieren muss und in diesem Fall die Funktion erneut aufgerufen
			n--;
			e = e * q;
			recursive(q, n); 
		}
		return e;
	}
	
	unsigned long long trotzdemNaiv(int q, int n){ //Funktionsstart
		unsigned long long d = 1; //Variableninitialisierung
		int i = 1;
		unsigned long long c;
		while(i <= n){ //Es wird solange berechnet, bis keine nächstniedrigere c^(2er-Potenz) gefunden werden kann, dann wird nur noch bei n ungerade einmal q multipliziert
			c = q;
			while(2*i <= n){ //Es wird die größtmögliche 2er-Potenz innerhalb von n bestimmt
				i = 2 * i; //Die Variable wird auf die nächstgrößere 2er-Potenz gesetzt
				c = c * c; //Es wird (c^2) berechnet (= insgesamt (c^i)
			}
			n = n - i; //Es wird die größtmögliche Potenz von q, von n abgezogen
			d = d * c; //d wird mit der nächsten größtmöglichen c^(2er-Potenz) multipliziert (d * c^i (i = 2er-Potenz)) oder mit q als letztem Schritt, falls n ungerade ist
			//q^alt * q^i = (q^alt)^i = (am Ende) q^n = q^?^?^? = q^?*?*?
			i = 1; //i wird zurückgesetzt
		}
		return d; //Rückgabe
	}
	
}

int main(int argc, char** argv){
	unsigned int n; //Variablen werden eingelesen
	int q;
	std::cout << "Eingabe q:" << std::flush; //Eingabe
	std::cin >> q;
	std::cout << "Eingabe n:" << std::flush;
	std::cin >> n;
	std::cout << "Das Ergebnis von " << q << "^" << n << " ist:" << std::endl;
	std::cout << power::iterative(q, n) << std::endl; //funktionsaufrufe
	std::cout << power::recursive(q, n) << std::endl;
	std::cout << power::trotzdemNaiv(q, n) << std::endl;
}



