/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:20:05 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/07 09:46:36 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name): name(name) {
	std::cout << this->name << " was created" << std::endl;
}

Zombie::~Zombie(void)	{
	std::cout << this->name << " was destroyed" << std::endl;
}

void	Zombie::announce(void)	{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
