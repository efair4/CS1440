//
// Created by Ember Fairbanks on 3/29/2017.
//

#ifndef GENERICDICTIONARY_DICTIONARY_H
#define GENERICDICTIONARY_DICTIONARY_H

#include <stdexcept>
#include <iostream>
#include "KeyValue.h"

template <typename K, typename V>
class Dictionary {
public:
    Dictionary();
    Dictionary(int);
    ~Dictionary();
    Dictionary(const Dictionary<K,V>&);
    void add(K, V);
    KeyValue<K, V> getByKey(K) const;
    KeyValue<K, V> getByIndex(int) const;
    void removeByKey(K);
    void removeByIndex(int);
    int getCount() const {return m_itemsAdded;};
    int getSize() const {return m_dictSize;};
    void printDict();

private:
    const int DEFAULT_SIZE=10;
    const int DEFAULT_COUNT=0;

    KeyValue<K, V>** m_dict;
    int m_dictSize;
    int m_itemsAdded;

    void resize();
    int findKey(K) const;
    void validateIndex(int) const;
};

template <typename K, typename V>
Dictionary<K, V>::Dictionary() : m_itemsAdded(DEFAULT_COUNT){
    m_dictSize=DEFAULT_SIZE;
    m_dict=new KeyValue<K,V>*[m_dictSize];
};

template <typename K, typename V>
Dictionary<K, V>::Dictionary(int size) : m_itemsAdded(DEFAULT_COUNT){
    if(size<=0){
        m_dictSize=DEFAULT_SIZE;
        std::cout<<"Dictionary size provided was less than or equal to 0. "
                "Size has been set to 10."<<std::endl;

    }
    else m_dictSize=size;
    m_dict=new KeyValue<K,V>*[m_dictSize];
};

template <typename K, typename V>
Dictionary<K, V>::~Dictionary(){
    if(m_itemsAdded!=0){
        for(int i=0;i<m_itemsAdded;i++){
            delete m_dict[i];
        }
        delete [] m_dict;
    }
};

template <typename K, typename V>
Dictionary<K,V>::Dictionary(const Dictionary<K,V>& object){
    m_dictSize=object.m_dictSize;
    m_itemsAdded=object.m_itemsAdded;
    m_dict=new KeyValue<K,V>*[m_dictSize];
    for(int i=0;i<m_itemsAdded;i++){
        m_dict[i]=object.m_dict[i];
    }
    std::cout<<"Copy constructor"<<std::endl;
};

template <typename K, typename V>
void Dictionary<K, V>::add(K key, V value){
    bool added=true;
    try{
        findKey(key);
    }catch(const char* ex){
        added=false;
    }
    if(!added){
        KeyValue<K,V>* newItem=new KeyValue<K,V>(key, value);
        m_dict[m_itemsAdded++]=newItem;
        if(m_itemsAdded==m_dictSize){
            resize();
        }
        return;
    }
    std::cout << "Key, \"" << key << "\", has already been added. Nothing in the "
           "dictionary has changed." << std::endl;

};

template <typename K, typename V>
KeyValue<K, V> Dictionary<K, V>::getByKey(K key) const {
    int index;
    index = findKey(key);
    return *m_dict[index];
};

template <typename K, typename V>
KeyValue<K, V> Dictionary<K, V>::getByIndex(int index) const {
    validateIndex(index);
    return *m_dict[index];
};

template <typename K, typename V>
void Dictionary<K, V>::removeByKey(K key){
    int index;
    try{
        index=findKey(key);
    }catch(const char* ex){
        std::cout<<ex<<std::endl;
        return;
    }
    for(int i=index;i<m_itemsAdded;i++){
        m_dict[i]=m_dict[i+1];
    }
    m_itemsAdded--;
    m_dict[m_itemsAdded]=nullptr;
};

template <typename K, typename V>
void Dictionary<K, V>::removeByIndex(int index){
    try{
        validateIndex(index);
    }catch(const char* ex){
        std::cout<<ex<<std::endl;
        return;
    }
    for(int i=index;i<m_itemsAdded;i++){
        m_dict[i]=m_dict[i+1];
    }
    m_itemsAdded--;
    m_dict[m_itemsAdded]=nullptr;
};

template <typename K, typename V>
int Dictionary<K,V>::findKey(K key) const{
    bool found=false;
    int count=0;
    while(!found && count<m_itemsAdded){
        if(m_dict[count]->getKey()==key){
            found=true;
        }
        else{
            count++;
        }
    }
    if(!found){
        throw "\nKey was not found\n";
    }
    else {
        return count;
    }
};

template <typename K, typename V>
void Dictionary<K,V>::resize(){
    m_dictSize*=2;
    KeyValue<K,V>** temp=new KeyValue<K,V>*[m_dictSize];
    for(int i=0;i<m_itemsAdded;i++){
        temp[i]=m_dict[i];
    }
    delete [] m_dict;
    m_dict=temp;
};

template <typename K, typename V>
void Dictionary<K,V>::printDict(){
    if(m_itemsAdded!=0){
        for(int i=0;i<m_itemsAdded;i++){
            std::cout<<i<<": ["<<m_dict[i]->getKey()<<", "
                     << m_dict[i]->getValue()<<"]"<<std::endl;
        }
        std::cout<<std::endl;
    }
};

template <typename K, typename V>
void Dictionary<K,V>::validateIndex(int index) const {
    if(index<0 || index>=m_itemsAdded){
        throw "\nIndex is out of range\n";
    }
    else return;
};
#endif //GENERICDICTIONARY_DICTIONARY_H
