#include "dlist.h"
using namespace std;
//put the implmenetation of the required functions here

int countEven(node* head) {
    int counter = 0;
    if (head == nullptr) {
        return counter;
    }
    else if (head != nullptr && (head->data % 2) == 0) {
        return counter = 1 + countEven(head->next);
    }
    else {
        countEven(head->next);
    }
}

int removeEven(node*& head) {
    int counter = 0;

    node* curr = head;

    //if empty
    if (head == nullptr) {
        return counter;
    }

    //if delete first node
    if (head->previous == nullptr && head->next != nullptr && (head->data % 2) == 0) {
        head = curr->next;
        head->previous = nullptr;
        curr->next = nullptr;
        delete curr;
        counter = 1 + removeEven(head);
    }

    // if delete mid node
    else if (head->previous != nullptr && head->next != nullptr && (head->data % 2) == 0) {
        head->next->previous = head->previous;
        head->previous->next = head->next;
        delete curr;
        counter = 1 + removeEven(head);
    }

    // if delete last node
    else if (head->previous != nullptr && head->next == nullptr && (head->data % 2) == 0) {
        head->previous->next = nullptr;
        delete curr;
        return counter + 1;
    }

    // else recursive
    else {
        removeEven(head->next);
    }
}
