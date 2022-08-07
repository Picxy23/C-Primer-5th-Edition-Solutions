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
    
    // Using ALIAS
    using int_array = int[4];
    using size = size_t;

    for (int_array &ii : multi){
        for (int &jj : ii)
            cout << jj << " ";
        cout << endl;
    }

    cout << endl;
    for (size ii = 0; ii != 3; ii++){
        for (size jj = 0; jj != 4; jj++)
            cout << multi[ii][jj] << " ";
        cout << endl;
    }

    cout << endl;

    for (int_array *ii = begin(multi); ii != end(multi); ii++){
        for (int *jj = begin(*ii); jj != end(*ii); jj++)
            cout << *jj << " ";
        cout << endl;
    }

    return 0;
}
