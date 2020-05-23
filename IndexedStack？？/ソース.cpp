#include <iostream>

#include "IndexedStack.h"

int main() {
	IndexedStack<int> IS;

	for (std::size_t i = 0; i < 7; i++) {
		IS.Push(i);
	}
	for (auto& o : IS) {
		std::cout << o << ',';
	}
	std::cout << std::endl;

	while (IS.Size()) { IS.Pop(); }
	
	for (auto& o : IS) {//non of show.
		std::cout << o << ',';
	}
	std::cout << std::endl;

	return 0;
}