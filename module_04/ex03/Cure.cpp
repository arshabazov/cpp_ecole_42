//
// Created by Cristie Dell on 9/17/22.
//

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout	<< "Default constructor of " << this->getType()
				<< " called" << std::endl;
}

Cure::Cure(const Cure& copy) : AMateria(copy) {
	std::cout	<< "Copy constructor pf " << this->getType()
				<< " called" << std::endl;
}

Cure::~Cure() {
	std::cout	<< "Destructor of " << this->getType()
				<< " called" << std::endl;
}

const Cure& Cure::operator = (const Cure& other) {
	// this->type = other.getType();
	(void)other;

	return *this;
}

AMateria* Cure::clone() const {
	return new Cure(*this);
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
