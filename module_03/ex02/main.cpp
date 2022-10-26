#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {

	FragTrap sam("Sam Porter Bridges");
	FragTrap venom("Pnished Venom Snake");

	std::cout << "\n|-----------------------------------------------------|\n\n";

	sam.attack("Pnished Venom Snake");
	venom.takeDamage(20);
	venom.beRepaired(10);
	venom.highFivesGuys();

	std::cout << "\n|-----------------------------------------------------|\n\n";

	std::cout << sam << std::endl;
	std::cout << venom << std::endl;

	std::cout << "\n|-----------------------------------------------------|\n\n";

	return 0;
}