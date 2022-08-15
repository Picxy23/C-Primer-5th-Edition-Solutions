#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <string>
#include <iterator>
#include <cstring>

using namespace::std;

int main(){
    vector<string> vec = {
            "Hello",
            "There",
            "I",
            "am",
            "WHO"};
    vector<string>::iterator iter = vec.begin();

    // a)
    // Legal
    // Return current thing iter pointing to, "Hello", and move iter one on ot "There"
    cout << *iter++ << endl; // Prints "Hello". Now pointing to "There"
    cout << *iter << endl; // Verified

    // b)
    // Illegal
    // Cannot add 1 to a string

    // c)
    // Illegal
    // *(iter.empty()) running iterator with empty method is illegal.
    if (iter -> empty())
        cout << "empty" << endl;
    else
        cout << "not empty" << endl;

    // d)
    // Legal, see c)

    // e)
    // Illegal
    // ++(*iter) cannot add to string
    // Right associativity. left ++ and * are same precedence.

    // f)
    // Legal
    // right ++ has same precedence than -> (Left to right associativity)
    if (iter++ ->empty()){
        cout << typeid(iter).name() << endl;
        cout << "empty";}
    else{
        cout << typeid(iter).name() << endl;
        cout << "not empty";}


    return 0;
}
