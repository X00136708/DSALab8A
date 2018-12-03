#include <iostream>
#include "Employee.h"
#include "ListOfEmployee.h"
#include "NodeOfEmployee.h"
using namespace std;

int main() {
	ListOfEmployee e;
	e.insertAtFront("Jeffrey", 40000);
	e.insertAtFront("John", 50000);
	e.insertAtFront("Ronnie", 100000);
	e.insertAtFront("Michael", 5);
	
	e.deleteMostRecent();
	e.printList();

	e.getSalary("John");

	ListOfEmployee newList;
	newList = e;
	
	


	system("pause");
}