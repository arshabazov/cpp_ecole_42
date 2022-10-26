//
// Created by Cristie Dell on 9/16/22.
//

#include "Cat.hpp"

Cat::Cat() : brain(new Brain("Bright ideas of Mr whiskers")) {
	this->type = "Cat";
	std::cout	<< "Default Contructor of Cat called" << std::endl;
}

Cat::Cat(const Cat& copy) {
	*this = copy;
	std::cout	<< "Copy Constructor of Cat called" << std::endl;
}

Cat::~Cat() {
	delete this->brain;
	std::cout	<< "Destructor of Cat called" << std::endl;
}

const Cat& Cat::operator = (const Cat& other) {
	this->type = other.getType();
	this->brain = other.brain;

	std::cout	<< "Assignment Operator of Cat called" << std::endl;
	
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Meow!!! I'm such a kitty cat" << std::endl;
}

void Cat::printIdeas() const {
	for (int i = 0; i < MAX_SIZE; ++i) {
		std::cout << this->brain->getIdea(i) << std::endl;
	}
}
