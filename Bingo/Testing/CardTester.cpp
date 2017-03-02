//
// Created by Ember Fairbanks on 3/1/2017.
//

#include "CardTester.h"
#include "../Card.h"

void CardTester::testCardConstructor() {
    Card testCard(5, 57);
    if(testCard.getSize()!=5){
        std::cout<<"Failure, testCard size should be 5. testCard.getSize()="
                 <<testCard.getSize()<<std::endl;
    }
    if(testCard.getMax()!=57){
        std::cout<<"Failure, testCard max should be 57. testCard.getMax()="
                 <<testCard.getMax()<<std::endl;
    }

    Card testCard1(12, 500);
    if(testCard1.getSize()!=12){
        std::cout<<"Failure, testCard1 size should be 12. testCard.getSize()="
                 <<testCard1.getSize()<<std::endl;
    }
    if(testCard1.getMax()!=500){
        std::cout<<"Failure, testCard1 max should be 500. testCard.getMax()="
                 <<testCard1.getMax()<<std::endl;
    }
}