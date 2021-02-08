#include <iostream>


using std::cin;
using std::cout;


int main() {
    int a, b;
    cin >> a >> b;

    int r_1 = a, r_2 = b;
    while (r_1 % r_2 != 0) {
        r_1 = r_1 % r_2;
        r_2 = b % r_1;
    }

    return 0; }