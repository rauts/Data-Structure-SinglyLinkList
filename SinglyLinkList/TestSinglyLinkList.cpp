
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

void TestRemoveHeadFunction() {
	List<int> l{};
	assert(l.IsEmpty());
	assert(l.CountNode() == 0);
	cout << "Node count = " << l.CountNode() << '\n';
	l.InsertHead(1);
	l.InsertHead(2);
	l.InsertHead(3);
	assert(!l.IsEmpty());
	assert(l.CountNode() == 3);
	cout << "l.InsertHead(1) \n";
	cout << "l.InsertHead(2) \n";
	cout << "l.InsertHead(3) \n";
	cout << "Node count = " << l.CountNode() << '\n';
	l.RemoveHead();
	assert(l.CountNode() == 2);
	cout << "l.RemoveHead() \n";
	cout << "Node count = " << l.CountNode() << '\n';
	cout << "\n-----------------------------\n";
	cout << "RemoveHead() Test PASSED!";
	cout << "\n-----------------------------\n";
}

void TestClearFunction() {
	List<int> l{};
	l.InsertHead(1);
	l.InsertHead(2);
	l.InsertHead(3);
	assert(!l.IsEmpty());
	assert(l.CountNode() == 3);
	cout << "l.InsertHead(1) \n";
	cout << "l.InsertHead(2) \n";
	cout << "l.InsertHead(3) \n";
	cout << "Node count = " << l.CountNode() << '\n';

	l.Clear();
	cout << "l.Clear() \n";
	cout << "Node count = " << l.CountNode() << '\n';
	cout << "\n-----------------------------\n";
	cout << "Clear() Test PASSED!";
	cout << "\n-----------------------------\n";

}