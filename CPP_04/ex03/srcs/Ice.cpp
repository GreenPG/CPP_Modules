/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:47:19 by gpasquet          #+#    #+#             */
/*   Updated: 2023/07/04 08:41:45 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

Ice::Ice(): AMateria("ice"), type("ice") {
		std::cout << "Ice materia default constructor called" << std::endl;
}

Ice::~Ice(){
	std::cout << "Ice materia destructor called" << std::endl;
}

Ice::Ice(const Ice &copy): AMateria(copy) {
	this->type = copy.type;
	std::cout << "Ice materia copy constructor called" << std::endl;
}

Ice & Ice::operator=(const Ice &copy){
	if (&copy != this)
	{
		this->type = copy.type;	
	}
	std::cout << "Ice materia assignement by copy operator called" << std::endl;
	return (*this);
}

std::string const & Ice::getType() const {
	return (this->type);
}

Ice* Ice::clone() const {
	return (new Ice());
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}
