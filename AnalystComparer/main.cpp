#include "Comparer.h"


int main(int argc, char* argv[]){
    // Keep the main function simple.  It's responsibility should be limited to handle
    // the program argument, creating the initial object(s), stimulating them to do
    // whatever they need to do.

    // For example, think about defining a Comparer class, creating an instance of that
    // class here, and then have it load the analyst data and doing the comparison.
    std::string files;
    int numArgs;
    if(argc==4){
        numArgs=2;
        std::string arg2=argv[2];
        std::string arg3=argv[3];
        files="./"+arg2+" ./"+arg3;
    }
    else{
        numArgs=3;
        std::string arg2=argv[2];
        std::string arg3=argv[3];
        std::string arg4=argv[4];
        files="./"+arg2+" ./"+arg3+" ./"+arg4;
    }
    Comparer compare(files);
    compare.printPerformance(numArgs, argv[1]);

    return 0;
}
