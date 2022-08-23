#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <iterator>
#include <cstring>
#include <bitset>

using namespace::std;

int main(){
    int i;
    double d;
    const string *ps;
    char *pc;
    void *pv;

    // a
    pv = static_cast<void*>(const_cast<string*>(ps));
    //  First cast off the constant, and then explicitly convert to ``void`` type

    // b
    i = static_cast<int>(*pc);

    // c
    pv = static_cast<void*>(&d);
    
    // d
    pc = static_cast<char*>(pv);

    return 0;
}
