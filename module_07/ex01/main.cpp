#include "iter.hpp"
#include <iostream>


template <typename T>
void printVal(const T& t) {
	std::cout << t << std::endl;
}

int main() {
	int intArray[] = {1, 4, 2, 5, 11, 101};
	std::string strArray[] = {"Panished Venom Snake", "Sam Porter Bridges", "Vandal Savage",
	"Alt Cunningham", "Ian Mackie", "Miklouho-Maclay"};
	
	iter(intArray, 6, printVal<int>);
	std::cout << std::endl;
	iter(strArray, 6, printVal<std::string>);
	
	return 0;
}
