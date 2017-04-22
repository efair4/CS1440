//
// Created by Ember Fairbanks on 4/18/2017.
//

#ifndef ITAK_DENIALOFSERVICEANALYZER_H
#define ITAK_DENIALOFSERVICEANALYZER_H

#include "Analyzer.h"

class DenialOfServiceAnalyzer : public Analyzer{
public:
    DenialOfServiceAnalyzer(std::ifstream& in, Configuration config):
    Analyzer(in, config)
    {}
    ResultSet run(std::ifstream&);
private:
    Dictionary<std::string,Dictionary<long, int>> file(std::ifstream&);
    ResultSet detectAttack(Dictionary<std::string, Dictionary<long, int>>&);
};

#endif //ITAK_DENIALOFSERVICEANALYZER_H
