//
// Created by Ember Fairbanks on 4/22/2017.
//

#include <iostream>
#include "UtilsTester.h"
#include "../Utils.h"

void UtilsTester::testSplit(){
    std::cout<<"UtilsTester::testSplit"<<std::endl;
    std::string commas="here,is, a,string";
    std::vector<std::string> commaResult;
    commaResult=split(commas, ',', 4);
    if(commaResult.size()!=4){
        std::cout<<"Vector size should have been 4 but was"
                <<commaResult.size();
    }
    if(commaResult[2]!="a"){
        std::cout<<"3rd element should have been \"a\" but was"
                 <<commaResult[2]<<std::endl;
    }
}