/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:20:32 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/03 09:20:33 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name)	{
	this->name = name;
	std::cout << this->name << " was created" << std::endl;
}

Zombie::Zombie(void) {
	std::cout << "Zombie with no name was created" << std::endl;
}

Zombie::~Zombie(void)	{
	std::cout << this->name << " was destroyed" << std::endl;
}

void	Zombie::announce(void)	{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name) {
	this->name = name;
}
