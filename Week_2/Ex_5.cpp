#include <iostream>
#include <string>


using std::cin;
using std::cout;


int main() {

    int a, m = 0;
    cin >> a;

    while (a != 0) {
        cin >> a;
        if (a % 2 == 0 and a > m) {
            m = a;
        }
    }
    cout << m;

    return 0; }