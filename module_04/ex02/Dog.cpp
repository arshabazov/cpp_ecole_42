//
// Created by Cristie Dell on 9/16/22.
//

#include "Dog.hpp"

Dog::Dog() : brain(new Brain("Charming ideas of Mr Doggy dog")) {
	this->type = "Dog";
	std::cout	<< "Default contructor of Dog called" << std::endl;
}

Dog::Dog(const Dog& copy) {
	*this = copy;
	std::cout	<< "Copy constructor of Dog called" << std::endl;
}

Dog::~Dog() {
	delete this->brain;
	std::cout	<< "Destructor of Dog called" << std::endl;
}

const Dog& Dog::operator = (const Dog& other) {
	this->type = other.getType();
	this->brain = other.brain;

	std::cout	<< "Assignment operator of Dog called" << std::endl;
	
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Woof!!! What's up, dawg?" << std::endl;
}

void Dog::printIdeas() const {
	for (int i = 0; i < MAX_SIZE; ++i) {
		std::cout << this->brain->getIdea(i) << std::endl;
	}
}
