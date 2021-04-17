#include "list.h"
#include <iostream>

using std::cin; using std::cout;

int main()
{
	Node* head = new Node(1);
	Node* n1 = head->insertNext(head, 2);
	head->insertNext(n1, 3);
	head->insertNext(n1->next, 4);
	head->printList(head);
	// head->deleteNext(n1);
	Node* reverse = head->reverseList(head);
	head->printList(reverse);
	return 0;
}