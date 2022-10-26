//
// Created by Cristie Dell on 9/16/22.
//

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	this->type = "WrongCat";
	std::cout	<< "Default contructor of " << this->getType()
				<< " called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) {
	*this = copy;
	std::cout	<< "Copy constructor of " << this->getType()
				<< " called" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout	<< "Destructor of " << this->getType()
				<< " called" << std::endl;
}

const WrongCat& WrongCat::operator = (const WrongCat& other) {
	this->type = other.getType();

	std::cout	<< "Assignment operator of " << this->getType()
				<< " called" << std::endl;
	
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "Meow!!! I'm such a kitty cat" << std::endl;
}
