#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string line;
    vector<char> bra, ket;

    cin >> line;
    for (char & i : line) {
        if (i == ')' or i == ']' or i == '}' or i == '>')
            bra.push_back(i);
        else
            ket.push_back(i);
    }
    if (bra.size() == ket.size() and line[0] == bra[0]
    and line[line.size() - 1] == ket[ket.size() - 1])
        cout << "YES";
    else
        cout << "NO";


    return 0;
}