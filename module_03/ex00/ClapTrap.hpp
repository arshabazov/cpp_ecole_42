//
// Created by Cristie Dell on 9/13/22.
//

#ifndef CCLAPTRAP_HPP
#define CCLAPTRAP_HPP

#include <string>
#include <iostream>


class ClapTrap {
private:
	std::string name;
	unsigned int hitPoints;
	unsigned int energyPoints;
	unsigned int attackDamage;

public:
	// Constructor/Destructor
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& clapTrap);
	~ClapTrap(void);

	// Assignment operator overloading
	const ClapTrap& operator = (const ClapTrap& other);

	// Getters
	std::string getName() const;
	unsigned int getHitPoints() const;
	unsigned int getEnergyPoints() const;
	unsigned int getAttackDamage() const;

	// Setters
	// void setHitPoints(unsigned int hitPoints);
	// void setEnergyPoints(unsigned int energyPoints);
	// void setAttackDamage(unsigned int attackDamage);

	// Member functions
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

std::ostream& operator<<(std::ostream& stream, const ClapTrap& clapTrap);

#endif //CLAPTRAP_HPP
