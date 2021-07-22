#include "dlist.h"

//put the implmenetation of the required functions her
int removeValue(node*& head, int value) {
    int counter = 0;

    node* curr = head;

    //if empty
    if (head == nullptr) {
        return counter;
    }

    //if remove first node
    if (head->previous == nullptr && head->next != nullptr && head->data == value) {
        head = curr->next;
        head->previous = nullptr;
        curr->next = nullptr;
        delete curr;
        counter = 1 + removeValue(head, value);

    }

    //if remove mid node
    else if (head->previous != nullptr && head->next != nullptr && head->data == value) {
        head->next->previous = head->previous;
        head->previous->next = head->next;
        delete curr;
        counter = 1 + removeValue(head, value);
    }

    //if remove last node
    else if (head->previous != nullptr && head->next == nullptr && head->data == value) {
        head->previous->next = nullptr;
        delete curr;
        return counter + 1;
    }

    //else recursive
    else {
        removeValue(head->next, value);
    }
}
