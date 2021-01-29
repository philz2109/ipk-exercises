#include <cctype>
#include <iostream>
#include <map>

template<typename Map>
class LetterFrequencies{
	private:
		std::map<Map, int> f;

	public:
		// Processes all letters obtained from source
		template<typename Source>
		void readData(Source& source);

		// does the statistics and prints to stdout
		void printStatistics();

};