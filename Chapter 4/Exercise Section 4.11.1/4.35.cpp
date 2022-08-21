#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <iterator>
#include <cstring>
#include <bitset>

using namespace::std;

int main(){
    char cval; int ival; unsigned int ui; float fval; double dval;
    // a
    // ``a`` converted to int add with ``3`` and converted to ``char``
    cval = 'a' + 3;
    cout << cval <<  " is type: " << typeid(cval).name() << endl;

    // b
    // ``ival`` is converted to ``double`` (Tested, not float)
    // and the result of multiplication is converted to ``double`` (bigger than ui)
    // and then assignment to ``float``
    fval = ui - ival * 1.0;
    cout << fval <<  " is type: " << typeid(fval).name() << endl;

    // c
    // ``unsigned int`` converted to ``float`` (float is larger)
    // result is assigned to ``double``
    dval = ui * fval;
    cout << dval <<  " is type: " << typeid(dval).name() << endl;

    // d
    // ``int`` to ``float``, their sum to ``double``, lastly all to ``char``
    cval = ival + fval + dval;
    cout << cval <<  " is type: " << typeid(cval).name() << endl;

    return 0;
}
