#include <iostream>
#include <string>
#include "linkedlist.h"
using namespace std;


class builder {
public:

	builder(int builderNum);
	void addRequest(int sector, structure_type building_type);
	bool doCycle();
	void returnHome();

	void setBuilderNum(int builderNum);
	int getBuilderNum();

private:
	int current_sector = -1;
	int builder_num;
	linkedlist list;
	stack stack;

};
