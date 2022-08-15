#include <vector>
#include <array>
#include <string>
#include <iterator>
#include <cstring>

using namespace::std;

int main(){
    int ival = 1, *ptr = &ival;
    vector<int> vec = {5, 4, 3, 2, 1};

    // a)
    if (ptr != 0 && *ptr++)
        cout << *ptr << endl;
    // First check if ``ptr`` is a nullptr, which it is not. Move on to the
    // right, ``*(ptr++)``, original ``*ptr`` is returned for evaluation,
    // which is ``1``, converted to bool type ``True``. ``ptr`` is moved on by 1.
    // Printing the content of ``ptr``, giving random number.

    // Very bad. The pointer is pointing to an integer. You don't want to end up with a crazy number.
    // Can be corrected by using (*ptr)++ instead, if fits desire.


    // b)
    if (ival++ && ival)
        cout << ival << endl;
    // ``ival++`` is evaluated first. If yields true, move on to right which is basically ``ival+1``
    // Completely useless.
    // Corrected by not using ++ in conditions.

    // c)
    // Bad Bad.
    // For this expression, the order of evaluation is undefined. Thus this expression has undefined
    // Behavior.
    // Fix:
    if (vec[ival + 1] <= vec[ival])
        cout << "Something" << endl;

    return 0;
}
