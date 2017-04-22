//
// Created by Ember Fairbanks on 4/17/2017.
//

#include "ResultSet.h"

void ResultSet::print(std::ostream& out)const{
    std::vector<std::string> values;
    for(int i=0;i<m_itemsAdded;i++){
        out<<m_dict[i]->getKey()<<std::endl;
        values=m_dict[i]->getValue();
        for(int j=0;j<values.size();j++){
            out<<"\t"<<values[j]<<std::endl;
        }
        out<<std::endl;
    }
}