#include "ListOfDoubles.h"
#include <iostream>
#include <string>
using namespace std;

ListOfDoubles::ListOfDoubles() {

}

ListOfDoubles::~ListOfDoubles() {
	while (head != NULL) {
		pop(); //get rid of everything.
	}
}

struct ListOfDoubles::Item {
	Item(const double& d) : val(d), next(nullptr)
	{}
	double val;
	Item *next;
};


void ListOfDoubles::push(const double& val) {
	if (head == NULL) {
		head = new Item(val);
		cout << "Stack created" << endl;
	}
	else {
		Item* tmp = head;
		head = new Item(val);
		head->next = tmp;
	}
}



void ListOfDoubles::pop() {
	if (head != NULL) {
		Item* tmp = head;
		head = head->next;
		delete tmp;
	}
	else {
		cout << "Stack is empty";
	}
}

double ListOfDoubles::top() {
	
		return head->val;
	
	
}



ostream& operator<<(ostream& inputStream, ListOfDoubles& a) {
	while (a.head != NULL) {
		inputStream << "Value: " << a.top() << endl;
		a.pop();
	} 
		return inputStream;
	

}
ListOfDoubles::ListOfDoubles(const ListOfDoubles& e) {
	ListOfDoubles list;
	while (e.head != NULL) {
		list.push(e.top()); //Trying to get the top value and make the new list starting with that.
		e.pop(); // remove that info so the next value can be pushed. I know it's wrong but i'm not sure how to fix
		
	}

}

ListOfDoubles ListOfDoubles::operator=(ListOfDoubles& list) {
	ListOfDoubles newList(list);
	return *this;
}
