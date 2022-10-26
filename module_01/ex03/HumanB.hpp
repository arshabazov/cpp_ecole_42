#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {

private:
	std::string name;
	const Weapon *weapon;

public:
	HumanB(std::string name);
	~HumanB();
	void attack();
	void setWeapon(const Weapon &weapon);
};


#endif //HUMANB_HPP
