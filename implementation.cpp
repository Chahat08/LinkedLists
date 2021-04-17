#include "list.h"
#include <iostream>

using std::cin; using std::cout;

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
	delete n->next;

	return n;
}
void Node::printList(Node* n)
{
	for (Node* node = n; node != nullptr; node = node->next)
		cout << node->val << "->";
	cout << "null";
}