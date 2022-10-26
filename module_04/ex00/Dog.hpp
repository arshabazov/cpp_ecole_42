//
// Created by Cristie Dell on 9/16/22.
//

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
public:
	Dog();
	Dog(const Dog& copy);
	~Dog();

	const Dog& operator = (const Dog &other);

	// Member functions
	void makeSound() const;
};


#endif //DOG_HPP
