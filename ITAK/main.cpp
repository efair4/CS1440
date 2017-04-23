#include <iostream>
#include <fstream>
#include "Analyzer.h"
#include "DOSAnalyzer.h"
#include "PortScanAnalyzer.h"

int main() {
    std::ifstream infile("sampleData.txt");
    Configuration config;
    config.add("Likely Attack Port Count", "100");
    config.add("Possible Attack Port Count", "200");
    config.add("Timeframe", "10");
    config.add("Likely Attack Message Count", "100");
    config.add("Possible Attack Message Count", "200");
    try {
        DenialOfServiceAnalyzer dosAnalyzer(config);
        dosAnalyzer.run(infile);
    }catch(char* ex){
        std::cout<<"Configuration parameters missing"<<std::endl;
    }
    try {
        PortScanAnalyzer psAnalyzer(config);
        psAnalyzer.run(infile);
    }catch(char* ex){
        std::cout<<"Configuration parameters missing"<<std::endl;
    }
    return 0;
}