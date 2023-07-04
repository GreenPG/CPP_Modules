/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 09:04:48 by gpasquet          #+#    #+#             */
/*   Updated: 2023/07/04 17:28:54 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"
#include "../includes/Ice.hpp"
#include "../includes/Cure.hpp"

MateriaSource::MateriaSource(){
	std::cout << "Materia Source default constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		this->inventory[i] = NULL;
	}
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		if  (this->inventory[i])
			delete this->inventory[i];
	}
	std::cout << "Materia Source destructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &copy){
	for (int i = 0; i < 4; i++) {
		this->inventory[i] = NULL;
	}
	for (int i = 0; i < 4; i++) {
		if (this->inventory[i])
			this->inventory[i] = copy.inventory[i]->clone();
	}	
	std::cout << "Materia Source constructor by copy called" << std::endl;
}

MateriaSource & MateriaSource::operator=(const MateriaSource &copy){
	if (&copy != this)
	{
		for (int i = 0; i < 4; i++) {
			if (this->inventory[i])
				delete inventory[i];
		}
		for (int i = 0; i < 4; i++) {
			if (!this->inventory[i] && copy.inventory[i])
				this->inventory[i] = copy.inventory[i]->clone();
		}	
	}
	std::cout << "Materia Source assignement by copy called" << std::endl;
	return (*this);
}

void		MateriaSource::learnMateria(AMateria* copy) {
	for (int i = 0; i < 4; i++) {
		if (!this->inventory[i]) {
			this->inventory[i] = copy;
			return ;
		}
	}
	std::cout << "No room in materia source  inventory" << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (this->inventory[i] && this->inventory[i]->getType() == type)
			return (this->inventory[i]->clone());
	}
	std::cout << "No materia with this type in materia source's inventory" << std::endl;
	return (NULL);
}
