//
// Created by Cristie Dell on 10/1/22.
//

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern& copy) {
	*this = copy;
}

Intern::~Intern() {}

const Intern& Intern::operator = (const Intern& other) {
	(void)other;
	return *this;
}

Form* Intern::makeShrebberyForm(const std::string& target) {
	return new ShrubberyCreationForm(target);
}

Form* Intern::makeRobotomyForm(const std::string& target) {
	return new RobotomyRequestForm(target);
}

Form* Intern::makePresidentalForm(const std::string& target) {
	return new PresidentialPardonForm(target);
}

Form* Intern::makeForm(const std::string& formName, const std::string& target) {
	std::string forms[] = {SHRUBERRY, ROBOTOMY, PARDON};
	int index = 0;
	for (; index < 3 && forms[index] != formName; ++index);
	
	switch (index)
	{
	case SHRUBERRY_FORM:
		return this->makeShrebberyForm(target);
	case ROBOTOMY_FORM:
		return this->makeRobotomyForm(target);
	case PARDON_FORM:
		return this->makePresidentalForm(target);
	default:
		throw FormNotFoundException(formName);
		break;
	}
	return nullptr;
}
