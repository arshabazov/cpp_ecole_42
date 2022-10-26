//
// Created by Cristie Dell on 9/30/22.
//

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {
private:
	const std::string target;
	
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm& shrubbery);
	~RobotomyRequestForm();
	const RobotomyRequestForm& operator = (const RobotomyRequestForm& other);

	const std::string& getTarget() const;
	void execute(Bureaucrat const & executor) const;
};

std::ostream& operator<<(std::ostream& stream, const RobotomyRequestForm& form);

#endif //ROBOTOMYREQUESTFORM_HPP
