#include <iostream>
#include <string>
#include <cmath>

using std::cin;
using std::cout;

int main() {
    int64_t n, s = 1;
    cin >> n;

    for (int64_t i = 2; i <= sqrt(n); i++)
        if (n % i == 0) {
            s = 0;
        }
    cout << s;

    return 0; }