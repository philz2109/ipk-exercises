#include "letterfrequencies.hh"

int main(int argc, char *argv[]) {
  //print_frequencies(get_frequencies());
	for (int i = 1 ; i < argc ; ++i) {
		std::ifstream f(argv[i]);
		auto source = streamLetterSource(f);

	}

  return 0;
}