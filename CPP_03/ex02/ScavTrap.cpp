/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 09:35:55 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/06 09:37:48 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "An unknown ScavTrap has been created" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "A ScavTrap called " << name << " has been created" << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap " << this->_name << " has been destructed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy) {
	*this = copy;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &copy){
	if (&copy != this)
	{

	}
	return (*this);
}

void	ScavTrap::attack(std::string target) {
	if (this->_hitPoints <= 0)
		std::cout << this->_name << " has no hit points left, he can't attack" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << this->_name << " has no energy points left, he can't attack" << std::endl;
	else {
		this->_energyPoints--;
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage !" << std::endl;
	}
}

void	 ScavTrap::takeDamage(unsigned int amount) {
	this->_hitPoints -= amount;
	std::cout << "ScavTrap " << this->_name << " take " << amount << " damage. He is left with " << this->_hitPoints << " hits points" << std::endl;
}

void	 ScavTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoints <= 0)
		std::cout << this->_name << " has no hit points left, he cant't be repaired" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << this->_name << " has no energy points left, he cant't be repaired" << std::endl;
	else {
	this->_hitPoints += amount;
	this->_energyPoints--;
	std::cout << "ScavTrap " << this->_name << " is repaired of " << amount << " hit points. He now has " << this->_hitPoints << " hits points" << std::endl;
	}
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->_name << " is now in gate keeper mode" << std::endl;
}
