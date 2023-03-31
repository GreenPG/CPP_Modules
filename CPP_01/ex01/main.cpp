#include "Zombie.hpp"
#include <cstdlib>
#include <iostream>

Zombie* zombieHorde( int N, std::string name );

int	main(int ac, char **av)	{
	Zombie	*hord;
	
	if (ac < 2) {
		std::cout << "Number of zombies attended" << std::endl;
		return (1);
	}
	hord = zombieHorde(atoi(av[1]), "Marco");
	for (int i = 0; i < atoi(av[1]); i++) {
		hord[i].announce();
	}
	delete [] hord;
}
