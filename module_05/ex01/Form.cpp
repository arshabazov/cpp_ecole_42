#include "Form.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExecute)
	: name(name) , gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
	this->isSigned = false;
	if (gradeToSign < HIGHEST_GRADE || gradeToExecute < HIGHEST_GRADE) {
		throw GradeTooHighException();
	} else if (gradeToSign > LOWEST_GRADE || gradeToExecute > LOWEST_GRADE) {
		throw GradeTooLowException();
	}
	std::cout << "Parameterised constructor of Form called" << std::endl;
}

Form::Form(const Form& copy)
	: name(copy.getName()),
	isSigned(copy.getIsSigned()),
	gradeToSign(copy.getGradeToSign()),
	gradeToExecute(copy.getGradeToExecute())
{
	std::cout << "Copy constructor of Form called" << std::endl;
}

Form::~Form() {
	std::cout << "Destructor of Form called" << std::endl;
}

const Form& Form::operator = (const Form& other) {
	const_cast<std::string&>(this->name) = other.getName();
	this->isSigned = other.getIsSigned();
	const_cast<int&>(this->gradeToSign) = other.getGradeToSign();
	const_cast<int&>(this->gradeToExecute) = other.getGradeToExecute();
	
	return *this;
}

const std::string Form::getName() const {
	return this->name;
}

bool Form::getIsSigned() const {
	return this->isSigned;
}

int Form::getGradeToSign() const {
	return this->gradeToSign;
}

int Form::getGradeToExecute() const {
	return this->gradeToExecute;
}

void Form::beSigned(const Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() < this->getGradeToSign()) {
		throw GradeTooLowException();
	}
	this->isSigned = true;
}

void Form::signForm() const {

}

std::ostream& operator<<(std::ostream& stream, const Form& form) {
	stream	<< "Form: " << form.getName()
			<< " is signed: " << form.getIsSigned()
			<< " grade to sign: " << form.getGradeToSign()
			<< " grade to execute: " << form.getGradeToExecute();
	return stream;
}
