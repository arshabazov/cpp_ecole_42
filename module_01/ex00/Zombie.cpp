//
// Created by Cristie Dell on 8/30/22.
//

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name) {}

Zombie::~Zombie(void) {
	std::cout << "Zombie " << Zombie::getName() << " destroyed" << std::endl;
}

const std::string &Zombie::getName(void) const {
	return this->name;
}

void Zombie::announce(void) {
	std::cout << this->name << ":" << "BraiiiiiiinnnzzzZ..." << std::endl;
}
