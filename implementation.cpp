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
Node* Node::randomList(int n, int b = 0, int e = RAND_MAX)
{
	Node* node, *head = node;
	for (int i = 0; i < n; ++i)
	{
		node->next = new Node((rand() % (e-b + 1)) + e);
		node = node->next;
	}
	node = nullptr;

	return head->next;
}
void Node::printList(Node* n)
{
	for (Node* node = n; node != nullptr; node = node->next)
		cout << node->val << "->";
	cout << "null" << endl;
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

Node* Node::insertionSort(Node* n)
{
	// dummy head nodes
	Node* a = n, * b, *x, *y, *t, *u;
	b->next = nullptr;
	b->next->val = INT_MIN;

	for (x = a->next; x != nullptr; x = y)
	{
		y = x->next;

		for (t = b->next; t != nullptr; t = u)
		{
			u = t->next;
			if (((x->val) >= (t->val)) && ((x->val) <= (t->next->val)))
			{
				a->next = x->next;
				x->next = t->next;
				t->next = x;
			}
		}

	}

	return b->next;
}
