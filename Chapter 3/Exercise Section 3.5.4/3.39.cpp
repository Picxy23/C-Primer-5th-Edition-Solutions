#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <iterator>
#include <cstring>

using namespace::std;

int main(){
    // String Comparison
    string s1("114514a"), s2("114514A");
    if (s1 == s2)
        cout << "They are equal";
    else if (s1 > s2)
        cout << "s1 larger";
    else
        cout << "s2 larger";

    cout << endl;
    // C-String Comparison
    char ca1[] = "114514a", ca2[] = "114514a";
    if (strcmp(ca1, ca2) == 0)
        cout << "They are equal";
    else if (strcmp(ca1, ca2))
        cout << "ca1 larger";
    else
        cout << "ca2 larger";

    return 0;
}
