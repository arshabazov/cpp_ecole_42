#include "Zombie.h"

Zombie *newZombie(std::string name) {
	Zombie *zombie = new Zombie(name);
	if (zombie == 0) {
		std::cout << "Failed to allocate MEMORY" << std::endl;
		exit(1);
	}
	return zombie;
}
