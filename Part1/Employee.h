#pragma once
#include <string>
using namespace std;
class Employee
{
public:
	Employee();
	Employee(string name, double salary);
	Employee(const Employee& e);
	friend ostream& operator<<(ostream& output, const Employee& e);
	~Employee();
	string getName();
	double getSalary();
private:
	string name;
	double salary;

};

