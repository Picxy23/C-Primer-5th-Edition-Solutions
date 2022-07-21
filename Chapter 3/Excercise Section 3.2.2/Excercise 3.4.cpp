#include <iostream>
#include <string>
using std::cin; using std::cout;
using std::endl; using std::string;

int main(){
    //Get two strings
    cout << "Enter two strings:" << endl;
    string s1;
    string s2;

    getline(cin, s1);
    getline(cin, s2);

    //Printing the entered string
    cout << s1 << endl << s2 << endl;

    //Compare String for their largeness
    if (s1 == s2)
        cout << "They are equal" << endl;
    else if (s1 > s2)
        cout << "First larger" << endl;
    else
        cout << "Second larger" << endl;

    //Compare String for their length
    if (s1.size() == s2.size())
        cout << "They have equal length" << endl;
    else if (s1.size() > s2.size())
        cout << "First longer" << endl;
    else
        cout << "Second longer" << endl;

    return 0;
}
