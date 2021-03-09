#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string line;
    vector<char> bra, ket;

    cin >> line;
    for (char & i : line) {
        if (find(line.begin(), line.end(), char(i + 1)) != line.end())
            bra.push_back(i);
        else if (find(line.begin(), line.end(), char(i - 1)) != line.end())
            ket.push_back(i);
    }
    if (bra.size() + ket.size() == line.size() and line[0] == bra[0]
        and line[line.size() - 1] == ket[ket.size() - 1])
        cout << "YES";
    else
        cout << "NO";

    return 0;
}