/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:27:27 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/09 11:57:19 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal(){
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &copy){
	std::cout << "Animal copy constructor called" << std::endl;
	this->type = copy.type;
}

Animal & Animal::operator=(const Animal &copy){
	if (&copy != this)
	{
		this->type = copy.type;
	}
	return (*this);
}

std::string	Animal::getType(void) const {
	return (this->type);
}

void	Animal::makeSound(void) const {
	std::cout << "Undefined animal noise" << std::endl;
}
