/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 16:39:29 by gpasquet          #+#    #+#             */
/*   Updated: 2023/06/30 11:06:59 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "AAnimal.hpp"

Cat::Cat() {
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain;
}

Cat::~Cat(){
	delete this->brain;
	std::cout << "Cat default destructor called" << std::endl;
}

Cat::Cat(const Cat &copy): AAnimal(copy) {
	std::cout << "Cat copy constructor called" << std::endl;
	this->type = copy.type;
	this->brain = new Brain;
	for (int i = 0; i < 100; i++) {
		this->brain->setIdea(i, copy.brain->getIdea(i));
	}
}

Cat & Cat::operator=(const Cat &copy){
	if (&copy != this)
	{
		this->type = copy.type;
	}
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
