//
// Created by Cristie Dell on 9/30/22.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form("ShrubberyCreationForm", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy)
	: Form(copy) {}

const ShrubberyCreationForm& ShrubberyCreationForm::operator = (const ShrubberyCreationForm& other) {
	if (this == &other)
		return *this;
	this->Form::operator=(other);
	const_cast<std::string&>(this->target) = other.getTarget();

	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

const std::string& ShrubberyCreationForm::getTarget() const {
	return this->target;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (!this->getIsSigned()) {
		throw FormNotSignedException();
	} else if (this->getGradeToExecute() > executor.getGrade()) {
		throw GradeTooLowException();
	} else {
		std::ofstream out_file;
		out_file.open(this->target + "_shrubbery", std::ios::in | std::ios::trunc);
		if (!out_file.is_open()) {
			throw FileNotFoundException(this->target + "_shrubbery");
		}
		out_file << TREE;
		out_file.close();
	}
}

std::ostream& operator<<(std::ostream& stream, const ShrubberyCreationForm& form) {
	stream	<< "Form: " << form.getName()
			<< " created for " << form.getTarget();
	return stream;
}
