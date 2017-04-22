//
// Created by Ember Fairbanks on 4/18/2017.
//

#include <sstream>
#include <algorithm>
#include "Utils.h"

std::vector<std::string> split(std::string& string, char del, int expNum){
    std::vector<std::string> result;
    std::stringstream ss;
    ss.str(string);
    std::string temp;
    int i=0;
    while(std::getline(ss, temp, del) && i<expNum){
        temp=trim(temp);
        result.push_back(temp);
        i++;
    }
    if(i==expNum) {
        return result;
    }
    else{
        throw "Invalid input";
    }
}

std::string leftTrim(const std::string &inputStr) {
    std::string str = inputStr;
    auto it2 =  std::find_if( str.begin() , str.end() , IsNotWhiteSpace );
    str.erase( str.begin() , it2);
    return str;
}

std::string rightTrim(const std::string &inputStr)
{
    std::string str = inputStr;
    auto it1 =  std::find_if( str.rbegin() , str.rend() , IsNotWhiteSpace );
    str.erase( it1.base() , str.end() );
    return str;
}

std::string trim(const std::string& str) {
    return leftTrim(rightTrim(str));
}

bool IsNotWhiteSpace (char ch) {
    return !std::isspace<char>(ch , std::locale::classic() );
}