#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::cout;
using std::endl; using std::string;
using std::vector;

int main(){
    vector<int> v;

    // Reading integers
    int temp;
    while (cin >> temp)
        v.push_back(temp);

    // Summing
    vector<int> sum;
    for (auto idx = v.begin(); idx != v.end(); idx += 2)
        sum.push_back(*idx + *(idx + 1));

    // Printing normal way
    for (auto idx = sum.begin(); idx != sum.end(); idx++)
        cout << *idx << " ";
    cout << endl;

    // Printing other way
    auto beg = sum.begin(), end = sum.end() - 1;
    while (end - beg != 1){
        cout << *beg << " " << *end << " ";
        beg += 1;
        end -= 1;
    }

    // Fence problem, print out last pair
    cout << *beg << " " << *end << " ";

    return 0;
}
