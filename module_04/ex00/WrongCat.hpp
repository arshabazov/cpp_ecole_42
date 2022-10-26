//
// Created by Cristie Dell on 9/16/22.
//

#ifndef _WRONGCAT_HPP
#define _WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	WrongCat(const WrongCat& copy);
	~WrongCat();

	const WrongCat& operator = (const WrongCat &other);

	// Member functions
	void makeSound() const;
};


#endif //WRONGCAT_HPP
