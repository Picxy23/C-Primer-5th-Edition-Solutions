#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::cout;
using std::endl; using std::string;
using std::vector;

int main(){
    vector<string> text;
    string line;

    // Reading lines of file into vector
    while (getline(cin, line))
        text.push_back(line);

    // To-upper
    // Loop through words in texts
    for (auto idx = text.begin(); idx != text.end() && !idx -> empty(); idx++)
        // Loop Through chars in words
        for(auto chr = idx -> begin(); chr != idx -> end(); chr++)
            *chr = toupper(*chr);

    for (auto idx = text.begin(); idx != text.end(); idx++)
        cout << *idx << endl;

    return 0;
}
