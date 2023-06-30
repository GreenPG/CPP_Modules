/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:39:29 by gpasquet          #+#    #+#             */
/*   Updated: 2023/06/29 15:26:39 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():  Animal() {
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain;
}

Cat::~Cat(){
	delete this->brain;
	std::cout << "Cat default destructor called" << std::endl;
}

Cat::Cat(const Cat &copy): Animal(copy) {
	std::cout << "Cat copy constructor called" << std::endl;
	this->type = copy.type;
	this->brain = new Brain(*copy.brain);
}

Cat & Cat::operator=(const Cat &copy){
	if (&copy != this)
	{
		this->type = copy.type;
		delete this->brain;
		this->brain = new Brain(*copy.brain);
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

std::string	Cat::getIdea(int index) const {
	return(this->brain->getIdea(index));
}

void		Cat::setIdeas(int index, std::string idea) {
	this->brain->setIdea(index, idea);
}
