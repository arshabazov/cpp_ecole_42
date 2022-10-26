//
// Created by Cristie Dell on 9/16/22.
//

#include "Animal.hpp"

Animal::Animal() : type("Animal") {
	std::cout	<< "Default Contructor of Animal called" << std::endl;
}

Animal::Animal(const Animal& copy) {
	*this = copy;
	std::cout	<< "Copy Contructor of Animal called" << std::endl;
}

Animal::~Animal() {
	std::cout	<< "Destructor of Animal called" << std::endl;
}

const Animal& Animal::operator = (const Animal& other) {
	this->type = other.getType();

	std::cout	<< "Assignment operator of Animal called" << std::endl;
	
	return *this;
}

const std::string& Animal::getType() const {
	return this->type;
}

void Animal::makeSound() const {
	std::cout << "Ekke Ekke Ekke Ekke Ptang Zoo Boing" << std::endl;
}