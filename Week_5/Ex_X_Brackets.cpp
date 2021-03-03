#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    string line;
    stack<char> bra, ket;

    cin >> line;
    for (char & i : line) {
        if (i == ')' or i == ']' or i == '}' or i == '>')
            bra.push(i);
        else
            ket.push(i);
    }
    if (bra.size() == ket.size())
        cout << "YES";
    else
        cout << "NO";


    return 0;
}