//
// Created by Ember Fairbanks on 4/17/2017.
//

#ifndef ITAK_RESULTSET_H
#define ITAK_RESULTSET_H

#include "Dictionary.h"
#include<fstream>
#include <vector>

class ResultSet : public Dictionary<std::string, std::vector<std::string>>{
public:
    void print(std::ostream&) const;
};

#endif //ITAK_RESULTSET_H
