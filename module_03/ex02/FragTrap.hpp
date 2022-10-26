//
// Created by Cristie Dell on 9/14/22.
//

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
	// Constructor/Destructor
	FragTrap(std::string name);
	FragTrap(const FragTrap& scavTrap);
	~FragTrap(void);

	// Assignment operator overloading
	const FragTrap& operator = (const FragTrap& other);

	// Member functions
	void attack(const std::string& target);
	void highFivesGuys(void);
};


#endif //FRAGTRAP_HPP
