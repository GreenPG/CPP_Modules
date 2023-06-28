/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 17:42:37 by gpasquet          #+#    #+#             */
/*   Updated: 2023/06/28 17:11:19 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void) {
	{
		std::cout << "*** Constructor Tests ***" << std::endl;
		FragTrap	Unknown;
		FragTrap	Daniel("Daniel");

		std::cout << "FragTrap " << Daniel.getName() << ": " << Daniel.getHitPoints() << "HP " << Daniel.getEnergyPoints() << "EP " << Daniel.getAttackDamage() << "AD" << std::endl;
		std::cout << "FragTrap " << Unknown.getName() << ": " << Unknown.getHitPoints() << "HP " << Unknown.getEnergyPoints() << "EP " << Unknown.getAttackDamage() << "AD" << std::endl;

		std::cout << std::endl;

		std::cout << "*** Copy and assignement tests ***" << std::endl;
		FragTrap	DanDan(Daniel);
		Unknown = Daniel;
		std::cout << "FragTrap " << DanDan.getName() << ": " << DanDan.getHitPoints() << "HP " << DanDan.getEnergyPoints() << "EP " << DanDan.getAttackDamage() << "AD" << std::endl;
		std::cout << "FragTrap " << Unknown.getName() << ": " << Unknown.getHitPoints() << "HP " << Unknown.getEnergyPoints() << "EP " << Unknown.getAttackDamage() << "AD" << std::endl;
	}

	std::cout << std::endl;

	{
		std::cout << "*** FragTrap vs ScavTrap vs ClapTrap ***" << std::endl;
		
		std::cout << std::endl;
		
		ClapTrap	Blip("Blip");
		ScavTrap	Wizz("Wizz");
		FragTrap	Boum("Boum");

		std::cout << "ClapTrap " << Blip.getName() << ": " << Blip.getHitPoints() << "HP " << Blip.getEnergyPoints() << "EP " << Blip.getAttackDamage() << "AD" << std::endl;
		std::cout << "ScavTrap " << Wizz.getName() << ": " << Wizz.getHitPoints() << "HP " << Wizz.getEnergyPoints() << "EP " << Wizz.getAttackDamage() << "AD" << std::endl;
		std::cout << "FragTrap " << Boum.getName() << ": " << Boum.getHitPoints() << "HP " << Boum.getEnergyPoints() << "EP " << Boum.getAttackDamage() << "AD" << std::endl;
		
		std::cout << std::endl;
		
	}

	std::cout << std::endl;
	
	{
		std::cout << "*** FragTrap tests ***" << std::endl << std::endl;

		FragTrap	John("John");
		FragTrap	Unknown;
		
		std::cout << std::endl;

		Unknown.attack("John");
		John.takeDamage(30);

		std::cout << std::endl;
	
		for (int i = 0; i < 5; i++) {
			John.attack("Unknown");
			Unknown.takeDamage(30);
		}

		std::cout << std::endl;
		
		for (int i = 0; i < 96; i++) {
			John.beRepaired(1);
		}

		std::cout << std::endl;
		
		John.highFiveGuys();

		std::cout << std::endl;
	}
}
