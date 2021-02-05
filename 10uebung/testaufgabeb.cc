#include "frequencies.hh"
#include "frequencysource.hh"
#include <fstream>

int main(int argc, char* argv[]) {
	//definiere map --------------------
	typedef std::unordered_map<std::string,int> map;
	//              --------------------

	//Custom Filter --------------------
	//FilterChar c;
	FilterString c;
	//              --------------------

	//Aufgabe b Frequencies Objekte ----
	//Frequencies<std::map<std::string, int>, FilterString> l(c);
	//LetterFrequencies<std::unordered_map<char, int>> l;
	//               -------------------

	//Plugin Objekte -------------------
	Frequencies<map,FilterString> l(c);
	// add plugin of type PrintTotalCount<Map>
	l.addPlugin(std::make_shared<PrintTotalCount<map>>());
	l.addPlugin(std::make_shared<PrintFrequencies<map>>());
	//               -------------------

	//Ausführung
	for (int i = 1 ; i < argc ; ++i) {
		std::ifstream f(argv[i]);
		auto source = streamWordSource(f);
		l.readData(source);
	}
	l.printStatistics();
	return 0;
}