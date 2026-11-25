
#include "bst.h"

int main()
{
	bst<int> b;
	b.insert(5);
	b.insert(3);
	b.insert(7);
	b.insert(4);
	b.insert(2);
	b.insert(9);

	std::cout << "Size= " << b.size() << '\n';
	int n;
	std::cout << "Enter number to find: \n";
	std::cin >> n;
	if (b.find(n))
		std::cout << "Element is present.";
	else
		std::cout << "Element is not present.";

}

