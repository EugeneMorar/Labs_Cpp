#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <sstream>
#include <stack>


using namespace std;

int main() {
    int iter = 0, top_element;
    string data;

    stack<int> stacc;
    vector<int> modified_data;

    getline(cin, data);
    istringstream iss(data);

    copy(istream_iterator<int>(iss), istream_iterator<int>(), inserter(modified_data,
                          modified_data.end()));

    while (modified_data[iter] != 0) {
        if (modified_data[iter] > 0)
            stacc.push(modified_data[iter]);
        else if (not stacc.empty() and modified_data[iter] < 0) {
            if (abs(modified_data[iter]) >= stacc.top())
                stacc.pop();
            else {
                top_element = modified_data[iter] + stacc.top();
                stacc.pop();
                stacc.push(top_element); }
        }

        iter++;
    }
    if (stacc.empty())
        cout << 0 << " " << -1 << endl;
    else
        cout << stacc.size() << " " << stacc.top() << endl;

    return 0;
}