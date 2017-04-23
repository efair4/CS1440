#include "UtilsTester.h"
#include "DOSTester.h"
#include "PortScanTester.h"
#include "ConfigurationTester.h"
#include "ResultSetTester.h"

int main(){
    UtilsTester utilsTester;
    DOSTester dosTester;
    PortScanTester portScanTester;
    ConfigurationTester configurationTester;
    ResultSetTester resultSetTester;

    utilsTester.testSplit();
    dosTester.test();
    //portScanTester.portTest();
    resultSetTester.testPrint();
    configurationTester.testGetters();

    return 0;
}