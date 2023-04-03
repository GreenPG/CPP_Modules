/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:21:18 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/03 09:21:19 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {
}

HumanA::~HumanA(void) {

}

void		HumanA::attack() const {
	std::string	weaponType = this->weapon.getType();
	std::cout << this->name << " attacks with their " << weaponType << std::endl;
}

