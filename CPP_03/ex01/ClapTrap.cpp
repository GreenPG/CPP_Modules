#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(): _name("Unknown"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "An unknown ClapTrap has been created" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "A ClapTrap called " << name << " has been created" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap " <<  this->_name << " has been destructed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy){
	this->_name = copy._name;
	this->_hitPoints= copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &copy){
	if (&copy != this)
	{
		this->_name = copy._name;
		this->_hitPoints= copy._hitPoints;
		this->_energyPoints = copy._energyPoints;
		this->_attackDamage = copy._attackDamage;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target) {
	if (this->_hitPoints <= 0)
		std::cout << this->_name << " has no hit points left, he can't attack" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << this->_name << " has no energy points left, he can't attack" << std::endl;
	else {
		this->_energyPoints--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage !" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	this->_hitPoints -= amount;
	std::cout << "ClapTrap " << this->_name << " take " << amount << " damage. He is left with " << this->_hitPoints << " hits points" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoints <= 0)
		std::cout << this->_name << " has no hit points left, he cant't be repaired" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << this->_name << " has no energy points left, he cant't be repaired" << std::endl;
	else {
	this->_hitPoints += amount;
	this->_energyPoints--;
	std::cout << "ClapTrap " << this->_name << " is repaired of " << amount << " hit points. He now has " << this->_hitPoints << " hits points" << std::endl;
	}
}
