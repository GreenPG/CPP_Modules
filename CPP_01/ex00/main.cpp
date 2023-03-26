#include "Zombie.hpp"

Zombie*	newZombie(std::string name);	
void	randomChump(std::string name);

int	main(void)	{
	Zombie	*Jim;

	Jim = newZombie("Jim");
	Jim->announce();
	delete(Jim);
	randomChump("random John");
}
