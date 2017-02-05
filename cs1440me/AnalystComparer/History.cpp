//
// Created by Ember Fairbanks on 2/1/2017.
//

#include "History.h"
#include <iostream>
#include <fstream>

History::History(std::ifstream& infile){
    infile>>m_simDays;
    infile>>m_seedMoney;
    infile>>m_numSales;
    for(int i=0;i<m_numSales;i++){
        PurchaseSale newSale(infile);
        m_sales.push_back(newSale);
    }
}

float History::computePLPD() {
    float profitLossPerDay;
    profitLossPerDay=computeTPL()/m_simDays;
    return profitLossPerDay;
}

float History::computeTPL() {
    float totalProfitLoss=0;
    for(int i=0; i<m_sales.size();i++){
        totalProfitLoss+=m_sales[i].computeProfitLoss();
    }
    return totalProfitLoss/100;
}

float History::computeStockPerformance(std::string symbol){
    float stockPerformance=0;
    int totalLoss=0;
    int maxPurchaseTime=0;
    int maxSaleTime=0;
    float days;
    for(int i=0; i<m_numSales; i++) {
        if(symbol==m_sales[i].getSymbol()|| "\n"+symbol==m_sales[i].getSymbol()){
            totalLoss+=m_sales[i].computeProfitLoss();
            maxPurchaseTime+=m_sales[i].getPurDateTime();
            maxSaleTime+=m_sales[i].getSaleDateTime();
        }
    }
    if(totalLoss==0){
        return 0;
    }
    days=(maxSaleTime-maxPurchaseTime)/ static_cast<float>((24*60));
    stockPerformance=totalLoss/days;

    return stockPerformance/100;
}