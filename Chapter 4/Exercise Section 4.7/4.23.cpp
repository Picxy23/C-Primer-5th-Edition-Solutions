#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <iterator>
#include <cstring>

using namespace::std;

int main(){
    string s = "word";
    string pl = s + (s[s.size() - 1] == 's' ? "" : "s" );
    
    // ``+`` has higher precedence.  
    cout << pl;
    return 0;
}
