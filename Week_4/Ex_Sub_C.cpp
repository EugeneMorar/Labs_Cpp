#include <iostream>
#include <string>


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
    Node* back = nullptr; };


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


void Clear(List* list) {
    for (Node* i = list->root; i != list->back; i = i -> next)
        delete i;
    delete list->root;
    delete list;
}


int main() {
    int N, K;
    cin >> N >> K;

    // Конструктор листа
    List* list = new List;
    for (int i = 1; i <= N; i++)
        PushBack(list, i);

    // Проверяет и перенаправляет поинтеры
    Node *iter = list->root;
    while (list->root != list->back) {
        // Находит K-ый элемент
        for (int i = 1; i < K; i++)
            iter = iter->next;
        if (iter == list->root)
            list->root = iter->next;
        if (iter == list->back)
            list->back = iter->prev;
        if (iter != list->back and iter != list->root) {
            iter->prev->next = iter->next;
            iter->next->prev = iter->prev;
        }
        iter = iter->next;

    }
    cout << list->root->data << endl;

    Clear(list);
    return 0;
}