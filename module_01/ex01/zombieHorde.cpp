#include "Zombie.h"

Zombie *zombieHorde(int N, std::string name) {
	Zombie *horde = new Zombie[N];

	if (horde == 0) {
		std::cout << "Failed to allocate MEMORY" << std::endl;
		return (0);
	}
	for (int i = 0; i < N; i++) {
		horde[i].setName(name);
	}
	return horde;
}