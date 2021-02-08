#include <iostream>
#include <string>


using std::cin;
using std::cout;


int main() {
    int a = 1, s = -1;
    while (a != 0) {
        cin >> a;
        if (a % 2 == 0) {
            s += 1;
        }
    }
    cout << s;

    return 0; }