#include <iostream>
#include "list.h"

void reverse(node* head, node*& newHead) {
    if (head == nullptr || head->next == nullptr) {
        newHead = head;
        return;
    }
    reverse(head->next, newHead);
    node* x = head->next;
    x->next = head;
    head->next = nullptr;
}

void removeLast(node*& head) {

    // if empty list
    if (head == nullptr) {
        return;
    }

    //if 1 node
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        return;
    }

    //if more than 1 node
    node* second_last = head;
    if (second_last->next->next == nullptr) {
        delete second_last->next;
        second_last->next = nullptr;
        return;

    }


    //call until head meet 3 condition above;
    removeLast(head->next);
}
