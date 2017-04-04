//
// Created by Ember Fairbanks on 3/29/2017.
//

#ifndef GENERICDICTIONARY_KEYVALUE_H
#define GENERICDICTIONARY_KEYVALUE_H
#include <iostream>

template <typename K, typename V>
class KeyValue {
public:
    KeyValue(K,V);                          //Constructor
    KeyValue(const KeyValue<K,V>&);         //Copy constructor
    K getKey() const {return m_key;};       //Returns the value of m_key
    V getValue() const {return m_value;};   //Returns the value of m_value
private:
    K m_key;                                //Holds the key for a KeyValue object
    V m_value;                              //Hold the value for a KeyValue object
};

template <typename K, typename V>
KeyValue<K,V>::KeyValue(K key, V value) : m_key(key), m_value(value)
{};


template <typename K, typename V>
KeyValue<K,V>::KeyValue(const KeyValue<K,V>& object) {
    m_key=object.m_key;
    m_value=object.m_value;
};
#endif //GENERICDICTIONARY_KEYVALUE_H
