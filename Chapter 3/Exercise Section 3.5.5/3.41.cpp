#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <iterator>
#include <cstring>

using namespace::std;

int main(){
    int arr[] = {1, 1, 4, 5, 1, 4};
    vector<int> int_vec(begin(arr), end(arr));

    for (auto &item : int_vec)
        cout << item << " ";

    return 0;
}
