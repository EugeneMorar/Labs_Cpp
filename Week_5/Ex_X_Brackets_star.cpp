#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    int N;
    string line, in, tmp;
    vector<string> brackets;
    vector<char> bra, ket;

    cin >> N;
    cin.clear();
    cin.ignore(1, '\n');


    getline(cin, in);
    istringstream iss(in);
    while (iss >> tmp)
        brackets.push_back(tmp);


    cin >> line;

    for (char & i : line) {
        for (int k = 0; k < brackets.size(); k++) {
            if (i == brackets[k][0])
                bra.push_back(i);
            else if (i == brackets[k][1])
                ket.push_back(i);
        }
    }
    if (bra.size() == ket.size() and line[0] == bra[0]
        and line[line.size() - 1] == ket[ket.size() - 1])
        cout << "YES";
    else
        cout << "NO";


    return 0;
}