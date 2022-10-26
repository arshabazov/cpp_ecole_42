//
// Created by Cristie Dell on 10/1/22.
//

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <string>

#define SHRUBERRY "shrubbery creation"
#define ROBOTOMY "robotomy request"
#define PARDON "residential pardon"

enum Forms {
	SHRUBERRY_FORM,
	ROBOTOMY_FORM,
	PARDON_FORM
};

class Intern {
// private:
// 	std::string forms[3];
public:
	Intern();
	Intern(const Intern& copy);
	~Intern();
	const Intern& operator = (const Intern& other);

	Form* makeForm(const std::string& formName, const std::string& target);

	Form *makeRobotomyForm(const std::string& target);
	Form *makePresidentalForm(const std::string& target);
	Form *makeShrebberyForm(const std::string& target);
};


#endif //INTERN_HPP
