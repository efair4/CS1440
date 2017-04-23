//
// Created by Ember Fairbanks on 4/22/2017.
//

#include "ResultSetTester.h"
#include "../ResultSet.h"

void ResultSetTester::testPrint(){
    std::cout<<"ResultTester::testPrint"<<std::endl;
    ResultSet result;
    std::string key="apple";
    char letter='b';
    std::vector<std::string> value;
    value.push_back(key);
    for(int i=0;i<4;i++){
        key[0]=letter;
        letter++;
        value.push_back(key);
    }
    result.add("apple", value);
    result.add("bpple", value);
    result.add("cpple", value);
    result.add("dpple", value);
    result.add("epple", value);
    result.print(std::cout);
}