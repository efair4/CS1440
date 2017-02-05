//
// Created by Ember Fairbanks on 2/1/2017.
//

#include "Comparer.h"
#include "FormattedTable.h"
#include <fstream>
#include <sstream>

Comparer::Comparer(std::string fileNames){
    std::vector<std::string> files;
    std::string file;
    std::stringstream sstream;
    sstream.str(fileNames);
    while(sstream>>file){
        files.push_back(file);
    }
    for(int i=0;i<files.size();i++) {
        std::ifstream infile(files[i]);
        if (!infile.good()) {
            std::cout << "Error, file not found. Shutting down" << std::endl;
            return;
        }
        m_numAnalysts++;
        Analyst newAnalyst(infile);
        m_analysts.push_back(newAnalyst);
        infile.close();
    }
}

void Comparer::printPerformance(int argc, std::string outFile){
    std::ofstream ofile(outFile);
    ofile<<"Analyst Comparison"<<std::endl;
    ofile<<"=================="<<std::endl;
    ofile<<"\nInvestors:"<<std::endl;
    for(int i=0;i<argc;i++){
        ofile<<'\t'<<m_analysts[i].getInitials()<<" "<<m_analysts[i].getName()<<std::endl;
    }
    ofile<<"\n\nOverall Performance:"<<std::endl;
    FormattedTable overallTable(4,argc+1);

    overallTable.addColumn(new ColumnDefinition("Info Displayed", 25, ColumnDefinition::String));
    for(int i=0;i<argc;i++) {
        overallTable.addColumn(new ColumnDefinition(m_analysts[i].getInitials(), 15, ColumnDefinition::FixedPrecision, ColumnDefinition::Center,2));
    }

    FormattedRow* row1 = new FormattedRow(&overallTable);
    row1->addCell(new FormattedCell("Simulation Days"));
    for(int i=0;i<argc;i++) {
        row1->addCell(new FormattedCell((float)m_analysts[i].getHistory().getSimDays()));
    }
    overallTable.addRow(row1);

    FormattedRow* row2 = new FormattedRow(&overallTable);
    row2->addCell(new FormattedCell("Seed Money ($)"));
    for(int i=0;i<argc;i++) {
        row2->addCell(new FormattedCell((float)m_analysts[i].getHistory().getSeedMoney()));
    }
    overallTable.addRow(row2);

    FormattedRow* row3 = new FormattedRow(&overallTable);
    row3->addCell(new FormattedCell("Total Profit Loss ($)"));
    for(int i=0;i<argc;i++) {
        row3->addCell(new FormattedCell(m_analysts[i].getHistory().computeTPL()));
    }
    overallTable.addRow(row3);

    FormattedRow* row4 = new FormattedRow(&overallTable);
    row4->addCell(new FormattedCell("Profit Loss Per Day ($)"));
    for(int i=0;i<argc;i++) {
        row4->addCell(new FormattedCell(m_analysts[i].getHistory().computePLPD()));
    }
    overallTable.addRow(row4);

    overallTable.write(ofile);

    ofile<<"\n\nStock Performance:"<<std::endl;
    ofile<<"Stock Profit Loss Per Day"<<std::endl;
    FormattedTable stockTable(4,argc+1);

    stockTable.addColumn(new ColumnDefinition("Stock Symbol", 15, ColumnDefinition::String));
    for(int i=0;i<argc;i++) {
        stockTable.addColumn(new ColumnDefinition(m_analysts[i].getInitials(), 15, ColumnDefinition::FixedPrecision, ColumnDefinition::Center, 2));
    }

    FormattedRow* row5 = new FormattedRow(&stockTable);
    row5->addCell(new FormattedCell("AMZN"));
    for(int i=0;i<argc;i++) {
        row5->addCell(new FormattedCell(m_analysts[i].getHistory().computeStockPerformance("AMZN")));
    }
    stockTable.addRow(row5);

    FormattedRow* row6 = new FormattedRow(&stockTable);
    row6->addCell(new FormattedCell("MSFT"));
    for(int i=0;i<argc;i++) {
        row6->addCell(new FormattedCell(m_analysts[i].getHistory().computeStockPerformance("MSFT")));
    }
    stockTable.addRow(row6);

    FormattedRow* row7 = new FormattedRow(&stockTable);
    row7->addCell(new FormattedCell("AAPL"));
    for(int i=0;i<argc;i++) {
        row7->addCell(new FormattedCell(m_analysts[i].getHistory().computeStockPerformance("AAPL")));
    }
    stockTable.addRow(row7);

    FormattedRow* row8 = new FormattedRow(&stockTable);
    row8->addCell(new FormattedCell("GOOGL"));
    for(int i=0;i<argc;i++) {
        row8->addCell(new FormattedCell(m_analysts[i].getHistory().computeStockPerformance("GOOGL")));
    }
    stockTable.addRow(row8);

    stockTable.write(ofile);
}