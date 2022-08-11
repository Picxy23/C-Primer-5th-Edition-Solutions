#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <string>
#include <iterator>
#include <cstring>

using namespace::std;

int main(){
    int readings;
    while (cin >> readings && readings != 42)
        cout << readings << endl;

    cout << "ended" << endl;
    return 0;
}
