#include "template.hpp"
#include "iostream"

int main() {
	int a = 2;
	int b = 3;

	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

	std::string c = "Soldier Boy";
	std::string d = "Black Noir";
	std::cout << std::endl << "Before swap:" << std::endl;
	std::cout << "c = " << c << ", d = " << d << std::endl;

	::swap(c, d);
	std::cout << std::endl << "After swap:" << std::endl;
	std::cout << "After swap: c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "max(c, b) = " << ::max(c, d) << std::endl;

	return 0;
}