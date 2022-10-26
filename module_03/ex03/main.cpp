#include "DiamondTrap.hpp"

int main() {

	DiamondTrap savage("Vandal Savage");
	DiamondTrap tarnished("Foul Tarnished");

	std::cout << "\n|-----------------------------------------------------|\n\n";

	savage.attack("Foul Tarnished");
	tarnished.takeDamage(20);
	tarnished.beRepaired(10);
	tarnished.highFivesGuys();
	savage.guardGate();
	tarnished.whoAmI();

	std::cout << "\n|-----------------------------------------------------|\n\n";

	std::cout << savage << std::endl;
	std::cout << tarnished << std::endl;

	std::cout << "\n|-----------------------------------------------------|\n\n";

	return 0;
}