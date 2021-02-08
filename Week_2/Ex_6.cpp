#include <iostream>
#include <string>


using std::cin;
using std::cout;

int main() {
    int a = 1, m = 0, n;

    while (a != 0) {
        cin >> a;

        if (a == m) {
            n += 1; }

        if (a > m) {
            n = 1;
            m = a; }
    }
    cout << n;
    return 0; }