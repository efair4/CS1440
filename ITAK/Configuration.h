//
// Created by Ember Fairbanks on 4/17/2017.
//

#ifndef ITAK_CONFIGURATION_H
#define ITAK_CONFIGURATION_H

#include "Dictionary.h"

class Configuration : public Dictionary<std::string,std::string>{
public:
    std::string getAsString(std::string);
    int getAsInt(std::string);
    double getAsDouble(std::string);
};


#endif //ITAK_CONFIGURATION_H
