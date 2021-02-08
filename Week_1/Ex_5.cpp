#include <iostream>


using std::cin;
using std::cout;

int main() {
    double N;

    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int k = i; k < N; k++) {
            cout << char('*');
        }
        cout << '\n';
    }

    return 0; }