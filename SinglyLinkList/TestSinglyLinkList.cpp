
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