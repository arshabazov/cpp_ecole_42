//
// Created by Cristie Dell on 9/27/22.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade)
	: name(name) {
	if (grade < HIGHEST_GRADE) {
		throw GradeTooHighException();
	} else if (grade > LOWEST_GRADE) {
		throw GradeTooLowException();
	}
	this->grade = grade;
	std::cout << "Parameterised constructor of Bureaucrat called"
		<< std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
	: name(copy.getName()), grade(copy.getGrade()) {
	std::cout << "Copy constructor of Bureaucrat called" << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Destructor of Bureaucrat called" << std::endl;
}

const Bureaucrat& Bureaucrat::operator = (const Bureaucrat& other) {
	// this->name = other.name;
	this->grade = other.grade;

	return *this;
}

const std::string& Bureaucrat::getName() const {
	return this->name;
}

int Bureaucrat::getGrade() const {
	return this->grade;
}

void Bureaucrat::incrementGrade(int value) {
	if (this->getGrade() - value < HIGHEST_GRADE) {
		throw (GradeTooHighException());
	}
	this->grade -= value;
}

void Bureaucrat::decrementGrade(int value) {
	if (this->getGrade() + value > LOWEST_GRADE) {
		throw (GradeTooLowException());
	}
	this->grade += value;
}

void Bureaucrat::signForm(Form& form) {
	try {
		form.beSigned(*this);
		std::cout	<< this->getName() << " signed " << form.getName()
					<< std::endl;
	} catch(const std::exception& e) {
		std::cout	<< this->getName() << " couldn't sign "
					<< form.getName() << " becuase " << e.what()
					<< std::endl;
	}
}

void Bureaucrat::executeForm(Form const & form) {
	try {
		form.execute(*this);
		std::cout
			<< "Bureaucrat " << this->getName()
			<< " executed " << form.getName()
			<< std::endl;
	} catch (const std::exception& e) {
		std::cout
			<< "Bureaucrat: " << this->getName()
			<< " failed to execute: " << form.getName()
			<< " due to: " << e.what()
			<< std::endl;
	}
}

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& bureaucrat) {
	stream << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return stream;
}
