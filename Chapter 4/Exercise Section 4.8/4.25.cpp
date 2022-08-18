#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <iterator>
#include <cstring>
#include <bitset>

using namespace::std;

int main(){
    // By precedence, equals to
    (~'q') << 6;
    // Which is ~ (00000000 0000000 00000000 01110001) << 6
    // 11111111 11111111 11111111 10001110 << 6
    // 11111111 11111111 11100011 10000000

    cout << std::bitset<32> ((~'q') << 6) << endl;

    char chr = 0b11111111111111111110001110000000; // Ç
    cout << chr << endl;

    int ival = 0b11111111111111111110001110000000; // -7296
    cout << ival << endl;


    return 0;
}
