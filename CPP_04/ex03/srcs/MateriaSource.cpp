/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 09:04:48 by gpasquet          #+#    #+#             */
/*   Updated: 2023/07/04 09:32:41 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource(){
	std::cout << "Materia Source default constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		this->inventory[i] = NULL;
	}
}

MateriaSource::~MateriaSource(){
	std::cout << "Materia Source destructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &copy){
	*this = copy;
	std::cout << "Materia Source constructor by copy called" << std::endl;
}

MateriaSource & MateriaSource::operator=(const MateriaSource &copy){
	if (&copy != this)
	{
	}
	std::cout << "Materia Source assignement by copy called" << std::endl;
	return (*this);
}

void		MateriaSource::learnMateria(AMateria* copy) {
	for (int i = 0; i < 4; i++) {
		if (!this->inventory[i]) {
			this->inventory[i] = new AMateria(*copy);
			return ;
		}
	}
	std::cout << "No room in materia source  inventory" << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const & type) {

}
