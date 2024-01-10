//
// Created by coren on 10/01/2024.
//

#include "KNNDouble.h"
#include <cstdlib>

double KNNDouble::similarityMeasure(std::pair<double, double> & one, std::pair<double, double> & two) {
    return abs(one.first-two.first) + abs(one.second-two.second);
}