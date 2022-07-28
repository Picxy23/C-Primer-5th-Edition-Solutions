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

    // Printing first
    for (auto item : array)
        cout << item << " ";
    cout << endl;

    // Copy into another array
    // Cannot directly copy
    int array_2[10];
    for (size_t idx = 0; idx != 10; idx++)
        array_2[idx] = array[idx];

    // Print copy
    for (auto item : array_2)
        cout << item << " ";
    cout << endl;

    // Using vector
    vector<int> vec(10);
    for (int idx = 0; idx != 10; idx++)
        vec[idx] = idx;

    for (auto item : vec)
        cout << item << " ";
    cout << endl;

    //Copy
    vector<int> vec_2;
    vec_2 = vec;
    for (auto item : vec_2)
        cout << item << " ";

    return 0;
}
