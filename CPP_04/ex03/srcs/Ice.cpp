/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:47:19 by gpasquet          #+#    #+#             */
/*   Updated: 2023/05/19 16:07:22 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(){
	this->type = "type";
}

Ice::~Ice(){
}

Ice::Ice(const Ice &copy): AMateria(copy) {
	*this = copy;
}

Ice & Ice::operator=(const Ice &copy){
	if (&copy != this)
	{

	}
	return (*this);
}

std::string const & Ice::getType() const {
	return (this->type);
}//Returns the materia type

Ice* Ice::clone() const {
	return (new Ice());
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target->name;
}
