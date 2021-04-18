#include "list.h"
#include <iostream>
#include <sstream>

using std::cin; using std::cout;
using std::string; using std::stringstream;
using std::endl;

int main(int argc, char* argv[])
{
	int n, b = 1, e = 10;

	for (int i = 1; i < argc; ++i)
	{
		stringstream ss(argv[i]);
		if (i == 1) ss >> n;
		else if (i == 2) ss >> b;
		else ss >> e;
	}

	Node* lst = randomList(n, b, e);
	printList(lst);
	//cout << "back";
	printList(insertionSort(lst));
	//insertionSort(lst);

	cout << "end";
	return 0;
}