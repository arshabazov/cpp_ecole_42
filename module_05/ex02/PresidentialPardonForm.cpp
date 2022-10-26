//
// Created by Cristie Dell on 9/30/22.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: Form("PresidentialPardonForm", 25, 5), target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy)
	: Form(copy) {}

const PresidentialPardonForm& PresidentialPardonForm::operator = (const PresidentialPardonForm& other) {
	if (this == &other)
		return *this;
	this->Form::operator=(other);
	const_cast<std::string&>(this->target) = other.getTarget();

	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

const std::string& PresidentialPardonForm::getTarget() const {
	return this->target;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (!this->getIsSigned()) {
		throw FormNotSignedException();
	} else if (this->getGradeToExecute() > executor.getGrade()) {
		throw GradeTooLowException();
	} else {
		std::cout << this->getTarget()
			<< " has been pardoned by Mr president Zaphod Beeblebrox"
			<< std::endl;
	}
}
