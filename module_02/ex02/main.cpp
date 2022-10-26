#include <iostream>
#include "Fixed.hpp"

int main() {
	Fixed a;
	Fixed b(Fixed(5.05f) * Fixed(2));
	Fixed c(Fixed(5.05f) / Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;

	std::cout << c << std::endl;
	std::cout << Fixed::max(a, c) << std::endl;

	return 0;
}