#ifndef LINNKEDLIST_H
#define LINKEDLIST_H

#include "event.h"
#include "structuretype.h"
#include "stack.h"

class linkedlist {
private:
	struct node {
		event request;
		node* next;
	};

	node* head;
	node* current;
public:
	linkedlist();
	~linkedlist();


	bool isEmpty();
	void insertFront(const event& aData);
	void removeBack();

	int get_head_sector();
	structure_type get_head_type();
};

#endif // !LINNKEDLIST_H