/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 11:03:33 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/10 15:13:41 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

AMateria::AMateria(void) {
}

AMateria::AMateria(std::string const & type): type(type) {
}

AMateria::~AMateria(void) {
}

AMateria::AMateria (const AMateria &copy) {
	this->type = copy.type;
}

AMateria &AMateria::operator=(const AMateria &copy) {
	if (&copy != this)
	{
		this->type = copy.type;
	}
	return (*this);
}
	
std::string const & AMateria::getType() const{
	return (this->type);
} //
  //Returns the materia type
