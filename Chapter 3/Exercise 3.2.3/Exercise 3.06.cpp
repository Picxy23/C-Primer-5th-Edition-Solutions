#include <iostream>
#include <string>
using std::cin; using std::cout;
using std::endl; using std::string;

int main(){
    // Get input string
    string s;
    getline(cin, s);

    for (auto &c : s)
        c = 'X'; // Use '' not "". Dealing with char not string.

    cout << s << endl;
    return 0;
}
