/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:19:48 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/03 09:19:49 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
