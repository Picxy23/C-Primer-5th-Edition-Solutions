#include <iostream>
#include <string>
using std::cin; using std::cout;
using std::endl; using std::string;

int main(){
    string de_punctuation, original;

    //Read String
    getline(cin, original);

    for (auto &c : original){
        // If is not punctuation, copy add to output
        if (!ispunct(c))
            de_punctuation += c; // Add non-punctuation character to output string
    }

    cout << de_punctuation << endl;
    return 0;
}
