#include "HumanA.hpp"

HumanA::HumanA(std::string name, const Weapon &weapon) : name(name), weapon(weapon) {
	std::cout << this->name << " created" << std::endl;
}

HumanA::~HumanA() {
	std::cout << this->name << " destroyed" << std::endl;
}

void HumanA::attack() {
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
