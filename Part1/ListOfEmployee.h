#pragma once
#include "NodeOfEmployee.h"
#include <string>
using namespace std;
class ListOfEmployee
{
public:
	ListOfEmployee();
	ListOfEmployee(Employee e);
	ListOfEmployee(const ListOfEmployee& e);
	~ListOfEmployee();

	void insertAtFront(string name, double salary);
	void deleteMostRecent();
	void getSalary(string name);
	void printList();
	ListOfEmployee operator=(const ListOfEmployee& list);

	

private:
	NodeOfEmployee* head;
};

