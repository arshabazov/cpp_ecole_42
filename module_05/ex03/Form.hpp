//
// Created by Cristie Dell on 9/28/22.
//

#ifndef FORM_HPP
#define FORM_HPP

#include "exceptions.hpp"
#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

class Bureaucrat;

// enum Grade {
// 	HIGHEST_GRADE = 1,
// 	LOWEST_GRADE = 150
// };

class Form {
private:
	const std::string name;
	bool isSigned;
	const int gradeToSign;
	const int gradeToExecute;

public:
	Form(std::string name, int gradeToSign, int gradeToExecute);
	Form(const Form& copy);
	virtual ~Form();
	const Form& operator = (const Form& other);

	// Getters
	const std::string getName() const;
	bool getIsSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;

	void beSigned(const Bureaucrat& bureaucrat);
	virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream& stream, const Form& form);

#endif