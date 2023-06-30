/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:34:20 by gpasquet          #+#    #+#             */
/*   Updated: 2023/06/29 14:26:01 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal(){
	this->type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog default destructor called" << std::endl;
}

Dog::Dog(const Dog &copy): Animal(copy){
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = copy.type;
}

Dog & Dog::operator=(const Dog &copy){
	if (&copy != this)
	{
		this->type = copy.type;
	}
	std::cout << "Dog assignement by copy call" << std::endl;
	return (*this);
}

void	Dog::makeSound(void) const {
	std::cout << "Woof woof woof" << std::endl;
}

std::string	Dog::getType(void) const {
	return(this->type);
}
