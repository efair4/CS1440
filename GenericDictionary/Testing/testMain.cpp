//
// Created by Ember Fairbanks on 3/29/2017.
//
#include <iostream>
#include "DictionaryTester.h"
#include "KeyValueTester.h"

int main(){
    std::cout<<"Execute test cases"<<std::endl;
    DictionaryTester dictionaryTester;
    KeyValueTester keyValueTester;

    dictionaryTester.testCreateDefault();
    dictionaryTester.testCreateWithSize();
    dictionaryTester.testAdd();
    dictionaryTester.testGetters();
    dictionaryTester.testRemove();
    dictionaryTester.testResize();

    keyValueTester.testConstructorandGetters();

}
