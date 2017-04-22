//
// Created by Ember Fairbanks on 4/18/2017.
//

#ifndef ITAK_UTILS_H
#define ITAK_UTILS_H

#include<vector>
#include<string>

std::vector<std::string> split(std::string&, char, int);
//The next 4 functions were borrowed from the GeoRegions project
std::string leftTrim(const std::string &str);
std::string rightTrim(const std::string &str);
std::string trim(const std::string& str);
bool IsNotWhiteSpace (char ch);

#endif //ITAK_UTILS_H
