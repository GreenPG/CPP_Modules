/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:19:48 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/07 09:47:41 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name);	
void	randomChump(std::string name);

int	main(void)	{
	Zombie	*Jim;

	Jim = newZombie("Jim");
	Jim->announce();
	randomChump("random John");
	delete(Jim);
}
