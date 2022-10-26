//
// Created by Cristie Dell on 9/16/22.
//

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
private:
	Brain* brain;

public:
	Dog();
	Dog(const Dog& copy);
	~Dog();

	const Dog& operator = (const Dog &other);

	// Member functions
	void makeSound() const;
	void printIdeas() const;
};


#endif //DOG_HPP
