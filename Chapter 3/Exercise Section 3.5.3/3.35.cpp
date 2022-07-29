#include <iostream>
#include <string>
#include <vector>
#include <array>

using namespace::std; // Use this so no need to write using std::end...


int main(){
    int array[] = {1, 1, 4, 5, 1, 4};
    int *p_beg = array, *p_end = end(array);

    while (p_beg != p_end){
        *p_beg = 0;
        p_beg++;
    }

    // Printing
    for (auto item : array)
        cout << item << " ";

    return 0;
}
