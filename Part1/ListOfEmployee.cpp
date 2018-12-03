#include "ListOfEmployee.h"
#include "Employee.h"
#include "NodeOfEmployee.h"
#include <iostream>
using namespace std;



ListOfEmployee::ListOfEmployee()
{
}



ListOfEmployee::~ListOfEmployee()
{
	delete head;
}

void ListOfEmployee::insertAtFront(string name, double salary) {
	NodeOfEmployee *emp = new NodeOfEmployee(Employee(name, salary));
	NodeOfEmployee *temp = head;
	head = emp;
	emp->next = temp;
}

void ListOfEmployee::printList() {
	NodeOfEmployee* emp = head;
	while (emp != NULL) {
		cout << emp->empData << endl;
		emp = emp->next;
	}
}
void ListOfEmployee::deleteMostRecent() {
	NodeOfEmployee* emp = head;
	NodeOfEmployee* temp = NULL;
	while (emp->next != NULL) {
		temp = emp;
		emp = emp->next;
	}
	temp->next = NULL;
	delete emp;
}

void ListOfEmployee::getSalary(string name) {
	NodeOfEmployee *emp = head;
	
	while (emp != NULL) {
		if (emp->empData.getName() == name) {
			cout << "Salary of " << name << " is " << emp->empData.getSalary() << endl;
		}
		emp = emp->next;
	}
}

ListOfEmployee::ListOfEmployee(const ListOfEmployee& e) {
	NodeOfEmployee *emp = e.head;
	ListOfEmployee list;
	while (emp != NULL) {
		list.insertAtFront(emp->empData.getName(), emp->empData.getSalary());
		emp = emp->next;
	}
	list.printList();

}
ListOfEmployee ListOfEmployee::operator=(const ListOfEmployee& list) {
	 ListOfEmployee newList(list);
	 return *this;
}




