#include "Bureaucrat.hpp"

int main() {
	try {
		// Bureaucrat b1("Alt Cunningham", 0);
		// Bureaucrat b2("Ronnie Pickering", 155);
		Bureaucrat b3("Miklukho Maklai", 30);
		Bureaucrat b4("Sam Ported Bridges", 50);

		// b3.incrementGrade(30);
		// b4.decrementGrade(101);
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}