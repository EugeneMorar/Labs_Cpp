#include <iostream>
#include <string>


using std::cin;
using std::cout;

int main() {
    int N;
    cin >> N;


    while (N % 2 == 0 and N != 1) {
        N /= 2; }


    if (N == 1) {
        cout << "YES"; }
    else cout << "NO";


    return 0; }