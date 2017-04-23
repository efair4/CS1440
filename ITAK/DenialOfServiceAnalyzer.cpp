//
// Created by Ember Fairbanks on 4/11/2017.
//

#include "DOSAnalyzer.h"
#include "Utils.h"
#include<vector>

ResultSet DenialOfServiceAnalyzer::run(std::ifstream& infile) {
    ResultSet result;
    Dictionary<std::string, Dictionary<long, int>> data=file(infile);
    try {
        result = detectAttack(data);
    }catch(char* ex){
        throw ex;
    }

    return result;
}

Dictionary<std::string, Dictionary<long, int>> DenialOfServiceAnalyzer::file(std::ifstream& infile){
    Dictionary<std::string, Dictionary<long, int>> file;
    Dictionary<long, int> inner;
    std::string string;
    std::vector<std::string> splitString;
    std::string ip;
    long time;
    while(!infile.eof()){
        std::getline(infile, string);
        try {
            splitString = split(string, ',', 4);
        }catch(char*){
            continue;
        }
        time=stol(splitString[0]);
        ip=splitString[1];
        inner.add(time, 0);
        try{
            file.add(ip, inner);
        }catch(char* ex){
            inner=file.getByKey(ip).getValue();
            bool found=false;
            int i=0;
            while(!found && i<inner.getCount()){
                if(inner.getByIndex(i).getKey()==time){
                    found=true;
                    int cnt=inner.getByKey(time).getValue();
                    inner.getByKey(time).setValue(cnt+1);
                }
                else i++;
            }
        }
    }
    return file;
};

ResultSet DenialOfServiceAnalyzer::detectAttack(Dictionary<std::string, Dictionary<long, int>> & data) {
    ResultSet result;
    std::vector<std::string> container;
    Dictionary<long, int> inner;
    long startTime;
    int timeframe;
    int likelyThresh;
    int possibleThresh;
    int count=0;
    try {
        timeframe = m_config.getAsInt("Timeframe");
        likelyThresh = m_config.getAsInt("Likely Attack Message Count");
        possibleThresh = m_config.getAsInt("Possible Attack Message Count");
    }catch(char* ex){
        throw ex;
    }
    try {
        result.add(new KeyValue<std::string, std::vector<std::string>>("Likely Attackers", container));
        result.add(new KeyValue<std::string, std::vector<std::string>>("Possible Attackers", container));
        result.add(new KeyValue<std::string, std::vector<std::string>>("Attack Periods", container));
        result.add(new KeyValue<std::string, std::vector<std::string>>("Timeframe", container));
    }catch(char* ex){
        throw ex;
    }
    result.getByKey("Timeframe").getValue().push_back(std::to_string(timeframe));
    for(int i=0;i<data.getCount();i++){
        inner=data.getByIndex(i).getValue();
        startTime=inner.getByIndex(i).getKey();
        int j=startTime;
        int innerCount=0;
        while(j<startTime+timeframe){
            count+=inner.getByIndex(innerCount).getValue();
            innerCount++;
            j=inner.getByIndex(innerCount).getKey();
        }
        if(count>=likelyThresh){
            result.getByKey("Likely Attackers").getValue().push_back(data.getByIndex(i).getKey());
            std::string attackPer=std::to_string(startTime)+"-"+std::to_string(startTime+timeframe);
            result.getByKey("Attack Periods").getValue().push_back(attackPer);
        }
        else if(count>=possibleThresh){
            result.getByKey("Possible Attackers").getValue().push_back(data.getByIndex(i).getKey());
            std::string attackPer=std::to_string(startTime)+"-"+std::to_string(startTime+timeframe);
            result.getByKey("Attack Periods").getValue().push_back(attackPer);
        }
    }

    return result;
}