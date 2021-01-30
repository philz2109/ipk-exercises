#include "letterfrequencies.hh"
#include "frequencysource.hh"
#include <fstream>

int main(int argc, char *argv[]) {
	LetterFrequencies<char> l;
	for (int i = 1 ; i < argc ; ++i) {
		std::ifstream f(argv[i]);
		auto source = streamLetterSource(f);
		l.readData(source);
	}

  return 0;
}