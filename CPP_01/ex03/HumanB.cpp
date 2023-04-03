/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:21:27 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/03 09:21:27 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"


HumanB::HumanB(std::string name) : name(name) {
	this->weapon = NULL;
}

HumanB::~HumanB(void) {

}

void		HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}

void		HumanB::attack() const {
	if (!this->weapon)
		std::cout << this->name << " attacks with their fists" << std::endl;
	else {
		std::string weaponType = this->weapon->getType();
		std::cout << this->name << " attacks with their " << weaponType << std::endl;
	}
}
