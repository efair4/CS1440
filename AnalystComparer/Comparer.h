//
// Created by Ember Fairbanks on 2/1/2017.
//

#ifndef ANALYSTCOMPARER_COMPARER_H
#define ANALYSTCOMPARER_COMPARER_H
#include <string>
#include <vector>
#include "Analyst.h"

class Comparer {
public:
    Comparer(std::string fileName);
    void printPerformance(int, std::string);
private:
    std::vector<Analyst> m_analysts;
    int m_numAnalysts=0;
};

#endif //ANALYSTCOMPARER_COMPARER_H
