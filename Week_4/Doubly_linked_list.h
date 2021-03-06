#ifndef LABS_CPP_DOUBLY_LINKED_LIST_H
#define LABS_CPP_DOUBLY_LINKED_LIST_H

#endif //LABS_CPP_DOUBLY_LINKED_LIST_H

#pragma once

#include <iostream>
using namespace std;

// Зацикленный двойно-связанный лист

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

int PopFirst (List* list) {
    if (list->root != nullptr) {
        int output = list->root->data;
        list->back->next = list->root->next;
        delete list->root;

        list->root = list->back->next;
        list->root->prev = list->back;
        return output;
    }
}

void PrintAll (List* list) {
    for (Node* i = list -> root; i->next != list->root; i = i -> next)
        cout << i -> data << endl;
}

void Clear(List* list) {
    for (Node* i = list->root; i != list->back; i = i->next)
        delete i;
    delete list->back;
    delete list;
}

// Для незацикленного листа в задании А
void Clear_from_node(Node* node) {
    for (Node* i = node; i->next != nullptr; i = i->next)
        delete i;
}