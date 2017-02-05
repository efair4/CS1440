//
// Created by Ember Fairbanks on 2/1/2017.
//

#ifndef ANALYSTCOMPARER_HISTORY_H
#define ANALYSTCOMPARER_HISTORY_H
#include "PurchaseSale.h"
#include <vector>

class History {
public:
    History(std::ifstream& infile);
    int getSimDays(){return m_simDays;};
    int getSeedMoney(){return m_seedMoney/100;};
    float computeTPL();
    float computePLPD();
    float computeStockPerformance(std::string symbol);
private:
    int m_simDays;
    int m_seedMoney;
    int m_numSales;
    std::vector<PurchaseSale> m_sales;
};

#endif //ANALYSTCOMPARER_HISTORY_H
