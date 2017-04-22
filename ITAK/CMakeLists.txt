cmake_minimum_required(VERSION 3.6)
project(ITAK)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        DenialOfServiceAnalyzer.cpp DOSAnalyzer.h
        Utils.cpp Utils.h
        PortScanAnalyzer.cpp PortScanAnalyzer.h
        Analyzer.h
        ResultSet.cpp ResultSet.h
        Configuration.cpp Configuration.h
        )
add_executable(ITAK main.cpp ${SOURCE_FILES})

set(TEST_FILES
        Testing/testMain.cpp
        Testing/PortScanTester.cpp Testing/PortScanTester.h
        Testing/DOSTester.cpp Testing/DOSTester.h
        Testing/ConfigurationTester.cpp Testing/ConfigurationTester.h
        Testing/ResultSetTester.cpp Testing/ResultSetTester.h
        Testing/UtilsTester.cpp Testing/UtilsTester.h)

add_executable(Test Testing/testMain.cpp ${SOURCE_FILES} ${TEST_FILES})