//
// Created by Ember Fairbanks on 2/1/2017.
//

#ifndef ANALYSTCOMPARER_PURCHASESALE_H
#define ANALYSTCOMPARER_PURCHASESALE_H
#include <string>

class PurchaseSale {
public:
    PurchaseSale(std::ifstream& infile);
    std::string getSymbol(){return m_symbol;};
    int getPurDateTime(){return m_purDate;};
    int getSaleDateTime(){return m_saleDate;};
    int computeInvestAmount();
    int computeProfitLoss();
private:
    std::string m_symbol;
    int m_quantity;
    int m_purDate;
    int m_purPrice;
    int m_purFee;
    int m_saleDate;
    int m_salePrice;
    int m_saleFee;
};

#endif //ANALYSTCOMPARER_PURCHASESALE_H
