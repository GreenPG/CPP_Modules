/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 11:01:38 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/09 11:02:18 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "Wrong Animal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "Wrong Animal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy){
	std::cout << "Wrong Animal copy constructor called" << std::endl;
	this->type = copy.type;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &copy){
	if (&copy != this)
	{
		this->type = copy. type;
	}
	return (*this);
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "Wrong animal sound" << std::endl;
}

std::string	WrongAnimal::getType(void) const {
	return (this->type);
}
