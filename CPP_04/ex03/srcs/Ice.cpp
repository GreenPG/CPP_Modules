/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 15:31:27 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/10 15:41:16 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice"), type("ice") {
}

Ice::~Ice(){
}

Ice::Ice(const Ice &copy){
	this->type = copy.type;
}

Ice & Ice::operator=(const Ice &copy){
	if (&copy != this)
	{
		this->type = copy.type;
	}
	return (*this);
}

AMateria*	Ice::clone() const {
	return(new Ice(*this));
}

void 		Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}
