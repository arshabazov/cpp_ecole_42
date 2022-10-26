#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	try {
		Bureaucrat b1("Miklukho Maklai", 30);
		Bureaucrat b2("Sam Ported Bridges", 100);
		// Form wrongForm1("Form 1", 0, 50);
		// Form wrongForm2("Form 2", 40, 151);
		Form form("Form number 52", 50, 80);

		std::cout << "\n|----------------------------------------|\n\n";
		// b1.signForm(form);
		b2.signForm(form);
		std::cout << "\n|----------------------------------------|\n\n";
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}