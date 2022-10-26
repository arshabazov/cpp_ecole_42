#include "Zombie.h"

int main() {
	randomChump("Mikluha Maklai");
	Zombie *haythem = newZombie("Haytham Kenway");
	haythem->announce();
	delete haythem;
	return (0);
}
