#include "Zombie.h"

int main() {
	Zombie *horde = zombieHorde(5, "Vandal Savage");

	if (horde == 0)
		return (1);
	
	for (int i = 0; i < 5; i++) {
		std::cout << i << ") ";
		horde[i].announce();
	}
	std::cout << std::endl;
	delete [] horde;
	return (0);
}
