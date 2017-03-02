//
// Created by Ember Fairbanks on 2/28/2017.
//

#include <iostream>
#include "DeckTester.h"
#include "../Deck.h"

void DeckTester::testDeckConstructor() {
    std::cout<<"Test Suite: DeckTester::testDeckConstructor"<<std::endl;

    Deck testDeck(2, 5, 299);
    if(testDeck.getNumCards()!=0){
        std::cout<<"Failure. No cards should have been created. getNumCards: "
                 <<testDeck.getNumCards()<<std::endl;
    }

    Deck testDeck2(3, 17, -4);
    if(testDeck2.getNumCards()!=0){
        std::cout<<"Failure. No cards should have been created. getNumCards: "
                 <<testDeck2.getNumCards()<<std::endl;
    }
}