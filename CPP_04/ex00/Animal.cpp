/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:27:27 by gpasquet          #+#    #+#             */
/*   Updated: 2023/06/29 14:11:09 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): type("Undefined animal") {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal default destructor called" << std::endl;
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
	std::cout << "Animal assigmenent by copy operator called" << std::endl;
	return (*this);
}

std::string	Animal::getType(void) const {
	return (this->type);
}

void	Animal::makeSound(void) const {
	std::cout << "Undefined animal noise" << std::endl;
}
