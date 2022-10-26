//
// Created by Cristie Dell on 9/17/22.
//

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#define INVENTORY_SIZE 4

class Character : public ICharacter {
private:
	std::string name;
	int curCapacity;
	AMateria *inventory[INVENTORY_SIZE];

public:
	Character(std::string name);
	Character(const Character& copy);
	~Character();

	const Character& operator = (const Character& other);

	// Member functions
	int getCurCapacity() const;
	// const AMateria& getMateria(int index) const;

	// Overrisen Member Functions
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	void printMateriaList() const;
};


#endif //CHARACTER_HPP
