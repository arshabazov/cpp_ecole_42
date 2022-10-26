//
// Created by Cristie Dell on 9/15/22.
//

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
private:
	std::string name;

public:
	// Constructor/Destructor
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& diamondTrap);
	~DiamondTrap(void);

	// Assignment operator overloading
	const DiamondTrap& operator = (const DiamondTrap& other);

	// Member functions
	void attack(const std::string& target);
	void whoAmI();
};


#endif //DIAMONDTRAP_HPP
