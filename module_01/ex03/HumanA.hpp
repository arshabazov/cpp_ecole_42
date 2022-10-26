#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {

private:
	std::string name;
	const Weapon &weapon;

public:
	HumanA(std::string name, const Weapon &weapon);
	~HumanA();
	void attack();
};

#endif //HUMANA_HPP
