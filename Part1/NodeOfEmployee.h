#pragma once
#include "Employee.h"
class NodeOfEmployee
{
	friend class ListOfEmployee;
public:
	NodeOfEmployee();
	NodeOfEmployee(Employee e);
	~NodeOfEmployee();
	
private:
	NodeOfEmployee* next;
	Employee empData;
};

