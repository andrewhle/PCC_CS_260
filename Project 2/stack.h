#ifndef STACK_H
#define STACK_H
#include "event.h"

class stack {

private:
	struct node {
		event data;
		node* link;
	};
	node* top;

public:
	stack();
	~stack();

	bool isEmpty(void) const;
	bool push(const event& anEntry);
	bool pop();
	bool peek(event& anEntry);

	void remove_top(int builder_num, int current_sector);

	



};
#endif // !STACK_H