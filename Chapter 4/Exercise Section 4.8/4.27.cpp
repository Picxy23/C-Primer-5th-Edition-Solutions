#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <iterator>
#include <cstring>
#include <bitset>

using namespace::std;

int main(){
    unsigned long ul1 = 3, ul2 = 7;
    cout << bitset<32> (ul1) << endl << bitset<32> (ul2) << endl;
    // ul1: 00000000000000000000000000000011
    // ul2: 00000000000000000000000000000111

    // a
    // Result: 00000000000000000000000000000011, which is 3.
    cout << (ul1 & ul2) << endl;

    // b
    // Result: 00000000000000000000000000000111, which is 7.
    cout << (ul1 | ul2) << endl;

    // c
    // Result: True, which is 1.
    cout << (ul1 && ul2) << endl;

    // d
    // Result True, which is 1.
    cout << (ul1 || ul2) << endl;

    return 0;
}
