/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 17:42:37 by gpasquet          #+#    #+#             */
/*   Updated: 2023/06/29 13:00:24 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void) {
	{
		{
			std::cout << "*** Constructors test ***" << std::endl << std::endl;

			DiamondTrap	Unknown;
			DiamondTrap	Shiny("Shiny");

			std::cout << Unknown.getName() << ", ClapName " << Unknown.getClapName() << ": " << Unknown.getHitPoints() << "HP " << Unknown.getEnergyPoints() << "EP " << Unknown.getAttackDamage() << "AD" << std::endl;
			std::cout << Shiny.getName() << ", ClapName " << Shiny.getClapName() << ": " << Shiny.getHitPoints() << "HP " << Shiny.getEnergyPoints() << "EP " << Shiny.getAttackDamage() << "AD" << std::endl;

			std::cout << std::endl;

			std::cout << "*** Copy and assignement test ***" << std::endl << std::endl;

			DiamondTrap	ShiShi(Shiny);
			Unknown = Shiny;

			std::cout << Unknown.getName() << ", ClapName " << Unknown.getClapName() << ": " << Unknown.getHitPoints() << "HP " << Unknown.getEnergyPoints() << "EP " << Unknown.getAttackDamage() << "AD" << std::endl;
			std::cout << ShiShi.getName() << ", ClapName " << ShiShi.getClapName() << ": " << ShiShi.getHitPoints() << "HP " << ShiShi.getEnergyPoints() << "EP " << ShiShi.getAttackDamage() << "AD" << std::endl;
		}

		std::cout << std::endl;

		{
			std::cout << "*** DiamondTrap vs FragTrap vs ScavTrap vs ClapTrap ***" << std::endl << std::endl;

			ClapTrap	Blip("Blip");
			ScavTrap	Wizz("Wizz");
			FragTrap	Boum("Boum");
			DiamondTrap	Bling("Bling");

			std::cout << std::endl;

			std::cout << "ClapTrap " << Blip.getName() << ": " << Blip.getHitPoints() << "HP " << Blip.getEnergyPoints() << "EP " << Blip.getAttackDamage() << "AD" << std::endl;
			std::cout << "ScavTrap " << Wizz.getName() << ": " << Wizz.getHitPoints() << "HP " << Wizz.getEnergyPoints() << "EP " << Wizz.getAttackDamage() << "AD" << std::endl;
			std::cout << "FragTrap " << Boum.getName() << ": " << Boum.getHitPoints() << "HP " << Boum.getEnergyPoints() << "EP " << Boum.getAttackDamage() << "AD" << std::endl;
			std::cout << "DiamondTrap " << Bling.getName() << ": " << Bling.getHitPoints() << "HP " << Bling.getEnergyPoints() << "EP " << Bling.getAttackDamage() << "AD" << std::endl;
			std::cout << std::endl;
		}

		std::cout << std::endl;

		{
			std::cout << "*** DiamondTrap tests ***" << std::endl << std::endl;

			DiamondTrap	Shiny("Shiny");
			DiamondTrap	Bling("Bling");

			std::cout << std::endl;
			Shiny.attack("Bling");
			std::cout << std::endl;
			Shiny.whoAmI();
			std::cout << std::endl;
			Shiny.guardGate();
			std::cout << std::endl;
			Bling.highFiveGuys();
			std::cout << std::endl;
		}
	}
}
