//
// Created by Cristie Dell on 9/17/22.
//

#include "Character.hpp"

Character::Character(std::string name) : name(name), curCapacity(0) {
	for (int i = 0; i < INVENTORY_SIZE; ++i) {
		this->inventory[i] = nullptr;
	}
	std::cout	<< "Parametarised constructor of Character " << this->getName()
				<< " called" << std::endl;
}

Character::Character(const Character& copy) {
	*this = copy;
	// for (int i = 0; i < this->getCurCapacity(); ++i) {
	// 	delete this->inventory[i];
	// 	this->inventory[i] = nullptr;
	// }

	// this->name = copy.getName();
	// this->curCapacity = copy.getCurCapacity();


	// for (int i = 0; i < copy.getCurCapacity(); ++i) {
	// 	this->inventory[i] = copy.inventory[i]->clone();
	// 	// this->equip(copy.inventory[i]->clone());
	// }

	std::cout	<< "Copy constructor of Character " << this->getName()
				<< " called" << std::endl;
}

Character::~Character() {
	for (int i = 0; i < this->getCurCapacity(); ++i) {
		delete this->inventory[i];
	}
	std::cout	<< "Destructor of Character " << this->getName()
				<< " called" << std::endl;
}

const Character& Character::operator = (const Character& other) {
	if (this == &other)
		return *this;

	for (int i = 0; i < this->getCurCapacity(); ++i) {
	delete this->inventory[i];
	this->inventory[i] = nullptr;
	}

	this->name = other.getName();
	this->curCapacity = other.getCurCapacity();


	for (int i = 0; i < other.getCurCapacity(); ++i) {
		this->inventory[i] = other.inventory[i]->clone();
		// this->equip(copy.inventory[i]->clone());
	}
	std::cout	<< "Assignment operator of Character " << this->getName()
				<< " called" << std::endl;
	
	return *this;
}

int Character::getCurCapacity() const {
	return this->curCapacity;
}

std::string const& Character::getName() const {
	return this->name;
}

// const AMateria& Character::getMateria(int index) const {
// 	return this->getMateria(index);
// }

void Character::equip(AMateria* m) {
	if (m == nullptr)
		return ;
	if (this->getCurCapacity() < INVENTORY_SIZE) {
		this->inventory[curCapacity++] = m;
	} else {
		std::cout << "Inventory full" << std::endl;
	}
}

void Character::unequip(int idx) {
	if (idx >= 0 || idx < this->getCurCapacity()) {
		if (idx == 3) {
			this->inventory[idx] = nullptr;
		} else {
			for (int i = idx; i < 3; ++i) {
				this->inventory[i] = this->inventory[i + 1];
				this->inventory[i + 1] = nullptr;	
			}
		}
		--this->curCapacity;
	} else {
		std::cout << "Wrong index" << std::endl;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 || idx < this->getCurCapacity()) {
		std::cout << this->getName() << " ";
		this->inventory[idx]->use(target);
	} else {
		std::cout << "Wrong index" << std::endl;
	}
}

void Character::printMateriaList() const {
	for (int i = 0; i < this->getCurCapacity(); ++i) {
		std::cout << this->inventory[i]->getType() << std::endl;
	}
}
