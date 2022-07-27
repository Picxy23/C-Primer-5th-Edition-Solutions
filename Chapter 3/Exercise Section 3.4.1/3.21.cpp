// 3.16
#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::cout;
using std::endl; using std::string;
using std::vector;

int main(){
    // This is crazy
    //a
    vector<int> v1;
    cout << v1.size() << endl;
    cout << "Contents: ";
    for (auto idx = v1.cbegin(); idx != v1.cend(); idx++)
        cout << *idx << " ";
    cout << endl;

    //b
    vector<int> v2(10);
    cout << v2.size() << endl;
    cout << "Contents: ";
    for (auto idx = v2.cbegin(); idx != v2.cend(); idx++)
        cout << *idx << " ";
    cout << endl;

    //c
    vector<int> v3(10, 42);
    cout << v3.size() << endl;
    cout << "Contents: ";
    for (auto idx = v3.cbegin(); idx != v3.cend(); idx++)
        cout << *idx << " ";
    cout << endl;

    //d
    vector<int> v4{10};
    cout << v4.size() << endl;
    cout << "Contents: ";
    for (auto idx = v4.cbegin(); idx != v4.cend(); idx++)
        cout << *idx << " ";
    cout << endl;

    //e
    vector<int> v5{10, 42};
    cout << v5.size() << endl;
    cout << "Contents: ";
    for (auto idx = v5.cbegin(); idx != v5.cend(); idx++)
        cout << *idx << " ";
    cout << endl;

    //f
    vector<string> v6{10};
    cout << v6.size() << endl;
    cout << "Contents: ";
    for (auto idx = v6.cbegin(); idx != v6.cend(); idx++)
        cout << *idx << " ";
    cout << endl;

    //g
    vector<string> v7{10, "hi"};
    cout << v7.size() << endl;
    cout << "Contents: ";
    for (auto idx = v7.cbegin(); idx != v7.cend(); idx++)
        cout << *idx << " ";
    cout << endl;
}
