/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 09:50:21 by gpasquet          #+#    #+#             */
/*   Updated: 2023/07/04 08:58:38 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

Cure::Cure(): AMateria("cure"), type("cure") {
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::~Cure(){
	std::cout << "Cure destructor called" << std::endl;
}

Cure::Cure(const Cure &copy): AMateria(copy) {
	this->type = copy.type;
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure & Cure::operator=(const Cure &copy) {
	if (&copy != this)
	{
		this->type = copy.type;
	}
	std::cout << "Cure assignement by copy operator called" << std::endl;
	return (*this);
}

std::string const & Cure::getType() const {
	return (this->type);
}

Cure	*Cure::clone() const {
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
