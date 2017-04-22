//
// Created by Ember Fairbanks on 4/11/2017.
//

#include "PortScanAnalyzer.h"
#include "Utils.h"

ResultSet PortScanAnalyzer::run(std::ifstream& infile) {
    ResultSet result;
    Dictionary<std::string, std::vector<int>> data=file(infile);
    try {
        result = detectAttack(data);
    }catch(char* ex){
        throw ex;
    }

    return result;
}

Dictionary<std::string, std::vector<int>> PortScanAnalyzer::file(std::ifstream& infile){
    Dictionary<std::string, std::vector<int>> file;
    std::string string;
    std::vector<std::string> splitString;
    std::string ip;
    int desPort;
    std::vector<int> ports;
    while(!infile.eof()){
        std::getline(infile, string);
        try {
            splitString = split(string, ',', 4);
        }catch(char*){
            continue;
        }
        ip=splitString[1];
        desPort=stoi(splitString[3]);
        ports.push_back(desPort);
        try{
            file.add(ip, ports);
        }catch(char* ex){
            ports=file.getByKey(ip).getValue();
            bool found=false;
            int i=0;
            while(!found && i<ports.size()){
                if(ports[i]==desPort){
                    found=true;
                }
                else i++;
            }
            if(!found){
                file.getByKey(ip).getValue().push_back(desPort);
            }
        }
    }
    return file;
};

ResultSet PortScanAnalyzer::detectAttack(Dictionary<std::string, std::vector<int>> data) {
    ResultSet result;
    std::vector<std::string> container;
    int likelyThresh;
    int possibleThresh;
    try{
        likelyThresh=stoi(m_config.getByKey("Likely Attack Port Count").getValue());
        possibleThresh=stoi(m_config.getByKey("Possible Attack Port Count").getValue());
    }catch(char* ex){
        throw ex;
    }
    try {
        result.add(new KeyValue<std::string, std::vector<std::string>>("Likely Attackers", container));
        result.add(new KeyValue<std::string, std::vector<std::string>>("Possible Attackers", container));
        result.add(new KeyValue<std::string, std::vector<std::string>>("Attack Periods", container));
    }catch(char* ex){
        throw ex;
    }
    int numPorts;
    for(int i=0;i<data.getCount();i++){
        std::string ip=data.getByIndex(i).getKey();
        numPorts=data.getByIndex(i).getValue().size();
        if(numPorts>=likelyThresh){
            result.getByKey("Likely Attack Port Count").getValue().push_back(ip);
        }
        else if(numPorts>=possibleThresh){
            result.getByKey("Possible Attack Port Count").getValue().push_back(ip);
        }
    }
    return result;
}