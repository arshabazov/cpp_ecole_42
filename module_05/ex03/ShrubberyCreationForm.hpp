#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

#define TREE \
"               &&&\n"\
"             &&&  &&&\n"\
"          &&& &&  & &&\n"\
"      && &\\/&\\|& ()|/ @, &&\n"\
"      &\\/(/&/&||/& /_/)_&/_&\n"\
"   &() &\\/&|()|/&\\/ '%' & ()\n"\
"  &_\\_&&_\\ |& |&&/&__%_/_& &&\n"\
"&&   && & &| &| /& & % ()& /&&\n"\
" ()&_---()&\\&\\|&&-&&--%---()~\n"\
"     &&     \\|||\n"\
"             |||\n"\
"             |||\n"\
"             |||\n"\
"       , -=-~  .-^- _\n"\
"		       `\n"

class ShrubberyCreationForm : public Form {
private:
	const std::string target;

public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm& copy);
	~ShrubberyCreationForm();
	const ShrubberyCreationForm& operator = (const ShrubberyCreationForm& other);

	const std::string& getTarget() const;
	void execute(Bureaucrat const & executor) const;
};

std::ostream& operator<<(std::ostream& stream, const ShrubberyCreationForm& form);

#endif