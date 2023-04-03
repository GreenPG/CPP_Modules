/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:21:39 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/03 09:21:40 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)	{

}

Weapon::~Weapon(void) {

}

const std::string	Weapon::getType(void) const {
	const std::string	typeRef = this->type;
	return (typeRef);
}

void				Weapon::setType(std::string type) {
	this->type = type;
}
