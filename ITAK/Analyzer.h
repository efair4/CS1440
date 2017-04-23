//
// Created by Ember Fairbanks on 4/11/2017.
//

#ifndef ITAK_ANALYZER_H
#define ITAK_ANALYZER_H

#include "ResultSet.h"
#include "Configuration.h"
#include<fstream>

class Analyzer {
public:
    Analyzer(Configuration config): m_config(config){}
    virtual ResultSet run(std::ifstream&)=0;

protected:
    Configuration m_config;
};

#endif //ITAK_ANALYZER_H
