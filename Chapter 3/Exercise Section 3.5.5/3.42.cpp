#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <iterator>
#include <cstring>

using namespace::std;

int main(){
    const vector<int> int_vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // Initiating empty with enough size
    // .size() doesn't work here because it returns not a constexpr nor number literal.
    // Explanation can be found here. Must then be manually set up.
    // https://stackoverflow.com/questions/73270155/c-using-sizeof-division-to-find-the-size-of-a-vector
    // Thank him a lot. 
    int arr[9]; //Manually
    int *beg_ptr = begin(arr), *end_ptr = end(arr);

    // Add in using pointers
    int vector_idx = 0;
    for (auto *idx = beg_ptr; idx != end_ptr; idx++){
        *idx = int_vec[vector_idx];
        vector_idx++;
    }

    // Print
    for (auto &item : int_vec)
        cout << item << " ";
    cout << endl;
    for (auto &item : arr)
        cout << item << " ";

    return 0;
}
