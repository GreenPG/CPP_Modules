/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:34:20 by gpasquet          #+#    #+#             */
/*   Updated: 2023/06/30 11:07:11 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "AAnimal.hpp"

Dog::Dog() {
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
	this->brain	= new Brain;
}

Dog::~Dog() {
	delete this->brain;
	std::cout << "Dog default destructor called" << std::endl;
}

Dog::Dog(const Dog &copy): AAnimal(copy) {
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = copy.type;
	this->brain = new Brain;
	for (int i = 0; i < 100; i++) {
		this->brain->setIdea(i, copy.brain->getIdea(i));
	}
}

Dog & Dog::operator=(const Dog &copy){
	if (&copy != this)
	{
		this->type = copy.type;
		for (int i = 0; i < 100; i++) {
			this->brain->setIdea(i, copy.brain->getIdea(i));
		}
	}
	return (*this);
}

void	Dog::makeSound(void) const {
	std::cout << "Woof woof woof" << std::endl;
}

std::string	Dog::getType(void) const {
	return(this->type);
}

std::string	Dog::getIdea(int index) const {
	return(this->brain->getIdea(index));
}

void		Dog::setIdeas(int index, std::string idea) {
	this->brain->setIdea(index, idea);
}
