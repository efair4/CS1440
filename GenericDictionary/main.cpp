#include "Dictionary.h"
#include "KeyValue.h"
#include <iostream>
//change to handle exceptions and change getvalue things
int main() {
    std::cout<<"---Dictionary: dict---"<<std::endl;
    Dictionary<std::string, std::string> dict;
    dict.add("sport", "basketball");
    dict.add("book", "Harry Potter");
    dict.add("hammock place","tree");
    dict.add("sport", "soccer");
    dict.add("color", "blue");
    dict.add("hair", "brown");

    try {
        KeyValue<std::string, std::string> index2 = dict.getByIndex(2);
        std::cout << "Index 2: " << index2.getKey() << ", " << index2.getValue()
                  << std::endl;
    }catch(const char* ex){
        std::cout<<ex<<std::endl;
    }
    try {
        std::cout << "Key=book: " << dict.getByKey("book").getValue() << std::endl;
    }catch(const char* ex){
        std::cout<<ex<<std::endl;
    }

    std::cout<<"Count: "<<dict.getCount()<<std::endl;
    dict.printDict();

    dict.removeByIndex(3);
    dict.removeByKey("sport");

    std::cout<<"Count after 2 removes: "<<dict.getCount()<<std::endl;
    dict.printDict();

    std::cout<<"---Dictionary: dict2---"<<std::endl;
    Dictionary<int, std::string> dict2(15);
    dict2.add(3,"cow");
    dict2.add(7,"fish");
    dict2.add(8, "butterfly");
    dict2.add(1, "dog");
    dict2.add(49, "squid");
    dict2.add(21, "boat");
    dict2.add(23, "moat");
    dict2.add(25, "gloat");
    dict2.add(27, "goat");
    dict2.add(29, "oat");
    dict2.add(2, "bog");
    dict2.add(6, "log");
    dict2.add(9, "cog");
    dict2.add(55, "hog");
    dict2.add(67, "jog");
    dict2.add(6, "log");

    dict2.printDict();

    KeyValue<int, std::string> key8=dict2.getByKey(8);
    std::cout<<"Key 8: "<<key8.getValue()<<std::endl;

    try {
        KeyValue<int, std::string> index45 = dict2.getByIndex(45);  //Invalid index
    }catch(const char* ex){
        std::cout<<ex<<std::endl;
    }
    try {
        KeyValue<int, std::string> key45 = dict2.getByKey(45);  //Invalid key
    }catch(const char* ex){
        std::cout<<ex<<std::endl;
    }

    std::cout<<"Dict2 count: "<<dict2.getCount()<<std::endl;
    std::cout<<"Dict2 size: "<<dict2.getSize()<<std::endl;

    dict2.removeByIndex(5);
    dict2.removeByKey(23);
    dict2.removeByKey(9);
    dict2.removeByIndex(88);  //Invalid index
    dict2.removeByKey(90);   //Invalid key

    std::cout<<"\nAfter 3 removes\nDict2 count: "<<dict2.getCount()<<std::endl;
    std::cout<<"Dict2 size: "<<dict2.getSize()<<std::endl;

    dict2.printDict();

    return 0;
}