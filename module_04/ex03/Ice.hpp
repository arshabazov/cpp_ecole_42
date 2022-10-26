//
// Created by Cristie Dell on 9/17/22.
//

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public  AMateria {
public:
	Ice();
	Ice(const Ice& copy);
	~Ice();

	const Ice& operator = (const Ice& other);

	// Member functions
	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif //ICE_HPP
