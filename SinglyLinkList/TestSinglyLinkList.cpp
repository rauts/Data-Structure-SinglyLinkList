
#include <iostream>
#include <string>
using std::cout;
using std::string;

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

void TestInsertionOperator() {
	List<int> l{};
	
	cout << "l = " << l<<'\n';

	l.InsertHead(1);
	l.InsertHead(2);
	l.InsertHead(3);
	assert(!l.IsEmpty());
	assert(l.CountNode() == 3);

	cout << "l.InsertHead(1) \n";
	cout << "l.InsertHead(2) \n";
	cout << "l.InsertHead(3) \n";
	
	cout << "l = " << l << '\n';

	cout << "\n-----------------------------\n";
	cout << "<< Operator Test PASSED!";
	cout << "\n-----------------------------\n";
}


void TestFindFunction() {
	List<int> l{};
	l.InsertHead(5);
	l.InsertHead(100);
	l.InsertHead(3);
	assert(!l.IsEmpty());
	assert(l.CountNode() == 3);

	cout << "l.InsertHead(5) \n";
	cout << "l.InsertHead(100) \n";
	cout << "l.InsertHead(3) \n";

	cout << "l = " << l << '\n';

	auto pos = l.Find(100);
	assert(pos->mData == 100);

	cout << "auto pos = l.Find(100) \n";
	cout << "pos->mData = " << pos->mData<<'\n';

	pos = l.Find(1);
	assert(pos == nullptr);
	cout << "pos = l.Find(1) \n";

    string flag = (pos == nullptr) ? "true" : "false";
	cout << "pos == nullptr " << flag << '\n';

	cout << "\n-----------------------------\n";
	cout << "Find() Test PASSED!";
	cout << "\n-----------------------------\n";

}

void TestInsertAfterFunction() {
	List<int> l{};
	l.InsertHead(5);
	l.InsertHead(100);
	l.InsertHead(3);
	assert(!l.IsEmpty());
	assert(l.CountNode() == 3);

	cout << "l.InsertHead(5) \n";
	cout << "l.InsertHead(100) \n";
	cout << "l.InsertHead(3) \n";

	cout << "l = " << l << '\n';

	auto pos = l.Find(100);
	assert(pos->mData == 100);

	cout << "auto pos = l.Find(100) \n";
	cout << "pos->mData = " << pos->mData << '\n';

	l.InsertAfter(pos, 20);
	assert(l.CountNode() == 4);
		
	cout << "l.InsertAfter(pos, 20) \n";
	cout << "l = " << l << '\n';

	cout << "\n-----------------------------\n";
	cout << "InsertAfter() Test PASSED!";
	cout << "\n-----------------------------\n";

}