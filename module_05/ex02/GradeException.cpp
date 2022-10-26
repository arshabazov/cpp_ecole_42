#include "exceptions.hpp"

GradeTooHighException::GradeTooHighException() : std::range_error("Grade is too high") {}

GradeTooLowException::GradeTooLowException() : std::range_error("Grade is too low") {}

FormNotSignedException::FormNotSignedException() : std::runtime_error("Form not signed") {}

FileNotFoundException::FileNotFoundException(const std::string file) : std::runtime_error(file + " file not found") {}
