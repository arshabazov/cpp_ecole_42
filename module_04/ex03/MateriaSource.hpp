//
// Created by Cristie Dell on 9/17/22.
//

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include <iostream>

#define INVENTORY_SIZE 4

class MateriaSource : public IMateriaSource {
private:
	int curCapacity;
	AMateria *inventory[INVENTORY_SIZE];

public:
	MateriaSource();
	MateriaSource(const MateriaSource& copy);
	~MateriaSource();

	const MateriaSource& operator = (const MateriaSource other);

	// Member functions
	int getCurCapacity() const;

	// Overrisen Member Functions
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};


#endif //MATERIASOURCE_HPP
