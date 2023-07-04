/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:24:18 by gpasquet          #+#    #+#             */
/*   Updated: 2023/07/04 17:52:11 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

Character::Character(): _name("Somebody")  {
	for (int i = 0; i < 4; i++)  {
		this->inventory[i] = NULL;
	}
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string const name): _name(name) {
	for (int i = 0; i < 4; i++)  {
		this->inventory[i] = NULL;
	}
	std::cout << "Character name constructor called" << std::endl;	
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		if (this->inventory[i])
			delete this->inventory[i];
	}
	std::cout << "Character default destructor called" << std::endl;
}

Character::Character(const Character &copy){
	this->_name = copy._name;
	for (int i = 0; i < 4; i++) {
		if (copy.inventory[i])
			this->inventory[i] = copy.inventory[i]->clone();
		else
			this->inventory[i] = NULL;
	}
	std::cout << "Character copy constructor called" << std::endl;
}

Character & Character::operator=(const Character &copy){
	if (&copy != this)
	{
		this->_name = copy._name;
		for (int i = 0; i < 4; i++) {
			if (this->inventory[i])
				delete this->inventory[i];
		}
		for (int i = 0; i < 4; i++) {
			if (copy.inventory[i])
				this->inventory[i] = copy.inventory[i]->clone();
		}
	}
	std::cout << "Character copy by assignement operator called" << std::endl;
	return (*this);
}

std::string	const & Character::getName() const {
	return (this->_name);
}

void				Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (!this->inventory[i]) {
			this->inventory[i] = m;
			return ;
		}
	}
	std::cout << "No room in the inventory for a new materia" << std::endl;
}

void				Character::unequip(int idx) {
	if (this->inventory[idx])
		inventory[idx] = NULL;
	else
		std::cout << "No materia at this index" << std::endl;
}

void				Character::use(int idx, ICharacter& target) {
	if (this->inventory[idx]) {
		this->inventory[idx]->use(target);
	}
	else
		std::cout << "No materia at this index" << std::endl;
}
