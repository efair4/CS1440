cmake_minimum_required(VERSION 3.6)
project(GenericDictionary)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        Dictionary.h
        KeyValue.h
        BinTree.cpp BinTree.h
        )

add_executable(GenericDictionary main.cpp ${SOURCE_FILES})

set(TEST_FILES
        Testing/DictionaryTester.cpp Testing/DictionaryTester.h
        Testing/KeyValueTester.cpp Testing/KeyValueTester.h
        Testing/testMain.cpp)

add_executable(Test Testing/testMain.cpp ${SOURCE_FILES} ${TEST_FILES})