//
// Created by Ember Fairbanks on 3/29/2017.
//

#include "DictionaryTester.h"
#include "../Dictionary.h"

void DictionaryTester::testCreateDefault() {
    std::cout<<"DictionaryTester::testCreateDefault()"<<std::endl;
    Dictionary<int, std::string> intStringDict;
    if(intStringDict.getSize()!=10){
        std::cout<<"Failure, default size should be 10 but was "<<
                  intStringDict.getSize()<<std::endl;
    }
    if(intStringDict.getCount()!=0){
        std::cout<<"Failure, default count should be 0 but was "<<
                 intStringDict.getCount()<<std::endl;
    }

    Dictionary<std::string, std::string> strStrDict;
    if(strStrDict.getSize()!=10){
        std::cout<<"Failure, default size should be 10 but was "<<
                 strStrDict.getSize()<<std::endl;
    }
    if(strStrDict.getCount()!=0){
        std::cout<<"Failure, default count should be 0 but was "<<
                 strStrDict.getCount()<<std::endl;
    }

    Dictionary<std::string, int> strIntDict;
    if(strIntDict.getSize()!=10){
        std::cout<<"Failure, default size should be 10 but was "<<
                 strIntDict.getSize()<<std::endl;
    }
    if(strIntDict.getCount()!=0){
        std::cout<<"Failure, default count should be 0 but was "<<
                 strIntDict.getCount()<<std::endl;
    }

    Dictionary<int, int> intIntDict;
    if(intIntDict.getSize()!=10){
        std::cout<<"Failure, default size should be 10 but was "<<
                 intIntDict.getSize()<<std::endl;
    }
    if(intIntDict.getCount()!=0){
        std::cout<<"Failure, default count should be 0 but was "<<
                 intIntDict.getCount()<<std::endl;
    }
}

void DictionaryTester::testCreateWithSize() {
    std::cout<<"DictionaryTester::testCreateWithSize()"<<std::endl;
    Dictionary<int, std::string> intStringDict(-1);
    if(intStringDict.getSize()!=10){
        std::cout<<"Failure, size should be 10 but was "<<
                 intStringDict.getSize()<<std::endl;
    }
    if(intStringDict.getCount()!=0){
        std::cout<<"Failure, default count should be 0 but was "<<
                 intStringDict.getCount()<<std::endl;
    }

    Dictionary<std::string, std::string> strStrDict(2983);
    if(strStrDict.getSize()!=2983){
        std::cout<<"Failure, size should be 2983 but was "<<
                 strStrDict.getSize()<<std::endl;
    }
    if(strStrDict.getCount()!=0){
        std::cout<<"Failure, default count should be 0 but was "<<
                 strStrDict.getCount()<<std::endl;
    }

    Dictionary<std::string, int> strIntDict(1);
    if(strIntDict.getSize()!=1){
        std::cout<<"Failure, size should be 1 but was "<<
                 strIntDict.getSize()<<std::endl;
    }
    if(strIntDict.getCount()!=0){
        std::cout<<"Failure, default count should be 0 but was "<<
                 strIntDict.getCount()<<std::endl;
    }

    Dictionary<int, int> intIntDict(0);
    if(intIntDict.getSize()!=10){
        std::cout<<"Failure, default size should be 10 but was "<<
                 intIntDict.getSize()<<std::endl;
    }
    if(intIntDict.getCount()!=0){
        std::cout<<"Failure, default count should be 0 but was "<<
                 intIntDict.getCount()<<std::endl;
    }
}

void DictionaryTester::testAdd(){
    std::cout<<"DictionaryTester::testAdd()"<<std::endl;
    Dictionary<int, int> intIntDict;
    intIntDict.add(5,2);
    intIntDict.add(39853,-22732);
    intIntDict.add(55,98032);
    intIntDict.add(-432,2);
    intIntDict.add(799049,-98222);
    intIntDict.add(-83385,22456);

    try {
        KeyValue<int, int> keyNeg432 = intIntDict.getByKey(-432);
        if(keyNeg432.getKey()!=-432){
            std::cout<<"Failure, key should have been -432 but was "
                     <<keyNeg432.getKey()<<std::endl;
        }
        if(keyNeg432.getValue()!=2){
            std::cout<<"Failure, value should have been 2 but was "
                     <<keyNeg432.getValue()<<std::endl;
        }
    }catch(const char* ex){
        std::cout<<ex<<std::endl;
    }


    Dictionary<std::string, double> strDouble;
    strDouble.add("zero", .1902);
    strDouble.add("one", 7);
    strDouble.add("two", 6.239);
    strDouble.add("three", -55.293);
    strDouble.add("four", -349);
    strDouble.add("five", 345.20948930223984);
    strDouble.add("six", .3393333);
    strDouble.add("one", 883);

    try {
        KeyValue<std::string, double> three = strDouble.getByKey("three");
        if (three.getKey() != "three") {
            std::cout << "Failure, key should have been three but was "
                      << three.getKey() << std::endl;
        }
        if (three.getValue() - (-55.239) > .001) {
            std::cout << "Failure, value should have been -55.239 but was "
                      << three.getValue() << std::endl;
        }
    }catch(const char* ex){
        std::cout<<ex<<std::endl;
    }
}

