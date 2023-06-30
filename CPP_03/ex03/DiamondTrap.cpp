/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:22:17 by gpasquet          #+#    #+#             */
/*   Updated: 2023/06/29 10:48:50 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap(): ScavTrap(), FragTrap(), _name("Unknown"), _hitPoints(FragTrap::_hitPoints), _energyPoints(ScavTrap::_energyPoints), _attackDamage(FragTrap::_attackDamage) {
	this->_clapName = "Unknown_clap_name";
	std::cout << "An unknown DiamondTrap has been created" << std::endl;
} 

DiamondTrap::DiamondTrap(std::string name): ScavTrap(name), FragTrap(name), _name(name), _hitPoints(FragTrap::_hitPoints), _energyPoints(ScavTrap::_energyPoints), _attackDamage(FragTrap::_attackDamage) {
	this->_clapName = name.append("_clap_name");
	std::cout << "A DiamondTrap named " << this->_name << " has been created" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << this->_name << " has been destructed" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy): ScavTrap(copy), FragTrap(copy) {
	this->_name = copy._name;
	this->_clapName = copy._clapName;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	std::cout << "A DiamondTrap called " << this->_name << " has been created by copy" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap &copy) {
	if (&copy != this)
	{
		this->_name = copy._name;
		this->_clapName = copy._clapName;
		this->_hitPoints = copy._hitPoints;
		this->_energyPoints = copy._energyPoints;
		this->_attackDamage = copy._attackDamage;
	}
	std::cout << "A DiamondTrap called " << this->_name << " has been assigned by copy" << std::endl;
	return (*this);
}

int			DiamondTrap::getHitPoints() const {
	return (this->_hitPoints);
}

int			DiamondTrap::getEnergyPoints() const {
	return (this->_energyPoints);
}

int			DiamondTrap::getAttackDamage() const {
	return (this->_attackDamage);

}

std::string	DiamondTrap::getName() const {
	return (this->_name);
}

std::string	DiamondTrap::getClapName() const {
	return (this->_clapName);
}

void	DiamondTrap::attack(std::string target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void) {
	std::cout << "I am " << this->_name << ", also known has " << this->_clapName << std::endl;
}
