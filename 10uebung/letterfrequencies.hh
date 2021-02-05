#include <cctype>
#include <iostream>
#include <map>
#include <unordered_map>

template<typename Map>
class LetterFrequencies{
	private:
		Map map;

	public:
		// Processes all letters obtained from source
		template<typename Source>
		void readData(Source& source){
			while (true) {
				auto data = source.next();
				// check if data valid
				if (not data.second)
				break;
		    	if (std::isalpha(data.first)) {
		      		map[std::toupper(data.first)] += 1;
		    	}
		  	}
		}

		// does the statistics and prints to stdout
		void printStatistics(){
			std::size_t total = 0;

		  	for (auto entry : map) {
				total += entry.second;
			}

		  	for (auto entry : map){
		    	std::cout << entry.first << ": "  << static_cast<double>(entry.second) / total << std::endl;
		    }
		}

		bool map_empty(){
			return map.empty();
		}
};