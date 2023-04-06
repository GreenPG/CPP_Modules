/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:22:17 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/06 16:59:04 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap(): ScavTrap(), FragTrap(), _hitPoints(FragTrap::_hitPoints), _energyPoints(ScavTrap::_energyPoints), _attackDamage(FragTrap::_attackDamage) {
	this->_clapTrapName = this->ClapTrap::_name;
	this->_clapTrapName.append("_clap_name");
	std::cout << "An unknown DiamondTrap has been created" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), ScavTrap(name), FragTrap(name), _name(name), _clapTrapName(ClapTrap::_name.append("_clap_name")), _hitPoints(FragTrap::_hitPoints), _energyPoints(ScavTrap::_energyPoints), _attackDamage(FragTrap::_attackDamage) {
	std::cout << "A DiamondTrap called " << this->_name	<< " has been created" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << this->_name << " has been destroyed" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy): ClapTrap(copy), ScavTrap(copy), FragTrap(copy){
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap &copy){
	if (&copy != this)
	{
		this->_name = copy._name;
		this->_clapTrapName = copy._clapTrapName;
		this->_hitPoints= copy._hitPoints;
		this->_energyPoints = copy._energyPoints;
		this->_attackDamage = copy._attackDamage;
	}
	return (*this);
}

void	DiamondTrap::whoAmI(void) {
	std::cout << "I am " << this->_name << "( " << this->_clapTrapName << " )" << std::endl;
}

void	DiamondTrap::attack(std::string target) {
	this->ScavTrap::attack(target);
}
