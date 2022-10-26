//
// Created by Cristie Dell on 9/13/22.
//

#include "ClapTrap.hpp"

// Constructor/Destructor
ClapTrap::ClapTrap(void) {
	std::cout << "Default constructor is called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : 
	name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "Contructor of " << name << " is called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& clapTrap) {
	*this = clapTrap;
	std::cout << "Copy constructor of " << this->getName() << " is called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor of " << this->getName() << " called" << std::endl;
}

// Assignment operator overloading
const ClapTrap& ClapTrap::operator = (const ClapTrap& other) {
	this->name = other.getName();
	this->hitPoints = other.getHitPoints();
	this->energyPoints = other.getEnergyPoints();
	this->attackDamage = other.getAttackDamage();

	return *this;
}

// Getters
std::string ClapTrap::getName() const {
	return this->name;
}

unsigned int ClapTrap::getHitPoints() const {
	return this->hitPoints;
}

unsigned int ClapTrap::getEnergyPoints() const {
	return this->energyPoints;
}

unsigned int ClapTrap::getAttackDamage() const {
	return this->attackDamage;
}

// Member functions
void ClapTrap::attack(const std::string& target) {
	if (!this->getEnergyPoints()) {
		std::cout << "ATTENTION! Low level of ENERGY POINTS" << std::endl;
		return ;
	} else if (!this->getHitPoints()) {
		std::cout << "ATTENTION! Dead men shalt NOT attacketh" << std::endl;
		return ;
	}
	std::cout	<< "CalpTrap " << this->getName() << " attacks " << target
				<< " , causing " << this->getAttackDamage() << " points of damage!"
				<< std::endl;
	--this->energyPoints;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (!this->getHitPoints()) {
		std::cout << "ATTENTION! A man can only take so much DAMAGE" << std::endl;
		return ;
	}
	if (amount > this->getHitPoints()) {
		amount = this->getHitPoints();
	}
	std::cout	<< "ClapTrap " << this->getName() << " took damage of "
				<< amount << " points" << std::endl;
	this->hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (!this->getEnergyPoints()) {
		std::cout << "ATTENTION! Low level of ENERGY POINTS" << std::endl;
		return ;
	} else if (!this->getHitPoints()) {
		std::cout << "ATTENTION! Dead men shalt NOT healeth" << std::endl;
		return ;
	}
	this->hitPoints += amount;
	std::cout	<< "ClapTrap " << this->getName() << " is perairing. "
				<< "Health restored to " << this->getHitPoints()
				<< std::endl;
	--this->energyPoints;
}

// << operator overloading
std::ostream& operator<<(std::ostream& stream, const ClapTrap& clapTrap) {
	stream	<< "ClapTrap " << clapTrap.getName()
			<< " Health level: " << clapTrap.getHitPoints()
			<< " Energy points: " << clapTrap.getEnergyPoints()
			<< " Damage level: " << clapTrap.getAttackDamage();
	return stream;
}
