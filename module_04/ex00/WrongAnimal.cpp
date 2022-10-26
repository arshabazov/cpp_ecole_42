//
// Created by Cristie Dell on 9/16/22.
//

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
	std::cout	<< "Default contructor of " << this->getType()
				<< " called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) {
	*this = copy;
	std::cout	<< "Copy constructor of " << this->getType()
				<< " called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout	<< "Destructor of " << this->getType()
				<< " called" << std::endl;
}

const WrongAnimal& WrongAnimal::operator = (const WrongAnimal& other) {
	this->type = other.getType();

	std::cout	<< "Assignment operator of " << this->getType()
				<< " called" << std::endl;
	
	return *this;
}

const std::string& WrongAnimal::getType() const {
	return this->type;
}

void WrongAnimal::makeSound() const {
	std::cout << "Ekke Ekke Ekke Ekke Ptang Zoo Boing" << std::endl;
}
