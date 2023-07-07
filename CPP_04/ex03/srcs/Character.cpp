/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 17:24:18 by gpasquet          #+#    #+#             */
/*   Updated: 2023/07/07 15:49:34 by gpasquet         ###   ########.fr       */
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
	if (!m) {
		std::cout << "This materia doesn't exist" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++) {
		if (this->inventory[i] && this->inventory[i] == m) {
			std::cout << "This materia has already been learn" << std::endl;
			return ;
		}
		if (!this->inventory[i]) {
			this->inventory[i] = m;
			std::cout << this->getName() << " equip materia " << m->getType() << std::endl;
			return ;
		}
	}
	std::cout << "No room in the inventory for a new materia" << std::endl;
}

void				Character::unequip(int idx) {
	if (idx > 3) {
		std::cout << "Index must be between 0 and 3" << std::endl;
	}
	else if (this->inventory[idx]) {
		std::cout << this->getName() << " unequip materia " << this->inventory[idx]->getType() << std::endl;
		inventory[idx] = NULL;
	}
	else
		std::cout << "No materia at this index" << std::endl;
}

void				Character::use(int idx, ICharacter& target) {
	if (idx > 3) {
		std::cout << "Index must be between 0 and 3" << std::endl;
	}
	else if (this->inventory[idx]) {
		this->inventory[idx]->use(target);
	}
	else
		std::cout << "No materia at this index" << std::endl;
}

AMateria			*Character::getMateria(int idx) {
	if (idx > 3) {
		std::cout << "Index must be between 0 and 3" << std::endl;
		return (NULL);
	}
	if (this->inventory[idx])
		return (this->inventory[idx]);
	std::cout << "No materia at this index" << std::endl;
	return (NULL);
}
