#include "exceptions.hpp"

GradeTooHighException::GradeTooHighException() : std::range_error("Grade is too high") {}

GradeTooLowException::GradeTooLowException() : std::range_error("Grade is too low") {}
