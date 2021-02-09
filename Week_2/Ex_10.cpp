#include <iostream>
#include <string>
#include <cmath>
#include <vector>


using namespace std;

int main() {
    int64_t N, n, l = 0;
    vector <int64_t> babyl;
    string result = "";
    cin >> N;
    n = N;

    while (n > 0) {
        n /= 60;
        l++; }
    babyl.reserve(l);
    while (N > 0) {
        babyl.push_back(N % 60);
        N /= 60;
    }
    for (int i = 0; i < l; i++) {
         if (i > 0) {
             result.insert(0, ".");
         }
        for (int k = 0; k < babyl[i]%10; k++) {
            result.insert(0, "v"); }
        for (int k = 0; k < babyl[i]/10; k++) {
            result.insert(0, "<"); }
        }

    cout << result;

    return 0 ;
}