/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 15:43:42 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/10 15:43:58 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure"), type("cure") {
}

Cure::~Cure(){
}

Cure::Cure(const Cure &copy){
	this->type = copy.type;
}

Cure & Cure::operator=(const Cure &copy){
	if (&copy != this)
	{
		this->type = copy.type;
	}
	return (*this);
}

AMateria*	Cure::clone() const {
	return(new Cure(*this));
}

void 		Cure::use(ICharacter& target) {
	std::cout << "* shoots an cure bolt at " << target.getName() << std::endl;
}
