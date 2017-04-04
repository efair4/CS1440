//
// Created by Ember Fairbanks on 3/29/2017.
//

#include "KeyValueTester.h"
#include "../KeyValue.h"

void KeyValueTester::testConstructorandGetters() {
    std::cout<<"KeyValueTester::testConstructorandGetters()"<<std::endl;
    KeyValue<int, std::string> item(68, "Camaro");
    if(item.getKey()!= 68){
        std::cout<<"Failed to correctly add key. Key was "
                <<item.getKey()<<std::endl;
    }
    if(item.getValue()!= "Camaro"){
        std::cout<<"Failed to correctly add value. Value was "
                <<item.getValue()<<std::endl;
    }

    KeyValue<std::string, std::string> item2("car", "Camaro");
    if(item2.getKey()!= "car"){
        std::cout<<"Failed to correctly add key. Key was "
                <<item2.getValue()<<std::endl;
    }
    if(item2.getValue()!= "Camaro"){
        std::cout<<"Failed to correctly add value. Value was "
                <<item2.getValue()<<std::endl;
    }

    KeyValue<double, int> item3(68.393, -37);
    if(item3.getKey()!= 68.393){
        std::cout<<"Failed to correctly add key. Key was "
                <<item3.getKey()<<std::endl;
    }
    if(item3.getValue()!= -37){
        std::cout<<"Failed to correctly add value. Value was "
                <<item3.getValue()<<std::endl;
    }

    KeyValue<std::string, double> item4("bike", -.4098239);
    if(item4.getKey()!= "bike"){
        std::cout<<"Failed to correctly add key. Key was "
                <<item4.getKey()<<std::endl;
    }
    if(item4.getValue()!= -.4098239){
        std::cout<<"Failed to correctly add value. Value was "
                <<item4.getValue()<<std::endl;
    }

    KeyValue<std::string, double> item5=item4;
    if(item5.getKey()!= "bike"){
        std::cout<<"Failed to correctly add key. Key was "
                <<item5.getKey()<<std::endl;
    }
    if(item5.getValue()!= -.4098239){
        std::cout<<"Failed to correctly add value. Value was "
                <<item5.getValue()<<std::endl;
    }

    KeyValue<char, std::string> item6('c', "cookie");
    if(item6.getKey()!= 'c'){
        std::cout<<"Failed to correctly add key. Key was "
                <<item6.getKey()<<std::endl;
    }
    if(item6.getValue()!= "cookie"){
        std::cout<<"Failed to correctly add value. Value was "
                <<item6.getValue()<<std::endl;
    }

    KeyValue<float, bool> item7(373.584, true);
    if(item7.getKey()- 373.584>.001){
        std::cout<<"Failed to correctly add key. Key was "
                <<item7.getKey()<<std::endl;
    }
    if(item7.getValue()!= true){
        std::cout<<"Failed to correctly add value. Value was "
                <<item7.getValue()<<std::endl;
    }
}
