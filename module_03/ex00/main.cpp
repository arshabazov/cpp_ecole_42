#include "ClapTrap.hpp"

int main() {
	ClapTrap clapTrap("Jedediah Longtree");
	ClapTrap trippy = clapTrap;

	clapTrap.attack("Trippy");
	clapTrap.takeDamage(4);
	clapTrap.beRepaired(2);

	std::cout << clapTrap << std::endl;
	std::cout << "|---------------------------------------|" << std::endl;
	std::cout << trippy << std::endl;

	return 0;
}