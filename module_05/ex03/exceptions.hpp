#ifndef ECEPTIONS_HPP
#define ECEPTIONS_HPP

#include <stdexcept>
#include <string>

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

class FormNotSignedException: public std::runtime_error {
public:
	FormNotSignedException();
};

class FileNotFoundException: public std::runtime_error {
public:
	FileNotFoundException(const std::string file);
};

class FormNotFoundException: public std::runtime_error {
public:
	FormNotFoundException(const std::string form);
};

#endif