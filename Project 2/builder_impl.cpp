#include "builder.h"

builder::builder(int builderNum) {
	builder_num = builderNum;
}

void builder::setBuilderNum(int builderNum) {
	builder_num = builderNum;
}

int builder::getBuilderNum() {
	return builder_num;
}



void builder::addRequest(int sector, structure_type building_type) {
	event data;
	data.setSector(sector);
	data.setType(building_type);

	cout << "Builder #" << builder_num << ": Received request to build a ";
	cout << str(building_type) << " in sector " << sector << endl;
	list.insertFront(data);

	
}

bool builder::doCycle() {

	// if request list not Empty
	if (!list.isEmpty()) {

		int stack_sector = list.get_head_sector();
		structure_type stack_type = list.get_head_type();

		event stack_data;
		stack_data.setSector(stack_sector);
		stack_data.setType(stack_type);

		if (current_sector != list.get_head_sector()) {
			cout << "Builder #" << builder_num << ": Moving to sector " << list.get_head_sector() << endl;
			current_sector = list.get_head_sector();
		}
		cout << "Builder #" << builder_num << ": Building a " << str(list.get_head_type()) << " in sector " << list.get_head_sector() << endl;

		stack.push(stack_data);

		list.removeBack();

		return true;
	}
	
	else {
		//no request in the linked list
		return false;
	}
}

void builder::returnHome() {
	if (!stack.isEmpty()) {
		
		stack.remove_top(builder_num, current_sector);

	}
}