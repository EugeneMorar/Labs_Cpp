#include <iostream>


using std::cin;
using std::cout;


int main() {
    int64_t a, b, r_1, r_2, r_3;;
    cin >> a >> b;

    r_1 = a % b;
    r_2 = b % r_1;
    r_3 = r_1 % r_2;

    while (r_3 % r_2 != 0) {
        r_3 = r_1 % r_2;
        r_1 = r_2;
        r_2 = r_3;
        cout << r_3;
    }
    cout << r_2;
    return 0; }