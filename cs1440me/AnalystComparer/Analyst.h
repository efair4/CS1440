//
// Created by Ember Fairbanks on 2/1/2017.
//

#ifndef ANALYSTCOMPARER_ANALYST_H
#define ANALYSTCOMPARER_ANALYST_H
#include <string>
#include <iostream>
#include "History.h"

class Analyst {
public:
    Analyst(std::ifstream& infile);
    float getStockPerformance(std::string symbol);
    std::string getName(){return m_name;};
    std::string getInitials(){return m_initials;};
    History getHistory(){return m_history[0];};
private:
    std::string m_name;
    std::string m_initials;
    std::vector<History> m_history;
};

#endif //ANALYSTCOMPARER_ANALYST_H
