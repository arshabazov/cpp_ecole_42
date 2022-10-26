//
// Created by Cristie Dell on 9/14/22.
//

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap {
public:
	// Constructor/Destructor
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& scavTrap);
	~ScavTrap(void);

	// Assignment operator overloading
	const ScavTrap& operator = (const ScavTrap& other);

	// Member functions
	void attack(const std::string& target);
	void guardGate();
};


#endif //SCAVTRAP_HPP
