#include <iostream>


using std::cin;
using std::cout;

int main() {
    double N;

    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int k = 0; k < i; k++) {
            cout << char(' ');
        }

        for (int k = i; k < N - i; k++) {
            cout << char('*');
        }
        cout << '\n';
    }

    return 0; }