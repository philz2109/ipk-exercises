#include <cctype>
#include <iostream>
#include <map>
#include "letterfrequencies.hh"

/*void LetterFrequencies::readData(Source& source){
	while (true) {
    	//read in character
    	auto data = source.next();
    	// break condition
    	if(not data.second){
    		break;
    	}

    	if (std::isalpha(data)) {
      		map[std::toupper(data)] += 1;
    	}
  	}
}

void LetterFrequencies::printStatistics(){
	std::size_t total = 0;

  	for (auto entry : map) {
		total += entry.second;
	}

  	for (auto entry : map){
    	std::cout << entry.first << ": "  << static_cast<double>(entry.second) / total << std::endl;
    }
}*/

/*void print_frequencies(const std::map<char, int>& frequencies);

std::map<char, int> get_frequencies() {
  std::map<char, int> f;

  while (true) {
    unsigned char c;
    // read in character
    std::cin >> c;
    // abort if input closed
    if (c == 64) break;//@ für Abbruch

    if (std::isalpha(c)) {
      f[std::toupper(c)] += 1;
    }
  }

  return f;
}

void print_frequencies(const std::map<char, int>& frequencies) {
  std::size_t total = 0;

  for (auto entry : frequencies) total += entry.second;

  for (auto entry : frequencies)
    std::cout << entry.first << ": "
              << static_cast<double>(entry.second) / total << std::endl;
}

int main() {
  print_frequencies(get_frequencies());
  return 0;
}
*/