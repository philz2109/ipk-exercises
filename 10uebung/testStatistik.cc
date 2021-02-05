#include "letterfrequencies.hh"
#include "frequencysource.hh"
#include <fstream>

int main(int argc, char* argv[]) {
	LetterFrequencies<std::map<char, int>> l;
	//LetterFrequencies<std::unordered_map<char, int>> l;
	for (int i = 1 ; i < argc ; ++i) {
		std::ifstream f("sherlock.txt");
		auto source = streamLetterSource(f);
		l.readData(source);
	}
	l.printStatistics();
	//std::cout << "Wenn ich das noch einmal alleine lese, bekomme ich einen Wutanfall!" << std::endl;
	if(l.map_empty()){
	  	return 1;
	}else{
	  	return 0;
	}
}