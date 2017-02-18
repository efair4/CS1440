//
// Created by Ember Fairbanks on 2/1/2017.
//

#include "Analyst.h"
#include <fstream>

Analyst::Analyst(std::ifstream& infile){
    std::getline(infile, m_name);
    std::getline(infile, m_initials);
    History newHistory(infile);
    m_history.push_back(newHistory);
}

float Analyst::getStockPerformance(std::string symbol) {
    float stockPerformance;
    History history=getHistory();
    stockPerformance=history.computeStockPerformance(symbol);
    return stockPerformance;
}
