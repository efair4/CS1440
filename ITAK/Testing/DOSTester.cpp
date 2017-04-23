//
// Created by Ember Fairbanks on 4/22/2017.
//

#include "DOSTester.h"
#include "../DOSAnalyzer.h"

void DOSTester::test(){
    std::ifstream infile("data1");
    Configuration config;
    ResultSet result;
    config.add("Likely Attack Port Count", "100");
    config.add("Possible Attack Port Count", "200");
    config.add("Timeframe", "10");
    config.add("Likely Attack Message Count", "100");
    config.add("Possible Attack Message Count", "200");
    DenialOfServiceAnalyzer dosAnalyzer(config);
    result=dosAnalyzer.run(infile);
    result.print(std::cout);
}