#pragma once
#include<cassert>

template <class T>
class List {

private:
	// a node contains data and a next pointer pointing to another node
	struct Node {
		T mData{};
		Node* mNext{ nullptr };
		// create empty node
		Node() = default;
		// create a node to store a data
		explicit Node(const T& data) : mData{data} {			
		}
		// create a node to stroe a data and a next pointer to pointing another node
		Node(const T& data, Node* next) : mData{ data }, mNext{ next } {}
	};
	// a head pointer to point the head node in the list

	Node* mHead{ nullptr };

	int mNodeCount{ 0 };

	// Ban copy and assignment
	List<T>(const List& l) = delete;
	List<T>& operator = (const List& l) = delete;
	

public:
	// default constructor
	List() = default;
	// destructor
	~List() { Clear(); }	

	// utility functions
	bool IsEmpty() const { return mNodeCount == 0; }
	int CountNode() const { return mNodeCount; }

	// insert head
	void InsertHead(const T& data) {
		// create a node with a value
		Node* node = new Node{ data };
		// change the head node		
		node->mNext = mHead; // mHead is nullptr initially
		mHead = node;
		// increment node count
		++mNodeCount;
	}

	// remove head
	void RemoveHead() {
		// create a new head node to point to the current head->next node
		// delete the current head node
		// assign new head node to head node
		// decrement the node count 	 
		assert(!IsEmpty());
		Node* newHead = mHead->mNext;
		delete mHead;
		mHead = newHead;
		--mNodeCount;

	}

	// clear all nodes
	void Clear() {
		while (mHead != nullptr) {
			RemoveHead();
		}
	}
		
};