//
// Created by Stephen Clyde on 2/16/17.
//

#include "Deck.h"

Deck::Deck(int cardSize, int cardCount, int numberMax) : m_cardSize(cardSize), m_cardCount(cardCount), m_numberMax(numberMax)
{
    // TODO: Implement
    if(checkCount() && checkSize() && checkMax()){
        m_cards = new Card *[m_cardCount];
        createCards();

    }
    else {
        if(getNumCards()==0){
            std::cout<<"Invalid parameters, no cards were created. Please delete the empty deck."<<std::endl;
        }
        return;
    }
}

Deck::~Deck()
{
    // TODO: Implement
    for(int i=0;i<m_numCards;i++){
        m_cards[i]->deleteEngine();
        delete m_cards[i];
    }
    delete [] m_cards;
}

void Deck::createCards(){
    for(int i=0;i<m_cardCount;i++) {
            m_cards[m_numCards++] = new Card(m_cardSize, m_numberMax);
    }
}

void Deck::printDeck(std::ostream& out) const
{
    // TODO: Implement
    for(int i=1;i<=m_cardCount;i++){
        printCard(out, i);
    }
}

void Deck::printCard(std::ostream& out, int cardIndex) const
{
    // TODO: Implement
    if(cardIndex>m_cardCount){
        return;
    }
    else {
        out << "Card " << cardIndex << std::endl;
        m_cards[cardIndex - 1]->print(out);
    }
}

bool Deck::checkSize() const {
    return !(m_cardSize < 3 || m_cardSize > 15);
}

bool Deck::checkCount() const {
    return !(m_cardCount<3 || m_cardCount>10000);
}

bool Deck::checkMax() const {
    int min=2*(m_cardSize*m_cardSize);
    int max=2*min;
    return !(m_numberMax < min || m_numberMax > max);
}



