/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 11:02:21 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/09 11:12:35 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal(){
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy): WrongAnimal(copy){
	std::cout << "WrongCat copy constructor called" << std::endl;
	this->type = copy.getType();
}

WrongCat & WrongCat::operator=(const WrongCat &copy){
	if (&copy != this)
	{
		this->type = copy.getType();
	}
	return (*this);
}
