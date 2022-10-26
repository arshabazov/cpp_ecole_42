//
// Created by Cristie Dell on 9/16/22.
//

#include "Cat.hpp"

Cat::Cat() {
	this->type = "Cat";
	std::cout	<< "Default contructor of " << this->getType()
				<< " called" << std::endl;
}

Cat::Cat(const Cat& copy) {
	*this = copy;
	std::cout	<< "Copy constructor of " << this->getType()
				<< " called" << std::endl;
}

Cat::~Cat() {
	std::cout	<< "Destructor of " << this->getType()
				<< " called" << std::endl;
}

const Cat& Cat::operator = (const Cat& other) {
	this->type = other.getType();

	std::cout	<< "Assignment operator of " << this->getType()
				<< " called" << std::endl;
	
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Meow!!! I'm such a kitty cat" << std::endl;
}
