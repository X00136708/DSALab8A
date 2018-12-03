#ifndef LISTOFDOUBLES_H_
#define LISTOFDOUBLES_H_

#include <iostream>
using namespace std;


class ListOfDoubles
{
public:
	friend ostream& operator<<(ostream& stream, ListOfDoubles& a);
	ListOfDoubles();
	~ListOfDoubles();
	void displayList();
	void push(const double& val);
	void pop();
	double top();
	ListOfDoubles(const ListOfDoubles& e);
	ListOfDoubles operator=(const ListOfDoubles& list);

private:
	struct Item;
	Item* head;


};
#endif