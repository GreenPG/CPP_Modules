/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:20:25 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/03 09:20:26 by gpasquet         ###   ########.fr       */
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
	hord = zombieHorde(atoi(av[1]), "Marco");
	for (int i = 0; i < atoi(av[1]); i++) {
		hord[i].announce();
	}
	delete [] hord;
}
