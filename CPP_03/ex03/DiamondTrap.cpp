/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:22:17 by gpasquet          #+#    #+#             */
/*   Updated: 2023/07/04 15:41:57 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap(), FragTrap() {
	this->_clapName = "Unknown_clap_name";
	std::cout << "An unknown DiamondTrap has been created" << std::endl;
} 

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), ScavTrap(name), FragTrap(name) {
	this->_clapName = name.append("_clap_name");
	std::cout << "A DiamondTrap named " << this->_name << " has been created" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << this->_name << " has been destructed" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy): ClapTrap(copy), ScavTrap(copy), FragTrap(copy) {
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

void	DiamondTrap::whoAmI(void) {
	std::cout << "I am " << this->_name << ", also known has " << this->_clapName << std::endl;
}

std::string	DiamondTrap::getClapName(void) const {
	return (this->_clapName);
}
