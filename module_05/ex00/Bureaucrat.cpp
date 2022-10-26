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
	const_cast<std::string&>(this->name) = other.getName();
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

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& bureaucrat) {
	stream << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return stream;
}
