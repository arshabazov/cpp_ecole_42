//
// Created by Cristie Dell on 9/15/22.
//

#include "DiamondTrap.hpp"

// Constructor
DiamondTrap::DiamondTrap(std::string name) :
	ClapTrap(name + "_clap_name"),
	ScavTrap(name),
	FragTrap(name),
	name(name)
{
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;

	std::cout	<< "DiamondTrap Constructor of " << name
				<< " is called" << std::endl;
}

// Copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap& diamondTrap) :
	ClapTrap(diamondTrap),
	ScavTrap(diamondTrap),
	FragTrap(diamondTrap)
{
	std::cout	<< "DiamondTrap Copy constructor of " << this->getName()
				<< " is called" << std::endl;
}

// Destructor
DiamondTrap::~DiamondTrap(void) {
	std::cout	<< "DiamondTrap Destructor of " << this->name
				<< " called" << std::endl;
}

// Assignment operator overloading
const DiamondTrap& DiamondTrap::operator = (const DiamondTrap& other) {
	ClapTrap::operator=(other);
	std::cout	<< "DiamondTrap Assignment operator of " << this->name
				<< " is called" << std::endl;
	this->name = other.getName();
	return *this;
}

// Member functions
void DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout	<< "Oh! You tragic thing!"
				<< " Diamond trap: " << this->name
				<< " of Claptrap: " << ClapTrap::getName()
				<< std::endl;
}
