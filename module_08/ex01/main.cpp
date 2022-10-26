#include "Span.hpp"

int main() {
	try {
		Span span(5);
		span.addNumber(6);
		span.addNumber(3);
		span.addNumber(17);
		span.addNumber(9);
		span.addNumber(11);
		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;
	} catch (const std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n|-----------------------------------------------|\n\n";

	try {
		std::vector<int> vec;
		for (int i = 0; i < 11000; ++i) {
			vec.push_back(i + (std::rand() % (11000 - i)));
			srand(time(NULL));
		}

		Span span(11000);
		span.addSequence(vec.begin(), vec.end() - 1);
		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;
	} catch (const std::exception& e) {

	}

	return 0;
}