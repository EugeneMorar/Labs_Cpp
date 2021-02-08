#include <iostream>
#include <string>


using std::cin;
using std::cout;

int main() {
    int N;

    cin >> N;
    if ((N % 4 == 0 and N % 100 != 0) or N % 400 == 0) {
        cout << "YES";
    }
    else
        cout << "NO";

    return 0; }