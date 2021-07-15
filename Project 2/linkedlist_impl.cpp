#include "linkedlist.h"

linkedlist::linkedlist() : head(nullptr), current(nullptr){

}

//destructor
linkedlist::~linkedlist() {
	node* curr = head;
	node* next = nullptr;
	while (curr != nullptr) {
		next = curr->next;
		delete curr;

		curr = next;
	}
	head = nullptr;
}


bool linkedlist::isEmpty (){
	return (head == nullptr);
}

//insert at the last node
void linkedlist::insertFront(const event& aData) {

	node* new_node = new node;
	new_node->request = aData;
	new_node->next = nullptr;

	if (head == nullptr) {
		head = new_node;
		current = head;
	}
	else {
		current->next = new_node;
		current = new_node;
	}

}

int linkedlist::get_head_sector() {
	return (head->request.getSector());
}

structure_type linkedlist::get_head_type() {
	return (head->request.getType());
}


//remove from the first node.
void linkedlist::removeBack() {
	
	node* curr = head;
	
	//if first node
	if (curr == nullptr) {
		return;
	}

	//if mnore than 1 node
	else {
		node* temp = head;
		head = head->next;
		delete temp;
		temp = nullptr;
	}
}