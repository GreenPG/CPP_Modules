/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:27:27 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/09 16:31:26 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal(){
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::~AAnimal(){
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy){
	std::cout << "AAnimal copy constructor called" << std::endl;
	this->type = copy.type;
}

AAnimal & AAnimal::operator=(const AAnimal &copy){
	if (&copy != this)
	{
		this->type = copy.type;
	}
	return (*this);
}

std::string	AAnimal::getType(void) const {
	return (this->type);
}

void	AAnimal::makeSound(void) const {
	std::cout << "Undefined animal noise" << std::endl;
}
