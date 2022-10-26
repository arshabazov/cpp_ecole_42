//
// Created by Cristie Dell on 9/27/22.
//

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "exceptions.hpp"
#include "Form.hpp"

class Form;

// enum Grade {
// 	HIGHEST_GRADE = 1,
// 	LOWEST_GRADE = 150
// };

class Bureaucrat {
private:
	const std::string name;
	int grade;

public:
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat& copy);
	~Bureaucrat();
	const Bureaucrat& operator = (const Bureaucrat& other);

	// Member functions
	const std::string& getName() const;
	int getGrade() const;

	void incrementGrade(int grade);
	void decrementGrade(int grade);
	void signForm(Form& form);
	void executeForm(Form const & form);
};

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& bureaucrat);

#endif