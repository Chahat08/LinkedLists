/* INTERFACE FOR LISTS */
/* Gives the definition of a node and the deeclares the functions to be used. */

struct Node 
{
	// contents of the list node: the value to be stored and the pointer to the next node
	int val;
	Node* next;

	// constructors
	Node() : val(0), next(nullptr){}
	Node(int x) : val(x), next(nullptr){}
	Node(int x, Node* n) : val(x), next(n) {}

	// member function declarations

	// parameter: value of the next node (optional: reference to the current node)
	// returns: reference to the next node
	Node* insertNext(Node*, int);

	// parameter: current node, returns: current node after deletion of next
	Node* deleteNext(Node*);

	// parameter: given the pointer to the list, prints the list from that node to the end
	void printList(Node*);

	// parameters: takes the head of current list, returns reversed list
	Node* reverseList(Node*);
};