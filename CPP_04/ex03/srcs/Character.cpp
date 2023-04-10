/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 11:25:55 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/10 15:30:21 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){
}

Character::Character(std::string name): name(name) {
}

Character::~Character(){
}

Character::Character(const Character &copy){
	this->name = copy.name;
	for (int i = 0; i < 4; i++) {
		if (this->inventory[i])
			delete inventory[i];
	}
	for (int i = 0; i < 4; i++) {
		if (copy.inventory[i])
			this->inventory[i] = copy.inventory[i];
		else
			this->inventory[i] = NULL;
	}
}

Character & Character::operator=(const Character &copy){
	if (&copy != this)
	{
		this->name = copy.name;
		for (int i = 0; i < 4; i++) {
			if (this->inventory[i])
				delete inventory[i];
		}
		for (int i = 0; i < 4; i++) {
			if (copy.inventory[i])
				this->inventory[i] = copy.inventory[i];
			else
				this->inventory[i] = NULL;
		}
	}
	return (*this);
}

std::string const & Character::getName() const {
	return (this->name);
}

void 				Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (!this->inventory[i])
			inventory[i] = m;
	}		
}

void Character::unequip(int idx) {
	AMateria *tmp  = this->inventory[idx];
	inventory[idx] = NULL;
	delete tmp;
}

void Character::use(int idx, ICharacter& target) {
	this->inventory[idx]->use(target);
}
