/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:37:43 by gpasquet          #+#    #+#             */
/*   Updated: 2023/07/04 08:37:42 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

AMateria::AMateria(){
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type): type(type) {
	std::cout << "AMateria type constructor called" << std::endl;
}

AMateria::~AMateria() {
	std::cout << "AMateria destructor called";
}

AMateria::AMateria(const AMateria &copy){
	this->type = copy.type;
}

AMateria & AMateria::operator=(const AMateria &copy){
	if (&copy != this)
	{
		this->type = copy.type;
	}
	return (*this);
}

	std::string const & AMateria::getType() const {
	return (this->type);
}
