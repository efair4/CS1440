//
// Created by Ember Fairbanks on 3/29/2017.
//I altered this dictionary to be implemented as a Hash Table
//

#ifndef GENERICDICTIONARY_DICTIONARY_H
#define GENERICDICTIONARY_DICTIONARY_H

#include <iostream>
#include "KeyValue.h"
#include "BinTree.h"

template <typename K, typename V>
class Dictionary {
public:
    Dictionary();                               //Default constructor
    Dictionary(int);                            //Non-default constructor
    ~Dictionary();                              //Destructor
    Dictionary(const Dictionary<K,V>&);         //Copy constructor
    void add(K, V);                             //Creates a new KeyValue and adds it to m_dict
    KeyValue<K, V> getByKey(K);                 //Returns a KeyValue by key
    KeyValue<K, V> getByIndex(int);             //Returns a KeyValue by index
    void removeByKey(K);                        //Removes a KeyValue by key
    void removeByIndex(int);                    //Removes a KeyValue by index
    int getCount() const {return m_dictAdded;}; //Returns the number of items in m_dict
    int getSize() const {return m_dictSize;};   //Returns the size of m_dict
    void printDict();                           //Prints the contents of m_dict
    int doubleHash(K, bool);                    //Double hash function for the hash table
    void rehash();                              //Resizes the dictionary

private:
    const int DEFAULT_SIZE=10;                  //Default dictionary size
    const int DEFAULT_COUNT=0;                  //Default count for the number of items added

    KeyValue<K, V>** m_dict;                    //Dictionary of KeyValues
    BinTree m_tree;                             //Binary Search Tree used to look up index values that have been used
    int m_dictSize;                             //Holds the size of m_dict
    int m_dictAdded;                            //Holds the number of non-deleted items in m_dict
    int m_spotsFilled;                          //Holds the number of deleted and non-deleted items in m_dict

    void validateIndex(int) const;              //Checks to make sure the index given is in range
};

template <typename K, typename V>
Dictionary<K, V>::Dictionary() : m_dictAdded(DEFAULT_COUNT), m_spotsFilled(DEFAULT_COUNT){
    m_dictSize=DEFAULT_SIZE;
    m_dict=new KeyValue<K,V>*[m_dictSize];
};

template <typename K, typename V>
Dictionary<K, V>::Dictionary(int size) : m_dictAdded(DEFAULT_COUNT), m_spotsFilled(0){
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
    if(m_spotsFilled!=0){
        for(int i=0;i<m_dictSize;i++){
            m_dict[i]=nullptr;
            delete m_dict[i];
        }
        delete [] m_dict;
    }
};

template <typename K, typename V>
Dictionary<K,V>::Dictionary(const Dictionary<K,V>& object){
    m_dictSize=object.m_dictSize;
    m_dictAdded=object.m_dictAdded;
    m_spotsFilled=object.m_spotsFilled;
    m_dict=new KeyValue<K,V>*[m_dictSize];
    for(int i=0;i<m_dictSize;i++){
        m_dict[i]=object.m_dict[i];
    }
};

template <typename K, typename V>
void Dictionary<K, V>::add(K key, V value){
    bool added=true;
    try{
        doubleHash(key, true);
    }catch(const char* ex){
        added=false;
    }
    if(!added){
        KeyValue<K,V>* newItem=new KeyValue<K,V>(key, value);
        int offset=doubleHash(key, false);
        m_dict[offset]=newItem;
        m_dictAdded++;
        m_spotsFilled++;
        m_tree.insert(offset);
        if(m_spotsFilled==m_dictSize/2){
            rehash();
        }
        return;
    }
    std::cout << "Key, \"" << key << "\", has already been added. Nothing in the "
           "dictionary has changed." << std::endl;

};

template <typename K, typename V>
KeyValue<K, V> Dictionary<K, V>::getByKey(K key) {
    int index;
    try {
        index = doubleHash(key, true);
    }catch(char* ex){
        throw ex;
    }
    return *m_dict[index];
};

template <typename K, typename V>
KeyValue<K, V> Dictionary<K, V>::getByIndex(int index) {
    try{
        validateIndex(index);
    }catch(char* ex){
        throw ex;
    }
    if(!m_tree.search(index)){
        throw "Item not found";
    }
    return *m_dict[index];
};

template <typename K, typename V>
void Dictionary<K, V>::removeByKey(K key){
    int index;
    try{
        index=doubleHash(key, true);
    }catch(const char* ex){
        std::cout<<ex<<std::endl;
        return;
    }
    m_dict[index]->setDeleted();
    m_dictAdded--;
};

template <typename K, typename V>
void Dictionary<K, V>::removeByIndex(int index){
    try{
        validateIndex(index);
    }catch(const char* ex){
        std::cout<<ex<<std::endl;
        return;
    }
    if(!m_tree.search(index)){
        std::cout<<"No Item found at index "<<index<<std::endl;
    }
    else{
        m_dict[index]->setDeleted();
        m_dictAdded--;
    }
};

template <typename K, typename V>
void Dictionary<K,V>::printDict() {
    if(m_dictAdded!=0){
        for(int i=0;i<m_dictSize;i++){
            if(m_tree.search(i) && !m_dict[i]->getDeleted()){
                std::cout<<i<<": ["<<m_dict[i]->getKey()<<", "
                         << m_dict[i]->getValue()<<"]"<<std::endl;
            }
        }
        std::cout<<std::endl;
    }
};

template <typename K, typename V>
void Dictionary<K,V>::validateIndex(int index) const {
    if(index<0 || index>=m_dictSize){
        throw "\nIndex is out of range\n";
    }
    else return;
};

template <typename K, typename V>
int Dictionary<K,V>::doubleHash(K key, bool find){
    bool found=false;
    unsigned int keyHash=std::hash<K>()(key);
    K thingToFind=key;

    int increment=1+keyHash%(m_dictSize-2);
    int num=keyHash%m_dictSize;
    int offset=(num+increment)%m_dictSize;
    int count = 0;

    if(!find){
        while(count<m_dictSize){
            if(!m_tree.search(offset)){
                return offset;
            }
            else{
                count++;
                offset = (offset + increment) % m_dictSize;
            }
        }
    }
    else {
        count = 0;
        while (!found && count < m_dictSize && m_tree.search(offset)) {
            if (m_dict[offset]->getKey() == thingToFind) {
                found = true;
            } else {
                offset = (offset + increment) % m_dictSize;
                count++;
            }
        }
        if(!found){
            throw "Key not found";
        }
    }
    return offset;
};

template <typename K, typename V>
void Dictionary<K,V>::rehash(){
    m_dictSize *= 2;
    KeyValue<K, V>** newTable = new KeyValue<K, V>*[m_dictSize];
    KeyValue<K, V>** oldTable = new KeyValue<K, V>*[m_dictSize/2];
    for (int i = 0; i<m_dictSize/2; i++) {
        oldTable[i]=m_dict[i];
    }
    delete[] m_dict;
    BinTree tempTree=m_tree;
    m_tree.removeAll();
    m_dict = newTable;
    m_dictAdded = 0;
    m_spotsFilled=0;
    for (int i = 0; i < m_dictSize/2; i++) {
        if (tempTree.search(i)) {
            add(oldTable[i]->getKey(), oldTable[i]->getValue());
        }
    }
    delete[] oldTable;
};
#endif //GENERICDICTIONARY_DICTIONARY_H
