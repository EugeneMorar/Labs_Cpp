#include <iostream>
#include <cmath>


using std::endl;
using std::cin;
using std::cout;

int main() {
    double a, b;
    double result;

    cin >> a >> b;
    result = sqrt(pow(a, 2) + pow(b, 2));
    cout << result;

    return 0; }