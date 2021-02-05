#include <cctype>
#include <iostream>
#include <map>
#include <unordered_map>
#include <memory>
#include <vector>
#include "sanitizeword.hh"
#include "plugins.hh"

template<typename Map, class Filter>
class Frequencies{
	private:
		Map map;
		Filter filter;
		typedef typename Map::key_type sonne;
		// abstract Plugin base type
		using Plugin = AnalysisPlugin<Map>;
		std::vector<std::shared_ptr<Plugin>> _plugins;

	public:
		//Fertiger Code
		Frequencies(Filter filter) : filter(filter){}
		
		// add a new plugin
		void addPlugin(const std::shared_ptr<Plugin> plugin) {
		 	_plugins.push_back(plugin);
		}

		// Processes all letters obtained from source
		template<typename Source>
		void readData(Source& source){
			while (true) {
				auto data = source.next();
				// check if data valid
				if (not data.second)
				break;

				if(!filter.remove(data)){
					map[filter.transform(data).first] += 1;
				}
		  	}
		}

		// does the statistics and prints to stdout
		void printStatistics(){
			//Plugins
			for(std::size_t i = 0; i < _plugins.size(); i++){
				std::cout << (*_plugins[i]).name() << ": " << std::endl;
				(*_plugins[i]).printStatistics(map);
			}

			//Manuelle Ausführung Aufgabe b
			/*std::size_t total = 0;

		  	for (auto entry : map) {
				total += entry.second;
			}

		  	for (auto entry : map){
		    	std::cout << entry.first << ": "  << static_cast<double>(entry.second) / total << std::endl;
		    }*/
		}

		bool map_empty(){
			return map.empty();
		}
};

class FilterChar{
	public:
		// takes the input data and returns a transformed
		// version (e.g. capitalizes all letters)
		std::pair<char, bool> transform(const std::pair<char, bool>& data){
			std::pair<char, bool> tdata = data;
		    tdata.first = std::toupper(data.first);
		    return tdata;
		}

		// decides whether the input letter or word should be
 		// removed from the statistics (not added to the map)
		bool remove(const std::pair<char, bool>& data){
			if(std::isalpha(data.first)){
				return 0;
			}
			return 1;
		}
};

class FilterString{
	public:
		// takes the input data and returns a transformed
		// version (e.g. capitalizes all letters)
		std::pair<std::string, bool> transform(const std::pair<std::string, int>& data){
			std::pair<std::string, bool> tdata = data;
			tdata.first = sanitize_word(data.first);
		    return tdata;
		}

		// decides whether the input letter or word should be
 		// removed from the statistics (not added to the map)
		bool remove(const std::pair<std::string, bool>& data){
			bool error = true;
			for(int i = 0; i < data.first.length(); i++){
				if(std::isalpha(data.first[i])){ //Falls nur Sonderzeichn dabei sind, entfernen
					error = false;
				}
			}
			return error;
		}
};