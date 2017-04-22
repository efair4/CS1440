//
// Created by Ember Fairbanks on 4/17/2017.
//

#include "Configuration.h"

std::string Configuration::getAsString(std::string name) {
    return getByKey(name).getValue();
}

int Configuration::getAsInt(std::string name){
    return stoi(getByKey(name).getValue());
}

double Configuration::getAsDouble(std::string name){
    return stod(getByKey(name).getValue());
}