void DictionaryTester::testGetters(){
    std::cout<<"DictionaryTester::testGetters()"<<std::endl;
    Dictionary<std::string, std::string> dict;
    dict.add("sport", "basketball");
    dict.add("book", "Harry Potter");
    dict.add("hammock place","tree");
    dict.add("sport", "soccer");

    try {
        KeyValue<std::string, std::string> index5 = dict.getByIndex(5);
    } catch(const char* ex){
        std::cout<<ex<<std::endl;
    }
    try {
        KeyValue<std::string, std::string> index48 = dict.getByIndex(48);
    }catch(const char* ex){
        std::cout<<ex<<std::endl;
    }
    try {
        std::cout<<"Key=shoe: "<<dict.getByKey("shoe").getValue()<<std::endl;
    }catch(const char* ex){
        std::cout<<ex<<std::endl;
    }
    try {
        KeyValue<std::string, std::string> index2 = dict.getByIndex(2);
        if (index2.getKey() != "hammock place") {
            std::cout << "Failure, key should have been hammock place but was "
                      << index2.getKey() << std::endl;
        }
        if (index2.getValue() != "tree") {
            std::cout << "Failure, value should have been tree but was "
                      << index2.getValue() << std::endl;
        }
    }catch(const char* ex){
        std::cout<<ex<<std::endl;
    }

    if(dict.getCount()!=3){
        std::cout<<"Failure, count should have been 3 but was "
                 <<dict.getCount()<<std::endl;
    }
   if(dict.getSize()!=10){
        std::cout<<"Failure, size should have been 10 but was "
                 <<dict.getSize()<<std::endl;
    }

    try {
        KeyValue<std::string, std::string> keySport = dict.getByKey("sport");
        if (keySport.getValue() != "basketball") {
            std::cout << "Failure, value should have been basketball but was "
                      << keySport.getValue() << std::endl;
        }
    }catch(const char* ex){
        std::cout<<ex<<std::endl;
    }

    Dictionary<int, int> dict2(15);
    for(int i=0;i<7;i++){
        dict2.add(i,i);
    }

    try {
        if (dict2.getCount() != 7) {
            std::cout << "Failure, count should have been 7 but was "
                      << dict2.getCount() << std::endl;
        }
        if (dict2.getSize() != 30) {
            std::cout << "Failure, size should have been 30 but was "
                      << dict2.getSize() << std::endl;
        }
    }catch(const char* ex){
        std::cout<<ex<<std::endl;
    }

    try {
        KeyValue<int, int> key5 = dict2.getByKey(5);
        if (key5.getKey() != 5) {
            std::cout << "Failure, key should have been 5 but was "
                      << key5.getKey() << std::endl;
        }
        if (key5.getValue() != 5) {
            std::cout << "Failure, value should have been 5 but was "
                      << key5.getValue() << std::endl;
        }
    }catch(const char* ex){
        std::cout<<ex<<std::endl;
    }
}

void DictionaryTester::testRemove(){
    std::cout<<"DictionaryTester::testRemove()"<<std::endl;
    Dictionary<std::string, std::string> dict(5);
    dict.add("sport", "basketball");
    dict.add("book", "Harry Potter");
    dict.add("hammock place","tree");
    dict.add("color", "blue");
    dict.add("food", "bread");
    dict.add("fruit", "apple");

    if(dict.getCount()!=6){
        std::cout<<"Failure, count should be 6 but was "
                 <<dict.getCount()<<std::endl;
    }
    if(dict.getSize()!=20){
        std::cout<<"Failure, size should be 20 but was "
                 <<dict.getSize()<<std::endl;
    }

    dict.removeByIndex(4);
    dict.removeByKey("fruit");
    dict.removeByKey("book");

    if(dict.getCount()!=4){
        std::cout<<"Failure, count should be 4 but was "
                 <<dict.getCount()<<std::endl;
    }
    if(dict.getSize()!=20){
        std::cout<<"Failure, size should be 20 but was "
                 <<dict.getSize()<<std::endl;
    }

    Dictionary<double, std::string> strDouble;
    strDouble.add(.1902,"zero");
    strDouble.add(7,"one");
    strDouble.add(6.239,"two");
    strDouble.add(-55.293,"three");
    strDouble.add(-349,"four");
    strDouble.add(345.20948930223984,"five");
    strDouble.add(.3393333,"six");

    strDouble.removeByKey(6.239);
    strDouble.removeByIndex(2);

    if(strDouble.getCount()!=5){
        std::cout<<"Failure, count should be 5 but was "
                 <<strDouble.getCount()<<std::endl;
    }
}

void DictionaryTester::testResize(){
    std::cout<<"DictionaryTester::testResize()"<<std::endl;
    Dictionary<int, int> intIntDict;
    for(int i=0;i<9;i++){
        intIntDict.add(i, i);
    }
    if(intIntDict.getSize()!=20){
        std::cout<<"Failure, size should have been 20 but was "
                 <<intIntDict.getSize()<<std::endl;
    }
    intIntDict.add(38,102);
    if(intIntDict.getSize()!=40){
        std::cout<<"Failure, size should have been 40 but was "
                 <<intIntDict.getSize()<<std::endl;
    }
    if(intIntDict.getCount()!=10){
        std::cout<<"Failure, count should have been 10 but was "
                 <<intIntDict.getCount()<<std::endl;
    }

    Dictionary<int, int> dict(1000);
    for(int i=0;i<1000;i++){
        dict.add(i,i);
    }
    if(dict.getCount()!=1000){
        std::cout<<"Failure, count should have been 1000 but was "
                 <<dict.getCount()<<std::endl;
    }
    if(dict.getSize()!=4000){
        std::cout<<"Failure, size should have been 4000 but was "
                 <<dict.getSize()<<std::endl;
    }

}