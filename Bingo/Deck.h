//
// Created by Stephen Clyde on 2/16/17.
//

#ifndef BINGO_DECK_H
#define BINGO_DECK_H

#include "Card.h"
#include <ostream>

// TODO: Extend this definition as you see fit

class Deck {

public:
    Deck(int cardSize, int cardCount, int numberMax); //Constructor for the Deck class.
    ~Deck();  //Destructor for the Deck class.
    void printDeck(std::ostream& out) const; //Prints all cards in m_cards by repeatedly calling printCard.
    void printCard(std::ostream& out, int cardIndex) const;  //Prints a single card to the given output stream by
    //calling that card's print function.
    int getNumCards() const {return m_numCards;};  //Returns the number of created cards.

private:
    const int m_cardSize;  //Member variable to hold the sent cardSize value.
    const int m_cardCount;  //Member variable to hold the sent cardCount value.
    const int m_numberMax;  //Member variable to hold the sent numberMax value.
    int m_numCards=0;  //Keeps track of the number of cards that have been created.
    Card** m_cards;  //Holds the set of cards that are created.
    void createCards();  //Creates the correct number of cards and adds them to m_cards.
    bool checkSize() const;  //Checks to ensure that the given cardSize is in the range.
    bool checkCount() const;  //Checks to ensure that the given cardCount is in the range.
    bool checkMax() const; //Checks to ensure that the given numberMax is in the range.
};

#endif //BINGO_DECK_H
