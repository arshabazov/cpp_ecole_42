#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() {
	try {
		Intern poorShmuck;
		Form* shruberryForm;
		Form* robotomyForm;
		Form* pardonForm;
		Form* wrongForm;
		
		std::cout << std::endl;
		shruberryForm = poorShmuck.makeForm(SHRUBERRY, "Knights of Ni");
		std::cout << *static_cast<ShrubberyCreationForm*>(shruberryForm) 
			<< std::endl << std::endl;
		
		robotomyForm = poorShmuck.makeForm(ROBOTOMY, "Rex \"Power\" Colt");
		std::cout << *static_cast<ShrubberyCreationForm*>(robotomyForm)
			<< std::endl << std::endl;
		
		pardonForm = poorShmuck.makeForm(PARDON, "Bravely bold Sir Robin");
		std::cout << *static_cast<ShrubberyCreationForm*>(pardonForm)
			<< std::endl << std::endl;

		wrongForm = poorShmuck.makeForm("wrong form", "Mr Nobody");
		std::cout << *static_cast<ShrubberyCreationForm*>(wrongForm)
			<< std::endl << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}