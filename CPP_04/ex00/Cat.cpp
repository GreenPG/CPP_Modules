/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:39:29 by gpasquet          #+#    #+#             */
/*   Updated: 2023/06/29 14:22:52 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():  Animal() {
	this->type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::~Cat(){
	std::cout << "Cat default destructor called" << std::endl;
}

Cat::Cat(const Cat &copy): Animal(copy) {
	std::cout << "Cat copy constructor called" << std::endl;
	this->type = copy.type;
}

Cat & Cat::operator=(const Cat &copy){
	if (&copy != this)
	{
		this->type = copy.type;
	}
	std::cout << "Cat assignement by copy operator called" << std::endl;
	return (*this);
}

void		Cat::makeSound(void) const {
	std::cout << "Meow meow meow" << std::endl;
}

std::string	Cat::getType(void) const {
	return (this->type);
}
