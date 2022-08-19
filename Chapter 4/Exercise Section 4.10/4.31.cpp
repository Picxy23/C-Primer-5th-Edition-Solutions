#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <iterator>
#include <cstring>
#include <bitset>

using namespace::std;

int main(){
    vector<int> ivec = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (auto &item : ivec)
        cout << item << " ";
    cout << endl;

    vector<int>::size_type cnt = ivec.size();

    for (size_t ix = 0; ix != ivec.size(); ++ix, --cnt)
        ivec[ix] = cnt;

    for (auto &item : ivec)
        cout << item << " ";
    cout << endl;
    // 10 9 8 7 6 5 4 3 2 1

    // Second version; Reset
    ivec = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    cnt = ivec.size(); // 10

    for (size_t ix = 0; ix != ivec.size(); ix++, cnt--)
        ivec[ix] = cnt;


    for (auto &item : ivec)
        cout << item << " ";
    // Same result
    // Trash Example Question
    // https://stackoverflow.com/questions/22591387/usage-of-prefix-or-postfix-increment-or-decrement

    return 0;
}
