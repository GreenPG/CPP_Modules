/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 11:30:46 by gpasquet          #+#    #+#             */
/*   Updated: 2023/07/07 15:45:07 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = "Some idea";
	}
}

Brain::~Brain(){
	std::cout << "Brain default destructor called" << std::endl;
}

Brain::Brain(const Brain &copy){
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = copy.ideas[i];
	}
}

Brain & Brain::operator=(const Brain &copy){
	if (&copy != this)
	{
		for (int i = 0; i < 100; i++) {
			this->ideas[i] = copy.ideas[i];
		}

	}
	std::cout << "Brain assignement by copy called" << std::endl;
	return (*this);
}

std::string	Brain::getIdea(int index) const {
	if (index < 0 || index > 99) 
		return ("Something out of this brain");
	return (this->ideas[index]);
}

void	Brain::setIdea(int index, std::string newIdea) {
	if (index < 0 || index > 99) {
		std::cout << "Index must be between 0 and 99" << std::endl;
		return ;
	}
	this->ideas[index] = newIdea;
}
