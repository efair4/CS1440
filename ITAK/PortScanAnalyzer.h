//
// Created by Ember Fairbanks on 4/11/2017.
//

#ifndef ITAK_PORTSCANANALYZER_H
#define ITAK_PORTSCANANALYZER_H

#include "Analyzer.h"

class PortScanAnalyzer : public Analyzer {
public:
    PortScanAnalyzer(std::ifstream& in, Configuration config):
    Analyzer(in, config)
    {}
    ResultSet run(std::ifstream&);
private:
    Dictionary<std::string, std::vector<int>> file(std::ifstream&);
    ResultSet detectAttack(Dictionary<std::string, std::vector<int>>);
};

#endif //ITAK_PORTSCANANALYZER_H
