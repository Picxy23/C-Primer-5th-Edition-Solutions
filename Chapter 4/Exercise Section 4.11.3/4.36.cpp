#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <iterator>
#include <cstring>
#include <bitset>

using namespace::std;

int main(){
    int i = 2;
    double d = 10;
    i *= static_cast<int>(d);

    cout << i << " " << typeid(i).name() << endl;

    return 0;
}
