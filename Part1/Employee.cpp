#include "Employee.h"
#include <iostream>
using namespace std;


Employee::Employee()
{}

Employee::Employee(string n, double s) {
	name = n;
	salary = s;
}

string Employee::getName() {
	return name;
}
double Employee::getSalary() {
	return salary;
}

ostream& operator<<(ostream& output, const Employee& e) {
	output << "Employee name: " << e.name << " with a salary of: " << e.salary << endl;
	
	return output;
}

Employee::~Employee(){
	
}
