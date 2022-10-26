//
// Created by Cristie Dell on 9/16/22.
//

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
public:
	Cat();
	Cat(const Cat& copy);
	~Cat();

	const Cat& operator = (const Cat &other);

	// Member functions
	void makeSound() const;
};


#endif //CAT_HPP
