//
// Created by Cristie Dell on 9/17/22.
//

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout	<< "Default constructor of " << this->getType()
				<< " called" << std::endl;
}

Ice::Ice(const Ice& copy) : AMateria(copy) {
	std::cout	<< "Copy constructor of " << this->getType()
				<< " called" << std::endl;
}

Ice::~Ice() {
	std::cout	<< "Destructor of " << this->getType()
				<< " called" << std::endl;
}

const Ice& Ice::operator = (const Ice& other) {
	// this->type = other.getType();
	(void)other;

	return *this;
}

AMateria* Ice::clone() const {
	return new Ice(*this);
}

void Ice::use(ICharacter& target) {
	std::cout	<< "* shoots an ice bolt at " << target.getName()
				<< " *"<< std::endl;
}
