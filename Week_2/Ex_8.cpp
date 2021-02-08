#include <iostream>
#include <string>


using std::cin;
using std::cout;

int main() {
    int64_t n, i = 2;
    cin >> n;

    while (n != 1) {
        while (i < n and n % i != 0) {
            i++; }
        n /= i;
        cout << i << '\n';
    }

    return 0; }