#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int	main(void)	{
	Zombie	*hord;

	hord = zombieHorde(10, "Marco");
	for (int i = 0; i < 10; i++) {
		hord[i].announce();
	}
	delete [] hord;
}
