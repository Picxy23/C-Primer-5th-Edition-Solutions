#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <iterator>
#include <cstring>
#include <bitset>

using namespace::std;

int main(){
    constexpr int size = 5;
    int ia[size] = {1,2,3,4,5}; // Array of 5 int items
    for (int *ptr = ia, ix = 0;
    // ptr pointing to first element, ix is set to 0
         ix != size && ptr != ia+size; // ia+size is pointer arithmetic *ia[0] + 5
         // ix does not exceed the size of array, and ptr is not pointing to one pass the array.
         // move the index and the pointer...
         ++ix, ++ptr) { cout << *ptr << " "<< ia[ix] << endl; }
    return 0;
}
