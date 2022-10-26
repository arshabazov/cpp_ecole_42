//
// Created by Cristie Dell on 9/17/22.
//

#include "AMateria.hpp"


AMateria::AMateria(std::string const& type) : type(type) {
	std::cout << "AMateria Parametarised Constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& copy) {
	this->type = copy.getType();
	std::cout << "AMateria Copy Constructor called" << std::endl;
}

AMateria::~AMateria() {
	std::cout << "AMateria Destructor Constructor called" << std::endl;
}

const AMateria& AMateria::operator = (const AMateria& other) {
	// this->type = other.getType();
	(void)other;
	std::cout	<< "Assignment operator has for Materia " << this->getType()
				<< " called" << std::endl;

	return *this;
}

std::string const &AMateria::getType() const {
	return this->type;
}

void AMateria::use(ICharacter& target) {
	std::cout << target.getName();
}
