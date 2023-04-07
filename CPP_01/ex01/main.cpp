/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:20:25 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/07 09:52:23 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	if (atoi(av[1]) > 100) {
			std::cout << "That's a lot fo zombie. Maybe ask for less" << std::endl;
			return (0);
	}
	hord = zombieHorde(atoi(av[1]), "Marco");
	for (int i = 0; i < atoi(av[1]); i++) {
		hord[i].announce();
	}
	delete [] hord;
}
