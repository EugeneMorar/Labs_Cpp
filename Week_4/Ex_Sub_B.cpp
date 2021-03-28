#include <iostream>
#include <string>
#include <sstream>
#include <iterator>
#include <vector>

#include "Doubly_linked_list.h"


using namespace std;

int main() {
    int N;
    cin >> N;

    string data;
    vector<string> modified_data;
    vector<int> output;

    List* list = new List;
    cin.clear();
    cin.ignore(1, '\n');

    for (int i = 1; i <= N; i++) {
        getline(cin, data);
        istringstream iss(data);

        modified_data.clear();
        copy(istream_iterator<string>(iss), istream_iterator<string>(), inserter(modified_data,
                                                                                 modified_data.end()));
        if (modified_data[0] == "-" and list->root != nullptr) {
            output.push_back(PopFirst(list));
        }
        else {
            if (modified_data[0] == "+")
                PushBack(list, stoi(modified_data[1]));
            else {
                Node *iter = list->root;
                int n = 1;
                for (Node* i = list->root; i != list->back; i = i->next)
                    n++;
                for (int k = 1; k != ((n % 2 == 0) ? n / 2 : n / 2 + 1); k++)
                    iter = iter->next;

                // Блок, сшивающий лист
                Node *new_node = new Node;
                new_node->prev = iter;
                new_node->next = iter->next;
                iter->next->prev = new_node;
                iter->next = new_node;

                new_node->data = stoi(modified_data[1]);
            }
        }
    }
    for (auto item : output)
        cout << item << endl;
    Clear(list);
    return 0;
}