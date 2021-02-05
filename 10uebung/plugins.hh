

template<typename Map>
class AnalysisPlugin {

public:

	using Data = typename Map::key_type;

	// always add virtual destructor
	virtual ~AnalysisPlugin() {}

	// returns the name of the plugin
	virtual std::string name() const = 0;

	// does some statistics on the map and prints it to stdout
	virtual void printStatistics(const Map& map)
	{
	 // do nothing by default
	}

};

template<typename Map>
class PrintFrequencies : public AnalysisPlugin<Map> {

public:
	// returns the name of the plugin
	std::string name() const { return "PrintFrequencies";};

	// does some statistics on the map and prints it to stdout
	void printStatistics(const Map& map) {
		std::size_t total = 0;

	  	for (auto entry : map) {
			total += entry.second;
		}

	  	for (auto entry : map){
	    	std::cout << entry.first << ": "  << static_cast<double>(entry.second) / total << std::endl;
	    }
	}

};

template<typename Map>
class PrintTotalCount : public AnalysisPlugin<Map> {

public:
	// returns the name of the plugin
	std::string name() const { return "PrintTotalCount";}

	// does some statistics on the map and prints it to stdout
	void printStatistics(const Map& map) {
		std::size_t total = 0;
		for (auto entry : map) {
			total += entry.second;
		}
		std::cout << "Gesamtzahl an Buchstaben/Wörtern: " << total << std::endl;
	}

};