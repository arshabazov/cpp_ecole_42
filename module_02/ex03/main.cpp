#include <iostream>
#include "Point.hpp"

int main() {
	Point a(3.0f, 1.0f);
	Point b(-6.5f, 6.4f);
	Point c(-2.0f, -4.0f);
	Point point(2.9f, 1.0f);

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;

	std::cout << "point: " << point << std::endl;

	std::cout << "Is A point inside a triangle abc? " << std::endl;
	std::cout << (bsp(a,b,c,point) ? "true" : "false") << std::endl;

	return 0;
}