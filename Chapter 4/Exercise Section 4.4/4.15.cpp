#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <string>
#include <iterator>
#include <cstring>

using namespace::std;

int main(){
    double dval; int ival; int *pt;
    // Illegal, cannot assign the value of a pointer to an int, and thus no a double;
    // Basically not convertible.
    ival = dval = 0;
    pt = 0;

    return 0;
}
