
#include <iostream>
using std::cout;

#include <cassert>
#include "SinglyLinkList.h"
#include "TestSinglyLinkList.h"

void TestEmptyList() {
	List<int> l{};
	assert(l.IsEmpty());
	assert(l.CountNode() == 0);
	cout << "\n-----------------------------\n";
	cout << "EmptyList Test PASSED!";
	cout << "\n-----------------------------\n";
}

void TestInsertHeadFunction() {
	List<int> l{};
	assert(l.IsEmpty());
	assert(l.CountNode() == 0);
	cout << "Node count = " << l.CountNode() << '\n';
	l.InsertHead(1);
	assert(!l.IsEmpty());
	assert(l.CountNode() == 1);
	cout << "l.InsertHead(1) \n";
	cout << "Node count = " << l.CountNode() << '\n';
	cout << "\n-----------------------------\n";
	cout << "InsertHead() Test PASSED!";
	cout << "\n-----------------------------\n";

}