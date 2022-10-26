#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <iomanip>

class Weapon {

private:
	std::string type;

public:
	// Constructors/Destructors
	// Weapon();
	Weapon(std::string type);
	~Weapon();

	// Getters
	const std::string &getType() const;

	// Setters
	void setType(std::string new_type);
};


#endif //WEAPON_HPP
