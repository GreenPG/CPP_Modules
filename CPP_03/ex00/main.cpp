#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap	Jacky("Jacky");
	ClapTrap	Unknown;

	Unknown.attack("Jacky");
	Jacky.takeDamage(0);
	for (int i = 0; i < 11; i++) {
	Jacky.beRepaired(1);
	}
	Unknown.takeDamage(10);
	Unknown.beRepaired(10);
}
