//
// Created by Cristie Dell on 9/14/22.
//

#include "ScavTrap.hpp"

// Constructor
ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout	<< "ScavTrap Constructor of " << this->getName()
				<< " is called" << std::endl;
}

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap& scavTrap) : ClapTrap(scavTrap) {
	std::cout	<< "ScavTrap Copy constructor of " << this->getName()
				<< " is called" << std::endl;
}

// Destructor
ScavTrap::~ScavTrap() {
	std::cout	<< "ScavTrap Destructor of " << this->getName()
				<< " called" << std::endl;
}

// Assignment operator overloading
const ScavTrap& ScavTrap::operator = (const ScavTrap& other) {
	ClapTrap::operator=(other);
	std::cout	<< "ScapTrap Assignment operator of " << this->getName()
				<< " is called" << std::endl;
	return *this;
}

// Member functions
void ScavTrap::attack(const std::string& target) {
	if (!this->getEnergyPoints()) {
		std::cout << "ATTENTION! Low level of ENERGY POINTS" << std::endl;
		return ;
	} else if (!this->getHitPoints()) {
		std::cout << "ATTENTION! Dead men shalt NOT attacketh" << std::endl;
		return ;
	}
	std::cout	<< "ScavTrap " << this->getName() << " attacks " << target
				<< " , causing " << getAttackDamage() << " points of damage!"
				<< std::endl;
	--this->energyPoints;
}

void ScavTrap::guardGate() {
	std::cout	<< "ScavTrap: " << this->getName()
				<<" Gate keeper mode engaged" << std::endl;
}
