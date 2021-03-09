#include <iostream>
#include <string>
#include <sstream>
#include <iterator>
#include <vector>


using namespace std;

struct Node {
    int data = 0;

    Node* next = nullptr;
    Node* prev = nullptr;

    ~Node() {
        cout << "deleted node: " << data << endl;
    }
};

struct List {
    Node* root = nullptr;
    Node* back = nullptr;
};



void PushBack(List* list, int vol) {
    if (list->root == nullptr) {
        list->root = new Node;
        list->root->data = vol;
        list->back = list->root;
    }
    else {
        Node* new_node = new Node;
        list->back->next = new_node;

        new_node->prev = list->back;
        new_node->next = list->root;

        list->back = new_node;
        list->back->data = vol;

        list->root->prev = list->back;
    }
}
int PopFirst (List* list) {
    int output;
    if (list -> root != nullptr) {
        output = list->root->data;
        if (list->root->next != nullptr) {
            list->back->next = list->root->next;
            list->root = list->root->next;
        }
        else
            delete list->root;
    }
    return output;
}

void Clear(List* list) {
    for (Node* i = list->root; i != list->back; i = i -> next)
        delete i;
    delete list->root;
    delete list;
}


int main() {
    int N;
    cin >> N;

    string data, result;
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
        if (modified_data[0] == "-" and list->root != nullptr)
            output.push_back(PopFirst(list));
        else {
            if (modified_data[0] == "+")
                PushBack(list, stoi(modified_data[1]));
            else {
                Node *iter = list->root;
                for (int k = 1; k != ((N % 2 == 0) ? N / 2 : N / 2 + 1); k++)
                    iter = iter->next;

                // Блок, сшивающий лист
                Node *new_node = new Node;
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