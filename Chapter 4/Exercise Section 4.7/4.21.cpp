#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <iterator>
#include <cstring>

using namespace::std;

int main(){
    vector<int> int_vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (vector<int>::iterator iter = int_vec.begin(); iter != int_vec.end(); ++iter) {
        (*iter % 2 != 0) ? *iter = *iter * 2 : *iter = *iter;
        // The expressions must have same types.
    }
    
    // Printing
    for (auto item : int_vec)
        cout << item << " ";

    return 0;
}
