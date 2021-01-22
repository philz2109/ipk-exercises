#include <cstdlib>
#include <iostream>
#include <vector>

std::vector<int> reversed(const std::vector<int>& v) {
  std::vector<int> result;
  for (std::size_t i = v.size(); i > 0; --i) //Fehler 2
  	result.push_back(v[i]);
  return result;
}

int main(int argc, char** argv) {
  if (argc < 1) {
    std::cerr << "Usage: " << argv[0] << " [number] [number]..." << std::endl;
    return 1;
  }
  std::cerr << "Reading in " << (argc - 1) << " numbers from stdin" << std::endl;
  
  std::vector<int> numbers;
  for (std::size_t i = 0; i < argc; ++i) {
    // atoi converts a string to a number
    int number = std::atoi(argv[i]); //Fehler 1
    numbers.push_back(number);
  }

  std::cerr << "Reversing order of numbers" << std::endl;
  auto reverse = reversed(numbers);

  for (auto n : reverse) 
  	std::cout << n << std::endl;
}

//Fehler 1: (Zeile 22)
//Statt atoi stand stoi in der Zeile.
//
//Fehler 2: (Zeile 7)
//Der Datentyp size_t ist ein Typ unsigned Integer, kann also keine negativen Werte abbilden, was die Vorraussetzung für einen Schleifenabbruch wäre.