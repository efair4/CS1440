//
// Created by Ember Fairbanks on 4/22/2017.
//

#include "ConfigurationTester.h"
#include "../Configuration.h"

void ConfigurationTester::testGetters() {
    std::cout<<"ConfigurationTester::testGetters"<<std::endl;
    Configuration config;
    config.add("Likely Attack Port Count", "100");
    config.add("Possible Attack Port Count", "200");
    config.add("Timeframe", "10");
    config.add("Likely Attack Message Count", "100");
    config.add("Possible Attack Message Count", "200");

    int time=config.getAsInt("Timeframe");
    if(time!=10){
        std::cout<<"time should have been 10 but was "
                 <<time<<std::endl;
    }
    std::string strTime=config.getAsString("Timeframe");
    if(strTime!="10"){
        std::cout<<"time should have been 10 but was "
                 <<strTime<<std::endl;
    }
    double dTime=config.getAsDouble("Timeframe");
    if(dTime!=10.00){
        std::cout<<"time should have been 10 but was "
                 <<dTime<<std::endl;
    }
}