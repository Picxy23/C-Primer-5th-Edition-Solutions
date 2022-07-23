#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::cout;
using std::endl; using std::string;
using std::vector;

int main(){
    vector<int> integer_vector;
    int integer;
    // Reading ints into vector
    while (cin >> integer)
        integer_vector.push_back(integer);
    
    // Make sure number of inputs is correct.
    // Print 2b2 sums
    vector<int> sum_vector;
    for (decltype(integer_vector.size()) idx = 0; idx <= integer_vector.size() - 1; idx += 2)
        sum_vector.push_back(integer_vector[idx] + integer_vector[idx + 1]);

    for (auto item : sum_vector)
        cout << item << " ";
    cout << endl;
    
    // Print second way
    for (decltype(sum_vector.size()) idx = 0; idx <= ((sum_vector.size() / 2) - 1); idx++)
    // Run index to half                            // Size to index, -1.
        cout << sum_vector[idx] << " " << sum_vector[sum_vector.size() - 1 - idx] << " ";
    cout << endl;

    return 0;
}
