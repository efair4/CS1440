//
// Created by Ember Fairbanks on 2/27/2017.
//

#include <cstdlib>
#include <algorithm>
#include <random>
#include <iomanip>
#include "Card.h"

std::default_random_engine* Card::m_engine=nullptr;

Card::Card(int cardSize, int numberMax) : m_size(cardSize), m_max(numberMax){
    m_numbers=new int*[m_size];
    for(int row=0;row<m_size;row++){
        m_numbers[row]=new int[m_size];
    }
    constructCard();
}

Card::~Card(){
    for(int i=0;i<m_size;i++){
        delete m_numbers[i];
    }
    delete [] m_numbers;

}

void Card::constructCard(){
    std::vector<int> randNumbers=getRandNum();
    int count=0;
    for(int i=0;i<m_size;i++){
        for(int j=0;j<m_size;j++){
            m_numbers[i][j]=0;
        }
    }
    for(int i=0;i<m_size;i++){
        for(int j=0;j<m_size;j++){
            m_numbers[i][j]=randNumbers[count];
            count++;
        }
    }
}
std::vector<int> Card::getRandNum(){
    std::vector<int> numbers;
    for(int i=1;i<=m_max;i++){
        numbers.push_back(i);
    }
    if(m_engine==nullptr){
        int seed = static_cast<int>(time(0));
        m_engine=new std::default_random_engine(seed);
    }
    std::shuffle(numbers.begin(), numbers.end(),*m_engine);

    return numbers;
}

void Card::print(std::ostream& out) const {
    for(int i=0;i<m_size;i++){
        for(int j=0;j<m_size;j++){
           out<<"["<<std::setw(5)<<m_numbers[i][j]<<"]";
        }
        out<<"\n";
    }
}

void Card::deleteEngine(){
    delete m_engine;
    m_engine=nullptr;
}