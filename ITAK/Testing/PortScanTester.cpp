//
// Created by Ember Fairbanks on 4/22/2017.
//

#include "PortScanTester.h"
#include "../PortScanAnalyzer.h"

void PortScanTester::portTest(){
    std::ifstream infile("data1");
    Configuration config;
    ResultSet result;
    config.add("Likely Attack Port Count", "100");
    config.add("Possible Attack Port Count", "200");
    config.add("Timeframe", "10");
    config.add("Likely Attack Message Count", "100");
    config.add("Possible Attack Message Count", "200");
    PortScanAnalyzer psAnalyzer(config);
    result=psAnalyzer.run(infile);
    result.print(std::cout);
}