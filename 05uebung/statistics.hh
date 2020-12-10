#ifndef STATISTICS_HH
#define STATISTICS_HH

#include <vector>
#include <iostream>

double mean(const std::vector<double>& v); //(b)

bool sort_by_value(double a, double b); //Hilfsfunktion

double median(const std::vector<double>& v); //(c)

double moment(const std::vector<double>& v, int k); //(d)

double standard_deviation(const std::vector<double>& v); //(e)

#endif