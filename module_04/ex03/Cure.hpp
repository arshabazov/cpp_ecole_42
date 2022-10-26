//
// Created by Cristie Dell on 9/17/22.
//

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
public:
	Cure();
	Cure(const Cure& copy);
	~Cure();

	const Cure& operator = (const Cure& other);

	// Member functions
	AMateria* clone() const;
	void use(ICharacter& target);
};


#endif //CURE_HPP
