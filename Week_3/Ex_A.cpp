#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main() {
    int n;
    int64_t a, avg = 0,sum = 0;
    cin >> n;

    vector <int64_t> array;
    array.reserve(n);

    for (int i = 0; i < n; i++) {
        cin >> a;
        array.push_back(a);

        avg += a;
    }

    avg /= n;

    for (auto a : array) {
        if (a > avg) {
            sum += a;
        }
    }

    cout << sum;
    return 0 ;
}