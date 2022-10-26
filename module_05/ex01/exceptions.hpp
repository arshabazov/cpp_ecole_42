#ifndef ECEPTIONS_HPP
#define ECEPTIONS_HPP

#include <stdexcept>

enum Grade {
	HIGHEST_GRADE = 1,
	LOWEST_GRADE = 150
};

class GradeTooHighException: public std::range_error {
public:
	GradeTooHighException();
};
class GradeTooLowException: public std::range_error {
public:
	GradeTooLowException();
};

#endif