//
// Created by Cristie Dell on 9/16/22.
//

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
private:
	Brain* brain;

public:
	Cat();
	Cat(const Cat& copy);
	~Cat();

	const Cat& operator = (const Cat &other);

	// Member functions
	void makeSound() const;
	void printIdeas() const;
};


#endif //CAT_HPP
