//
// Created by Ember Fairbanks on 2/27/2017.
//

#ifndef BINGO_CARD_H
#define BINGO_CARD_H

#include<vector>
#include<iostream>
#include <chrono>
#include<random>

class Card {
public:
    Card(int cardSize, int numberMax); //Constructor for the Card class.
    ~Card();  //Destructor for the Card class.
    void print(std::ostream& out) const ;  //Prints the values contained in m_numbers in a grid.
    void deleteEngine(); //Destructor for the std::default_random_engine.
    int getSize()const{return m_size;};  //Returns the m_size value for testing purposes.
    int getMax()const{return m_max;};  //Returns the m_max value for testing purposes.
private:
    const int m_size;  //Member variable to hold the sent value of cardSize.
    const int m_max;  //Member variable to hold the sent value of numberMax.
    int** m_numbers;  //2d array of pointers to hold the card's values.
    std::vector<int> getRandNum();  //Returns a shuffled vector containing the numbers from 1 to m_max.
    void constructCard();  //Creates a card and stores it in m_numbers.
    static std::default_random_engine* m_engine;  //Member variable that is used to shuffle the values in
    //the getRandNum function.
};


#endif //BINGO_CARD_H
