/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 17:42:37 by gpasquet          #+#    #+#             */
/*   Updated: 2023/06/28 17:06:57 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
	{
		std::cout << "*** Constructor Tests ***" << std::endl;
		ScavTrap	Unknown;
		ScavTrap	John("John");

		std::cout << "ScavTrap named " << John.getName() << " has " << John.getHitPoints() << " hit points and " << John.getEnergyPoints() << " energy points and " << John.getAttackDamage() << " attack damage" <<  std::endl;
		std::cout << "ScavTrap named " << Unknown.getName() << " has " << Unknown.getHitPoints() << " hit points and " << Unknown.getEnergyPoints() << " energy points and " << John.getAttackDamage() << " attack damage"   << std::endl;
		
		std::cout << std::endl;

		std::cout << "*** Copy and assignement tests ***" << std::endl;
		ScavTrap	JohnJohn(John);
		Unknown = John;
		std::cout << "ScavTrap named " << JohnJohn.getName() << " has " << JohnJohn.getHitPoints() << " hit points and " << JohnJohn.getEnergyPoints() << " energy points and " << John.getAttackDamage() << " attack damage" <<  std::endl;
		std::cout << "ScavTrap named " << Unknown.getName() << " has " << Unknown.getHitPoints() << " hit points and " << Unknown.getEnergyPoints() << " energy points and " << John.getAttackDamage() << " attack damage"   << std::endl;
	}
		
	std::cout << std::endl;

	{
		std::cout << "*** ClapTrap vs ScavTrap ***" << std::endl;
		ScavTrap	John("John");
		ClapTrap	Mike("Mike");

		std::cout << "ScavTrap named " << John.getName() << " has " << John.getHitPoints() << " hit points and " << John.getEnergyPoints() << " energy points and " << John.getAttackDamage() << " attack damage" <<  std::endl;
		std::cout << "ClapTrap named " << Mike.getName() << " has " << Mike.getHitPoints() << " hit points and " << Mike.getEnergyPoints() << " energy points and " << Mike.getAttackDamage() << " attack damage" <<  std::endl;
	}

	{
		std::cout << std::endl;
		std::cout << "*** ScavTrap Tests ***" << std::endl;
		ScavTrap	Unknown;
		ScavTrap	John("John");

		std::cout << std::endl;
		std::cout << "ScavTrap named " << John.getName() << " has " << John.getHitPoints() << " hit points and " << John.getEnergyPoints() << " energy points and " << John.getAttackDamage() << " attack damage" <<  std::endl;
		std::cout << "ScavTrap named " << Unknown.getName() << " has " << Unknown.getHitPoints() << " hit points and " << Unknown.getEnergyPoints() << " energy points and " << John.getAttackDamage() << " attack damage"   << std::endl;
		std::cout << std::endl;
		Unknown.attack("John");
		John.takeDamage(20);
		std::cout << std::endl;
		for (int i = 0; i < 6; i++) {
			John.attack("Unknown");
			Unknown.takeDamage(20);
		}
		std::cout << std::endl;
		for (int i = 0; i < 45; i++) {
			John.beRepaired(20);
		}
		std::cout << std::endl;
		John.guardGate();
		std::cout << std::endl;
	}
}
