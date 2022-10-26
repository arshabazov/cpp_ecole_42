#include <iostream>
#include "easyfind.hpp"
#include <vector>

int main() {
	std::vector<int> nums1;
	std::vector<int>::iterator it;

	for (int i = 0; i < 20; ++i) {
		nums1.push_back(i);
	}

	try {
		it = easyfind(nums1, 15);
		std::cout << "Number = " << *it << std::endl;
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		it = easyfind(nums1, 20);
		std::cout << *it << std::endl;
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}