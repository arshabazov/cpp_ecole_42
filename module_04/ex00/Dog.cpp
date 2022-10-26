//
// Created by Cristie Dell on 9/16/22.
//

#include "Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	std::cout	<< "Default contructor of " << this->getType()
				<< " called" << std::endl;
}

Dog::Dog(const Dog& copy) {
	*this = copy;
	std::cout	<< "Copy constructor of " << this->getType()
				<< " called" << std::endl;
}

Dog::~Dog() {
	std::cout	<< "Destructor of " << this->getType()
				<< " called" << std::endl;
}

const Dog& Dog::operator = (const Dog& other) {
	this->type = other.getType();

	std::cout	<< "Assignment operator of " << this->getType()
				<< " called" << std::endl;
	
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Woof!!! What's up, dawg?" << std::endl;
}
