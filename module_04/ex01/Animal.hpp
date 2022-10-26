//
// Created by Cristie Dell on 9/16/22.
//

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {
protected:
	std::string type;

public:
	Animal();
	Animal(const Animal &copy);
	virtual ~Animal();

	const Animal& operator = (const Animal &other);

	// Member functions
	const std::string& getType() const;
	virtual void makeSound() const;
};


#endif //ANIMAL_HPP
