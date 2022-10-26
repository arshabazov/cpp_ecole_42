#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(0) {
	std::cout << this->name << " created" << std::endl;
}

HumanB::~HumanB() {
	std::cout << this->name << " destroyed" << std::endl;
}

void HumanB::attack() {
	if (this->weapon == 0)
		std::cout << this->name << " has no weapon" << std::endl;
	else
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(const Weapon &weapon) {
	this->weapon = &weapon;
}