/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 17:42:37 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/06 09:38:18 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void) {
	ClapTrap	Jacky("Jacky");
	ScavTrap	Unknown;
	FragTrap	John("John");

	Unknown.attack("Jacky");
	Jacky.takeDamage(0);
	Unknown.takeDamage(10);
	Unknown.beRepaired(10);
	John.attack("Unknown");
	John.takeDamage(20);
	John.beRepaired(20);
	John.highFiveGuys();
}
