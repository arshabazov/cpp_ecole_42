//
// Created by Cristie Dell on 9/30/22.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: Form("RobotomyRequestForm", 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy)
	: Form(copy) {}

const RobotomyRequestForm& RobotomyRequestForm::operator = (const RobotomyRequestForm& other) {
	if (this == &other)
		return *this;
	this->Form::operator=(other);
	const_cast<std::string&>(this->target) = other.getTarget();

	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

const std::string& RobotomyRequestForm::getTarget() const {
	return this->target;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (!this->getIsSigned()) {
		throw FormNotSignedException();
	} else if (this->getGradeToExecute() > executor.getGrade()) {
		throw GradeTooLowException();
	} else {
		std::cout << "beep beep boop, EXCUSE my FRENCH" << std::endl;
		int random = std::rand() % 2;
		if (random == 0) {
			std::cout << this->getTarget()
				<< "has been successfully robotomised" << std::endl;
		} else {
			std::cout << "Robotomy procedure on " << this->getTarget()
				<< " has failed" << std::endl;
		}
	}
}
