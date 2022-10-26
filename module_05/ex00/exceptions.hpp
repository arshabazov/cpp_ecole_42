#ifndef ECEPTIONS_HPP
#define ECEPTIONS_HPP

#include <stdexcept>

class GradeTooHighException: public std::range_error {
public:
	GradeTooHighException();
};
class GradeTooLowException: public std::range_error {
public:
	GradeTooLowException();
};

#endif