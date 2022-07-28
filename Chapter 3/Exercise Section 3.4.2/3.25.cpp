#include <iostream>
#include <string>
#include <vector>

using std::cin; using std::cout;
using std::endl; using std::string;
using std::vector;

int main(){
    // Containers for grouped students
    vector<int> grades(11, 0);
    auto beg = grades.begin();

    // Reading in all scores
    vector<int> scores;
    int score;
    while (cin >> score)
        scores.push_back(score / 10); // Preprocess here.

    // Sort by score range containers.
    for (auto idx = scores.begin(); idx != scores.end(); idx++)
        *(beg + *idx) += 1; // Add index number corresponding to range to the beg and then modify.

    for (auto &item : scores)
        cout << item << " ";
    cout << endl;
    // Printing
    for (auto idx = grades.begin(); idx != grades.end(); idx++)
        cout << *idx << " ";

    return 0;
}
