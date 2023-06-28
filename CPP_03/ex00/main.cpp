#include "ClapTrap.hpp"

int	main(void) {
	{
		std::cout << "*** Constructor Tests ***" << std::endl;
		std::cout << std::endl;

		ClapTrap	Mike("Mike");
		ClapTrap	Unknown;

		std::cout << "ClapTrap named " << Mike.getName() << " has " << Mike.getHitPoints() << " hit points and " << Mike.getEnergyPoints() << " energy points and " << Mike.getAttackDamage() << " attack damage" <<  std::endl;
		std::cout << "ClapTrap named " << Unknown.getName() << " has " << Unknown.getHitPoints() << " hit points and " << Unknown.getEnergyPoints() << " energy points and " << Unknown.getAttackDamage() << " attack damage" <<  std::endl;
		std::cout << std::endl;

		std::cout << "*** Copy and assignement tests ***" << std::endl;
		ClapTrap	MikeMike(Mike);
		Unknown = Mike;
		std::cout << "ClapTrap named " << MikeMike.getName() << " has " << MikeMike.getHitPoints() << " hit points and " << MikeMike.getEnergyPoints() << " energy points and " << MikeMike.getAttackDamage() << " attack damage" <<  std::endl;
		std::cout << "ClapTrap named " << Unknown.getName() << " has " << Unknown.getHitPoints() << " hit points and " << Unknown.getEnergyPoints() << " energy points and " << Unknown.getAttackDamage() << " attack damage" <<  std::endl;
		std::cout << std::endl;
	}

	{
		std::cout << "*** ClapTrap tests ***" << std::endl << std::endl;
		ClapTrap	Mike("Mike");
		ClapTrap	Unknown;

		for (int i = 0; i < 11; i++)
			Unknown.attack("Mike");
		std::cout << std::endl;

		for (int i = 0; i < 11; i++) 
			Mike.beRepaired(1);
		std::cout << std::endl;

		Unknown.takeDamage(10);
		Unknown.beRepaired(10);
	}
}
