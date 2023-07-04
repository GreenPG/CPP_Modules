/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 09:34:45 by gpasquet          #+#    #+#             */
/*   Updated: 2023/07/04 15:22:50 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap(){
	ClapTrap::_hitPoints = 100;
	ClapTrap::_energyPoints = 100;
	ClapTrap::_attackDamage = 30;
	std::cout << "An unknown FragTrap has been created" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	ClapTrap::_hitPoints = 100;
	ClapTrap::_energyPoints = 100;
	ClapTrap::_attackDamage = 30;
	std::cout << "A FragTrap called " << name << " has been created" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap " << this->_name << " has been destructed" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy) {
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	std::cout << "A FragTrap called " << this->_name << " has been created by copy" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap &copy){
	if (&copy != this)
	{
		this->_name = copy._name;
		this->_hitPoints = copy._hitPoints;
		this->_energyPoints = copy._energyPoints;
		this->_attackDamage = copy._attackDamage;
	}
	std::cout << "A FragTrap called " << this->_name << " has been assigned by copy" << std::endl;
	return (*this);
}

void	FragTrap::highFiveGuys(void) {
	std::cout << "FragTrap " << this->_name	<< " ask for a high five" << std::endl;
}
