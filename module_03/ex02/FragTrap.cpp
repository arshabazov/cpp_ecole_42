//
// Created by Cristie Dell on 9/14/22.
//

#include "FragTrap.hpp"

// Constructor
FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout	<< "FragTrap Constructor of " << this->getName()
				<< " is called" << std::endl;
}

// Copy constructor
FragTrap::FragTrap(const FragTrap& scavTrap) : ClapTrap(scavTrap) {
	std::cout	<< "FragTrap Copy constructor of " << this->getName()
				<< " is called" << std::endl;
}

// Destructor
FragTrap::~FragTrap() {
	std::cout	<< "FragTrap Destructor of " << this->getName()
				<< " called" << std::endl;
}

// Assignment operator overloading
const FragTrap& FragTrap::operator = (const FragTrap& other) {
	ClapTrap::operator=(other);
	std::cout	<< "FragTrap Assignment operator of " << this->getName()
				<< " is called" << std::endl;
	return *this;
}

// Member functions
void FragTrap::attack(const std::string& target) {
	if (!this->getEnergyPoints()) {
		std::cout << "ATTENTION! Low level of ENERGY POINTS" << std::endl;
		return ;
	} else if (!this->getHitPoints()) {
		std::cout << "ATTENTION! Dead men shalt NOT attacketh" << std::endl;
		return ;
	}
	std::cout	<< "FragTrap " << this->getName() << " attacks " << target
				<< " , causing " << getAttackDamage() << " points of damage!"
				<< std::endl;
	--this->energyPoints;
}

void FragTrap::highFivesGuys(void) {
	std::cout	<< this->getName() << ": What? What do you say? High five?"
				<< " Nonsense. I shall do no such stupid thing" << std::endl;
}
