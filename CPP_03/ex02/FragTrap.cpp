/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 09:34:45 by gpasquet          #+#    #+#             */
/*   Updated: 2023/06/28 17:10:57 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap(), _name("Unknown"), _hitPoints(100), _energyPoints(100), _attackDamage(30) {
	std::cout << "An unknown FragTrap has been created" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name), _name(name), _hitPoints(100), _energyPoints(100), _attackDamage(30) {
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

void	FragTrap::attack(std::string target) {
	if (this->_hitPoints <= 0)
		std::cout << this->_name << " has no hit points left, he can't attack" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << this->_name << " has no energy points left, he can't attack" << std::endl;
	else {
		this->_energyPoints--;
		std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage !" << std::endl;
		std::cout << this->_name << " has now " << this->_energyPoints << " EP" << std::endl;
	}
}

void	 FragTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints <= 0)
		std::cout << this->_name << " is already dead" << std::endl;
	else {
		this->_hitPoints -= amount;
		std::cout << "FragTrap " << this->_name << " take " << amount << " damage. He is left with " << this->_hitPoints << " hits points" << std::endl;
	}
}

void	 FragTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoints <= 0)
		std::cout << this->_name << " has no hit points left, he cant't be repaired" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << this->_name << " has no energy points left, he cant't be repaired" << std::endl;
	else {
		this->_hitPoints += amount;
		this->_energyPoints--;
		std::cout << "FragTrap " << this->_name << " is repaired of " << amount << " hit points. He now has " << this->_hitPoints << " hits points and " << this->_energyPoints	<< " EP" << std::endl;
	}
}

void	FragTrap::highFiveGuys(void) {
	std::cout << "FragTrap " << this->_name	<< " ask for a high five" << std::endl;
}


int			FragTrap::getHitPoints() const {
	return (this->_hitPoints);
}

int			FragTrap::getEnergyPoints() const {
	return (this->_energyPoints);
}

int			FragTrap::getAttackDamage() const {
	return (this->_attackDamage);
}

std::string	FragTrap::getName() const {
	return (this->_name);
}
