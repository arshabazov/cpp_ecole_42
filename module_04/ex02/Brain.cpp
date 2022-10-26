//
// Created by Cristie Dell on 9/16/22.
//

#include "Brain.hpp"

Brain::Brain(const std::string& idea) {
	for (int i = 0; i < MAX_SIZE; ++i) {
		this->ideas[i] = idea;
	}
	std::cout << "Brain: Parametarised Constructor called" << std::endl;
}

Brain::Brain(const Brain& copy) {
	*this = copy;
	std::cout << "Brain: Copy Constructor called" << std::endl;
}

Brain::~Brain() {
	// delete [] this->ideas;
	std::cout << "Brain: Destructor called" << std::endl;
}

const Brain& Brain::operator = (const Brain &other) {
	for (int i = 0; i < MAX_SIZE; i++) {
		this->ideas[i] = other.ideas[i];
	}

	return *this;
}

const std::string& Brain::getIdea(int index) const {
	return ideas[index];
}
