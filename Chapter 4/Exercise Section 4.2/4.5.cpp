#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <string>
#include <iterator>
#include <cstring>

using namespace::std;

int main()
{
    cout << -30 * 3 + 21 / 5 << endl; // -90 + 4 = -86
    cout << -30 + 3 * 21 / 5 << endl; // -30 + 12 = -18
    cout << 30 / 3 * 21 % 5 << endl; // 210 % 5 = 0
    cout << -30 / 3 * 21 % 4 << endl; // -210 % 4 = -2

    // Result in 91
    return 0;
}
