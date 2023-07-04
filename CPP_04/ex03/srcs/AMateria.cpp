/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:37:43 by gpasquet          #+#    #+#             */
/*   Updated: 2023/07/04 16:44:09 by gpasquet         ###   ########.fr       */
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
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria::AMateria(const AMateria &copy){
	this->type = copy.type;
	std::cout << "AMateria constructor by copy called" << std::endl;
}

AMateria & AMateria::operator=(const AMateria &copy){
	if (&copy != this)
	{
		this->type = copy.type;
	}
	std::cout << "AMateria assignement by copy operator called" << std::endl;
	return (*this);
}

std::string const & AMateria::getType() const {
	return (this->type);
}

void	AMateria::use(ICharacter& target) {
	(void)target;
}
