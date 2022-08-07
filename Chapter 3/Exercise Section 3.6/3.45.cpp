#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <iterator>
#include <cstring>

using namespace::std;

int main(){
    int multi[3][4] = {{1, 2, 3, 4},
                       {5, 6, 7, 8},
                       {9,0,1,2},};

    for (auto &ii : multi){
        for (auto &jj : ii)
            cout << jj << " ";
        cout << endl;
    }

    cout << endl;
    for (auto ii = 0; ii != 3; ii++){
        for (auto jj = 0; jj != 4; jj++)
            cout << multi[ii][jj] << " ";
        cout << endl;
    }

    cout << endl;

    // Using ALIAS
    for (auto ii = begin(multi); ii != end(multi); ii++){
        for (auto *jj = begin(*ii); jj != end(*ii); jj++)
            cout << *jj << " ";
        cout << endl;
    }

    return 0;
}
