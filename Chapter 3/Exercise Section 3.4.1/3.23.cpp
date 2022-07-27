#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::cout;
using std::endl; using std::string;
using std::vector;

int main(){
    vector<int> v(10);

    //Initial number
    int num_init;
    cin >> num_init;

    // Set first element
    v[0] = num_init;

    for (auto idx = v.begin() + 1; idx != v.end(); idx++)
        *idx = *(idx - 1) * 2;  // move idx back one first before multiply by 2

    // Printing
    for (auto &item : v)
        cout << item << " ";

    return 0;
}
