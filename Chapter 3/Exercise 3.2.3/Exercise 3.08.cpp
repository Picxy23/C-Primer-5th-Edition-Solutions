#include <iostream>
#include <string>
using std::cin; using std::cout;
using std::endl; using std::string;

// Using Traditional For-loop
int main(){
    // Get input string
    string s;
    getline(cin, s);

    for (string::size_type index = 0;
         index < s.size(); //Condition
         index++)
        s[index] = 'X'; //Must use '' because dealing with char not "" string

    cout << s;

    return 0;
}


// Using While-loop
int main(){
    // Get input string
    string s;
    getline(cin, s);
    string::size_type index = 0;

    while (index < s.size()){
        s[index] = 'X';
        index ++;
    }

    cout << s;

    return 0;
}
