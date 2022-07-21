#include <iostream>
#include <string>
using std::cin; using std::cout;
using std::endl; using std::string;

int main(){
    string s, s1, s2;

    // Reading string and concatenating string to s and s2
    while (getline(cin, s)){
        // Without spacing
        s1 += s;
        // With spacing
        s2 += s + " "; // If use " " + s, fence problem occurs.
    }

    //Printing two answers+
    cout << s1 << endl << s2 << endl;

    return 0;
}
