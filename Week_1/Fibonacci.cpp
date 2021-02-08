#include <iostream>


using std::cin;
using std::cout;

int main() {
    long long int a, b, c, summ, M;
    a = 1;
    b = 2;
    c = 0;
    summ = 2;
    M = 4'000'000'000;

    while (c < M) {
        c = a + b;
        cout << c << std::endl;
        if (c % 2 == 0) {
            summ += c;
        }
        a = b;
        b = c;
    }
    cout << summ;

    return 0; }
