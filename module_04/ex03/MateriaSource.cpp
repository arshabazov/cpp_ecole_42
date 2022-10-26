//
// Created by Cristie Dell on 9/17/22.
//

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : curCapacity(0) {
	for (int i = 0; i < INVENTORY_SIZE; ++i) {
		this->inventory[i] = nullptr;
	}

	std::cout	<< "Parametarised constructor of Materia source called"
				<< std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& copy) {
	*this = copy;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < this->getCurCapacity(); ++i) {
		delete this->inventory[i];
	}
	std::cout	<< "Destructor of MateriaSource called" << std::endl;
}

const MateriaSource& MateriaSource::operator = (const MateriaSource other) {
	if (this == &other)
		return *this;

	for (int i = 0; i < this->getCurCapacity(); ++i) {
		delete this->inventory[i];
		this->inventory[i] = nullptr;
	}

	this->curCapacity = other.getCurCapacity();

	for (int i = 0; i < other.getCurCapacity(); ++i) {
		this->inventory[i] = other.inventory[i]->clone();
		// this->equip(copy.inventory[i]->clone());
	}
	std::cout	<< "Assignment operator of MateriaSource called" << std::endl;

	return *this;
}

int MateriaSource::getCurCapacity() const {
	return this->curCapacity;
}

void MateriaSource::learnMateria(AMateria* materia) {
	if (materia == nullptr)
		return ;
	if (this->getCurCapacity() < INVENTORY_SIZE) {
		this->inventory[curCapacity++] = materia->clone();
	} else {
		std::cout << "MateriaSource: Inventory is full" << std::endl;
	} 
}

AMateria* MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < this->getCurCapacity(); ++i) {
		if (this->inventory[i]->getType() == type) {
			return this->inventory[i]->clone();
		}
	}
	
	return 0;
}
