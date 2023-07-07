/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:34:20 by gpasquet          #+#    #+#             */
/*   Updated: 2023/07/05 09:08:45 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal(){
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
	this->brain	= new Brain;
}

Dog::~Dog() {
	delete this->brain;
	std::cout << "Dog default destructor called" << std::endl;
}

Dog::Dog(const Dog &copy): Animal(copy){
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = copy.type;
	this->brain = new Brain(*copy.brain);
}

Dog & Dog::operator=(const Dog &copy){
	if (&copy != this)
	{
		this->type = copy.type;
		delete this->brain;
		this->brain = new Brain(*copy.brain);
	}
	std::cout << "Dog assignement by copy operator called" << std::endl;
	return (*this);
}

void	Dog::makeSound(void) const {
	std::cout << "Woof woof woof" << std::endl;
}

std::string	Dog::getIdea(int index) const {
	return(this->brain->getIdea(index));
}

void		Dog::setIdeas(int index, std::string idea) {
	this->brain->setIdea(index, idea);
}
