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
		node->mNext = mHead; 
		mHead = node;
		// increment node count
		++mNodeCount;
	}

	// remove head
	void RemoveHead() {
		
		assert(!IsEmpty());
		// create a new head node to point to the current head->next node
		Node* newHead = mHead->mNext;
		// delete the current head node
		delete mHead;
		// assign new head node to head node
		mHead = newHead;
		// decrement the node count 	
		--mNodeCount;

	}

	// clear all nodes
	void Clear() {
		while (mHead != nullptr) {
			RemoveHead();
		}
	}

	// print date in each node in the console window
	friend std::ostream& operator << (std::ostream& os, const List<T>& list) {
		if (list.IsEmpty()) {
			os << "Empty list!\n";
		}
		else {
			Node* node = list.mHead;
			os << "[";
			while (node != nullptr) {
				os << node->mData << " ";
				node = node->mNext;
			}
			os << "]\n";
		}
		return os;
	}

	// return a node which matches a searched item
	Node* Find(T value) {

		if (IsEmpty()) {
			return nullptr;
		}
		else {

			Node* node = mHead;
			while (node != nullptr) {
				if (node->mData == value) {
					return node;
				}
				else {
					node = node->mNext;
				}
			}
			return nullptr;
		}
	}

	void InsertAfter(Node* node, const T& value) {
		assert(node != nullptr);
		// create a new node with a value
		Node* newNode = new Node{ value };
		// connect neighbour of the new node to the neighbour of the given node
		newNode->mNext = node->mNext;
		// make newNode the neighbour of the given node 
		node->mNext = newNode;
		++mNodeCount;
	}
		
};