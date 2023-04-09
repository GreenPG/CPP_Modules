/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:34:20 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/09 10:55:32 by gpasquet         ###   ########.fr       */
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

Dog::Dog(const Dog &copy): Animal(){
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = copy.type;
}

Dog & Dog::operator=(const Dog &copy){
	if (&copy != this)
	{
		this->type = copy.type;
	}
	return (*this);
}

void	Dog::makeSound(void) const {
	std::cout << "Woof woof woof" << std::endl;
}

std::string	Dog::getType(void) const {
	return(this->type);
}
