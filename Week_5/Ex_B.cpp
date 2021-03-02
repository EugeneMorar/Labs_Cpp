#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <stack>

using namespace std;

int main() {
    string a, b, data;
    int a_mod, b_mod, result;
    stack<string> stacc;
    vector<string> modified_data;

    getline(cin, data);
    string tmp;
    istringstream iss(data);
    while (iss >> tmp)
    {
        stacc.push(tmp);
        if (tmp == "*" or tmp == "/" or tmp == "+" or tmp == "-") {
            stacc.pop();
            a = stacc.top();
            a_mod = stoi(a);

            stacc.pop();
            b = stacc.top();
            b_mod = stoi(b);
            stacc.pop();

            if (tmp == "*")
                result = a_mod * b_mod;
            else if (tmp == "/")
                result = b_mod / a_mod;
            else if (tmp == "+")
                result = a_mod + b_mod;
            else if (tmp == "-")
                result = b_mod - a_mod;

            stacc.push(to_string(result));
        }
    }
    cout << stacc.top();
    return 0;
}