#include <iostream>
using std::cin;
using std::cout;
using std::endl;


int main() {
    int ret, c, d;
    cin >> c >> d;

    int* a = &c;
    int* b = &d;

    ret = do_some_awesome_work(a, b);
    cout << ret;
    return 0;
}