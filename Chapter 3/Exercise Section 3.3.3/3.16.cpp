#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::cout;
using std::endl; using std::string;
using std::vector;

int main(){

    //a
    vector<int> v1;
    cout << v1.size() << endl;
    cout << "Contents: ";
    for (auto &num: v1)
        cout << num << " ";
    cout << endl;

    //b
    vector<int> v2(10);
    cout << v2.size() << endl;
    cout << "Contents: ";
    for (auto &num: v2)
        cout << num << " ";
    cout << endl;

    //c
    vector<int> v3(10, 42);
    cout << v3.size() << endl;
    cout << "Contents: ";
    for (auto &num: v3)
        cout << num << " ";
    cout << endl;

    //d
    vector<int> v4{10};
    cout << v4.size() << endl;
    cout << "Contents: ";
    for (auto &num: v4)
        cout << num << " ";
    cout << endl;

    //e
    vector<int> v5{10, 42};
    cout << v5.size() << endl;
    cout << "Contents: ";
    for (auto &num: v5)
        cout << num << " ";
    cout << endl;

    //f
    vector<string> v6{10};
    cout << v6.size() << endl;
    cout << "Contents: ";
    for (auto &str: v6)
        cout << str << " ";
    cout << endl;

    //g
    vector<string> v7{10, "hi"};
    cout << v7.size() << endl;
    cout << "Contents: ";
    for (auto &str: v7)
        cout << str << " ";
    cout << endl;
}
