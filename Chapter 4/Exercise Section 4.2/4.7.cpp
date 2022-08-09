#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <string>
#include <iterator>
#include <cstring>

using namespace::std;
void print(int item){
    cout << item << endl;
}

int main(){
    // Overflow happens when a value is computed that is outside the range of values that the type
    // can represent.
    short short_value = 32767;
    short_value ++;
    print(short_value);

    int int_value = 2147483647;
    int_value = int_value * int_value;
    print(int_value);

    long long_value = -2147483648;
    long_value -= 1;
    print(long_value);

    return 0;
}
