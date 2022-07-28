#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::cout;
using std::endl; using std::string;
using std::vector;

int main(){
    int array[10];
    for (size_t idx = 0; idx != 10; idx++)
        array[idx] = idx;

    for (auto &item : array)
        cout << item << " ";

    return 0;
}
