#ifndef EVENT_H
#define EVENT_H
#include <iostream>
#include <cstring>
#include "structuretype.h"
using namespace std;


class event {
private:
	int sector;
	structure_type building_type;

public:
	event();
	event(int str, structure_type type);

	void setSector(int str);
	int getSector();

	void setType(structure_type type);
	structure_type getType();


};

#endif //!EVENT_H


