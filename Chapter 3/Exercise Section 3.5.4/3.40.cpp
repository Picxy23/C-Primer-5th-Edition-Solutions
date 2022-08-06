#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <iterator>
#include <cstring>

using namespace::std;

int main(){
    char ca1[] = "114514114514a", ca2[] = "114514b";
    char sum[strlen(ca1) + strlen(ca2)];

    strcpy(sum, ca1); strcat(sum, ca2);

    for (auto &item : sum)
        cout << item;

    return 0;
}
