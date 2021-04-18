#include "list.h"
#include <iostream>

using std::cin; using std::cout; using std::endl;

Node* Node::insertNext(Node* node, int val)
{
	Node* n = new Node(val);
	n->val = val;
	n->next = node->next;
	node->next = n;

	return n;

}
Node* Node::deleteNext(Node* n)
{
	n->next = n->next->next;
	// delete n->next;

	return n;
}
void printList(Node* n)
{
	for (Node* node = n; node != nullptr; node = node->next)
		cout << node->val << "->";

	cout << "null" << endl;

	return;
}

Node* Node::reverseList(Node* n)
{
	Node* reverse = nullptr, * processed, * unprocessed;

	for (processed = n; processed != nullptr; processed = unprocessed)
	{
		unprocessed = processed->next;
		processed->next = reverse;
		reverse = processed;
	}

	return reverse;
}
Node* randomList(int n, int b = 0, int e = RAND_MAX)
{
	Node* node = new Node((rand() % (e - b + 1)) + b), * head = node;

	for (int i = 1; i < n; ++i)
	{
		node = (node->next = new Node((rand() % (e - b + 1)) + b));
		node->next = nullptr;
	}

	return head;
}
Node* insertionSort(Node* n)
{
	// dummy head nodes
	Node* a = new Node(n), * b = new Node();

	// pointers to process list
	Node* x, *y, *t;

	for (x = a->next; x != nullptr; x = y)
	{
		y = x->next;

		for (t = b; t->next != nullptr; t = t->next)
			if (t->next->val > x->val) break;

		x->next = t->next;
		t->next = x;
	}

	return b->next;
}
