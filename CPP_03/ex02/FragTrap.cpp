/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 09:34:45 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/06 09:37:44 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "An unknown FragTrap has been created" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "A FragTrap called " << name << " has been created" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap " << this->_name << " has been destructed" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy) {
	*this = copy;
}

FragTrap & FragTrap::operator=(const FragTrap &copy){
	if (&copy != this)
	{

	}
	return (*this);
}

void	FragTrap::attack(std::string target) {
	if (this->_hitPoints <= 0)
		std::cout << this->_name << " has no hit points left, he can't attack" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << this->_name << " has no energy points left, he can't attack" << std::endl;
	else {
		this->_energyPoints--;
		std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage !" << std::endl;
	}
}

void	 FragTrap::takeDamage(unsigned int amount) {
	this->_hitPoints -= amount;
	std::cout << "FragTrap " << this->_name << " take " << amount << " damage. He is left with " << this->_hitPoints << " hits points" << std::endl;
}

void	 FragTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoints <= 0)
		std::cout << this->_name << " has no hit points left, he cant't be repaired" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << this->_name << " has no energy points left, he cant't be repaired" << std::endl;
	else {
	this->_hitPoints += amount;
	this->_energyPoints--;
	std::cout << "FragTrap " << this->_name << " is repaired of " << amount << " hit points. He now has " << this->_hitPoints << " hits points" << std::endl;
	}
}

void	FragTrap::highFiveGuys(void) {
	std::cout << "FragTrap " << this->_name	<< " ask for a high five" << std::endl;
}
