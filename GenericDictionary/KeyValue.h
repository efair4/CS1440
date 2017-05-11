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
    void setDeleted(){m_deleted=true;};     //Sets the value of m_deleted to true
    bool getDeleted()const{return m_deleted;};//Returns the value of m_deleted
private:
    K m_key;                                //Holds the key for a KeyValue object
    V m_value;                              //Hold the value for a KeyValue object
    bool m_deleted=false;                   //A boolean value that denotes whether 
                                            //the KeyValue has been "deleted"
};

template <typename K, typename V>
KeyValue<K,V>::KeyValue(K key, V value) : m_key(key), m_value(value)
{};


template <typename K, typename V>
KeyValue<K,V>::KeyValue(const KeyValue<K,V>& object) {
    m_key=object.m_key;
    m_value=object.m_value;
    m_deleted=object.m_deleted;
};
#endif //GENERICDICTIONARY_KEYVALUE_H
