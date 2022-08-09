#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <string>
#include <iterator>
#include <cstring>

using namespace::std;

int main()
{
    signed int value;
    cout << "enter value:" << endl;

    while (cin >> value){
        if (value % 2 == 0)
            cout << "even" << endl;
        else
            cout << "odd" << endl;
    }


    return 0;
}
