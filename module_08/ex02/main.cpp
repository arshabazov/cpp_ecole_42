#include "MutantStack.tpp"
#include <iostream>

int main() {
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << "stack top item = " << mstack.top() << std::endl;

		mstack.pop();

		std::cout << "size = " << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(101);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator it_end = mstack.end();

		++it;
		--it;
		while(it != it_end) {
			std::cout << "stack item = " << *it << std::endl;
			++it;
		}
		*it = 5;
	}
	
	std::cout << "\n-------------------------------------------|\n\n";

	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);
		mstack.push(3);
		mstack.push(5);
		mstack.push(101);

		MutantStack<int>::reverse_iterator it = mstack.rbegin();
		MutantStack<int>::reverse_iterator it_end = mstack.rend();

		while(it != it_end) {
			std::cout << "stack item = " << *it << std::endl;
			++it;
		}
	}

	return 0;
}
