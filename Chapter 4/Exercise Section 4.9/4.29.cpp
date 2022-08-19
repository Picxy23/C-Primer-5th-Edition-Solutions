#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <iterator>
#include <cstring>
#include <bitset>

using namespace::std;

int main(){
    int x[10];
    int *p = x;
    cout << sizeof (x) / sizeof (*x) << endl; // 10, get size of array
    cout << sizeof (p) / sizeof (*p) << endl;
    // size needed to hold a pointer / size of an int, unknown

    return 0;
}
