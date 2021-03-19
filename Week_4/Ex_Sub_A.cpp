#include "Doubly_linked_list.h"


using namespace std;


Node *mergeLists(Node *first_node, Node *second_node) {
    Node* first_last;
    for (Node* iter = first_node; iter->next != nullptr; iter = iter->next)
        first_last = iter;
    first_last->next = second_node;
    Clear_from_node(second_node);
    return first_node;
}

int main() {

    return 0;
}
