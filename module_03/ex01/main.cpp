#include "ScavTrap.hpp"

int main() {

	ScavTrap jedediah("Jedediah Longtree");
	ScavTrap miklouho("Miklouho-Macleod");

	std::cout << "\n|-----------------------------------------------------|\n\n";

	jedediah.attack("Miklouho Macleod");
	miklouho.takeDamage(20);
	miklouho.beRepaired(10);
	miklouho.guardGate();

	std::cout << "\n|-----------------------------------------------------|\n\n";

	std::cout << jedediah << std::endl;
	std::cout << miklouho << std::endl;

	std::cout << "\n|-----------------------------------------------------|\n\n";

	return 0;
}