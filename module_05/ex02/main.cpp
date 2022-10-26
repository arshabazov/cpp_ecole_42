#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	try {
		Bureaucrat miklukho("Miklukho Maklai", 40);
		Bureaucrat sam("Sam Ported Bridges", 100);
		Bureaucrat vandal("Vandal Savage", 150);

		ShrubberyCreationForm shrubbery("Eternity");
		PresidentialPardonForm pardon("Avout");
		RobotomyRequestForm robo_hobo("Tim");

		std::cout << "\n|----------------------------------------|\n\n";

		miklukho.executeForm(pardon);
		miklukho.signForm(pardon);
		miklukho.executeForm(pardon);

		std::cout << "\n|----------------------------------------|\n\n";

		sam.signForm(robo_hobo);
		miklukho.executeForm(robo_hobo);
		sam.executeForm(robo_hobo);

		std::cout << "\n|----------------------------------------|\n\n";

		vandal.signForm(shrubbery);
		sam.executeForm(shrubbery);
		vandal.executeForm(shrubbery);

		std::cout << "\n|----------------------------------------|\n\n";
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}