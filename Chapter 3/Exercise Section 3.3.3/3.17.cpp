#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::cout;
using std::endl; using std::string;
using std::vector;

int main(){
    vector<string> v;
    string word;

    // Reading words into a vector
    while (cin >> word)
        v.push_back(word);

    // To upper-case
    for (auto &item : v){
        for (auto &chr : item){
            chr = toupper(chr);
        }
    }

    // Printing by 8
    // Fencing problem print first line separately, 0%8 = 0
    for (vector<string>::size_type idx = 0; idx <= 7; idx++)
        cout << v[idx] << " ";

    // Every 8 units of idx, flush
    for (vector<string>::size_type idx = 8; idx <= v.size(); idx++){
        if (idx % 8 == 0)
            cout << endl;
        cout << v[idx] << " ";
    }


    return 0;
}
