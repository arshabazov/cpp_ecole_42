//
// Created by Cristie Dell on 9/30/22.
//

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
private:
	const std::string target;

public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm& shrubbery);
	~PresidentialPardonForm();
	const PresidentialPardonForm& operator = (const PresidentialPardonForm& other);

	const std::string& getTarget() const;
	void execute(Bureaucrat const & executor) const;
};


#endif //PRESIDENTIALPARDONFORM_HPP
