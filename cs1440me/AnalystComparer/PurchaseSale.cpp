//
// Created by Ember Fairbanks on 2/1/2017.
//

#include <iostream>
#include <fstream>
#include <vector>
#include "PurchaseSale.h"
#include "Utils.h"

PurchaseSale::PurchaseSale(std::ifstream &infile) {
    std::string line;
    std::vector<int> elements;
    std::getline(infile, m_symbol,',');
    std::getline(infile, line);
    elements=split(line, ',', 7);
    m_quantity=elements[0];
    m_purDate=elements[1];
    m_purPrice=elements[2];
    m_purFee=elements[3];
    m_saleDate=elements[4];
    m_salePrice=elements[5];
    m_saleFee=elements[6];
}

int PurchaseSale::computeProfitLoss() {
    int investAmt=computeInvestAmount();
    int profitLoss=m_quantity*m_salePrice-investAmt;
    return profitLoss;
}

int PurchaseSale::computeInvestAmount() {
    int investAmount;
    investAmount=(m_quantity*m_purPrice)+m_purFee+m_saleFee;
    return investAmount;
}





