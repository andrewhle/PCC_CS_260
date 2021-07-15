#include "stack.h"

stack::stack() : top(nullptr) {
	
}

stack::~stack() {
	while (!isEmpty()) {
		pop();
	}
}

bool stack::isEmpty() const {
	return (top == nullptr);
}


bool stack::push(const event& anEntry) {
	
	node* new_node = new node;
	new_node->data = anEntry;
	new_node->link = top;
	top = new_node;
	return true;
}

bool stack::pop() {
	bool result = false;

	//stack is not empty
	if (!isEmpty()) {

		node* delete_temp = top;
		top = top->link;

		//delete the link between top and previous node;
		delete_temp->link = nullptr;

		//delete node
		delete delete_temp;
		delete_temp = nullptr;
		result = true;
	}
	return result;
}

bool stack::peek(event& anEntry) {

	bool result = false;
	if (!isEmpty) {

		anEntry = top->data;
		result = true;
	}
	return result;

}



void stack::remove_top(int builder_num, int current_sector) {

	int sector_num = current_sector;
	while (top != nullptr) {
		if (sector_num != top->data.getSector()) {
			cout << "Builder #" << builder_num << ": Moving to sector " << top->data.getSector() << endl;
			sector_num = top->data.getSector();

		}
		cout << "Builder #" << builder_num << ": Connected to a";
		cout << str(top->data.getType()) << " in sector " << sector_num << endl;

		pop();

		
	}

}