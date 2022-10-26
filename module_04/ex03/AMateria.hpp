//
// Created by Cristie Dell on 9/17/22.
//

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"
#include <string>
#include <iostream>

class ICharacter;

class AMateria {
protected:
	std::string type;
public:
	AMateria(std::string const& type);
	AMateria(const AMateria& copy);
	virtual ~AMateria();

	const AMateria& operator = (const AMateria& other);

	// Member functions
	std::string const &getType() const; // Return materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif //AMATERIA_HPP
