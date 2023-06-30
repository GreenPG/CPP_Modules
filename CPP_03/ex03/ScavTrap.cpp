#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap(), _name("Unknown"), _hitPoints(100), _energyPoints(50), _attackDamage(20) {
	std::cout << "An unknown ScavTrap has been created" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name), _name(name), _hitPoints(100), _energyPoints(50), _attackDamage(20) {
	std::cout << "A ScavTrap called " << name << " has been created" << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap " << this->_name << " has been destructed" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy) {
	this->_hitPoints = copy._hitPoints;
	this->_attackDamage = copy._attackDamage;
	this->_energyPoints = copy._energyPoints;
	this->_name= copy._name;
	std::cout << "A ScavTrap called " << this->_name << " has been created by copy" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &copy){
	if (&copy != this)
	{
		this->_name = copy._name;
		this->_hitPoints= copy._hitPoints;
		this->_energyPoints = copy._energyPoints;
		this->_attackDamage = copy._attackDamage;
	}
	std::cout << "A ScavTrap called " << this->_name << " has been assigned by copy" << std::endl;
	return (*this);
}

void	ScavTrap::attack(std::string target) {
	if (this->_hitPoints <= 0)
		std::cout << this->_name << " has no hit points left, he can't attack" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << this->_name << " has no energy points left, he can't attack" << std::endl;
	else {
		this->_energyPoints--;
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage !" << std::endl << "He now has " << this->_energyPoints << "EP" << std::endl;
	}
}

void	 ScavTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints <= 0)
		std::cout << this->_name << " has no hit points left, he is already dead" << std::endl;
	else {
		this->_hitPoints -= amount;
		std::cout << "ScavTrap " << this->_name << " take " << amount << " damage. He is left with " << this->_hitPoints << " hits points" << std::endl;
	}
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

int			ScavTrap::getHitPoints() const {
	return (this->_hitPoints);	
}

int			ScavTrap::getEnergyPoints() const {
	return (this->_energyPoints);	
}

int			ScavTrap::getAttackDamage() const {
	return (this->_attackDamage);	
}

std::string	ScavTrap::getName() const {
	return (this->_name);
}
