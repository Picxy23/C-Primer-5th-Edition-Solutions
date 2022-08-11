#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <string>
#include <iterator>
#include <cstring>

using namespace::std;

int main(){
    float a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a > b && b > c && c > d)
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}
