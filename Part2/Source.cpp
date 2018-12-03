#include <iostream>
#include "ListOfDoubles.h"


using namespace std;

int main() {
	ListOfDoubles list;
	
	list.push(1);
	list.push(3);
	list.push(5);
	list.push(7); // 1, 3, 5, 7 are added
	list.pop(); //7 is deleted
	
	cout << list.top() << endl; //5 is now at the top

	ListOfDoubles newList;
	newList = list;
	//Error is line 70 on ListOfDoubles.cpp

	system("pause");
	
}