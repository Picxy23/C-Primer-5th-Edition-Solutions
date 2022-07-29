#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <iterator>

using namespace::std;


int arr(){
    // Change arrays to test.
    int array[] = {1, 1, 4, 5, 1, 4};
    for (auto item : array)
        cout << item << " ";
    cout << endl;

    int array_2[] = {1, 1, 4, 5, 1, 3};
    for (auto item : array_2)
        cout << item << " ";
    cout << endl;

    /* Cannot compare two arrays with relational operators because pointers to first elements are
     * used, so the result will always be they are not equal. */

    // Check size
    int *array_beg = begin(array), *array_end = end(array),
        *array_2_beg = begin(array_2), *array_2_end = end(array_2);
    bool size = false;

    if (!(array_end - array_beg == array_2_end - array_2_beg)){
        cout << "They are not same size" << endl;
    }
    else{
        size = true;
        cout << "They are same size" << endl;

        // Check Individual values
        bool item_same = true;
        int len = *(&array + 1) - array;
        // Basically, “array” is a “pointer to the first element of array”
        // but “&array” is a “pointer to whole array of 5 int”.
        // This expression involve UB.

        for (size_t idx = 0; idx != len; idx++){
            if (array[idx] != array_2[idx]){
                cout << "Not all elements equal" << endl;
                item_same = false;
            }
        }

        if (item_same && size)
            cout << "They are equal" << endl;
    }


    return 0;
}

int vec(){
    vector<int> v1 = {1, 1, 4, 5, 1, 4};
    for (auto item : v1)
        cout << item << " ";
    cout << endl;

    vector<int> v2 = {1, 1, 4, 5, 1, 3};
    for (auto item : v2)
        cout << item << " ";
    cout << endl;

    if (v1 == v2)
        cout << "Vectors are same" << endl;
    else
        cout << "Vectors are not same" << endl;

}

int main(){
    arr();
    cout << endl;
    vec();
    return 0;
}
