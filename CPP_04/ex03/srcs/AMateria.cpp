/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 15:37:43 by gpasquet          #+#    #+#             */
/*   Updated: 2023/05/19 15:47:02 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){
}

AAMateria::Materia(std::string const & type){

}

AMateria::~AMateria(){
}

AMateria::AMateria(const AMateria &copy){
	*this = copy;
}

AMateria & AMateria::operator=(const AMateria &copy){
	if (&copy != this)
	{

	}
	return (*this);
}

std::string const & AMateria::getType() const {
	return (this->type);
}//Returns the materia type
