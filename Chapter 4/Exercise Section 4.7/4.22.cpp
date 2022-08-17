#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <iterator>
#include <cstring>

using namespace::std;

int main(){
    int grade;
    cout << "Enter Grade: " << endl;
    cin >> grade;

    // Using operator
    string result = (grade >= 90) ? "High Pass" :
                    (grade > 75) ? "Pass" :
                    (grade <= 75 && grade >= 60) ? "Low Pass":
                    "Fail";

    cout << "Using Method 1: " << result;

    // Using if
    cout << endl << "Using Method 2: ";

    if (grade >= 90)
        cout << "High Pass";
    else if (grade > 75)
        cout << "Pass";
    else if (grade <= 75 && grade >= 60)
        cout << "Low Pass";
    else
        cout << "Fail";
    
    // Second easier to read. Too many cases for using conditional operators.

    return 0;
}
