#include "event.h"

event::event()  {
	sector = -1;
	
}

event::event(int str, structure_type type) {
	sector = str;
	building_type = type;

}

void event::setSector(int str) {
	sector = str;
}

int event::getSector() {
	return sector;
}


void event::setType(structure_type type) {
	building_type = type;
}

structure_type event::getType() {
	return building_type;
}

