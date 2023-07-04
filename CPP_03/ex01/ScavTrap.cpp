#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
	ClapTrap::_hitPoints = 100;
	ClapTrap::_energyPoints = 50;
	ClapTrap::_attackDamage= 20;
	std::cout << "An unknown ScavTrap has been created" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
	ClapTrap::_hitPoints = 100;
	ClapTrap::_energyPoints = 50;
	ClapTrap::_attackDamage= 20;
	std::cout << "A ScavTrap called " << name << " has been created" << std::endl;
}

ScavTrap::~ScavTrap() {
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

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->_name << " is now in gate keeper mode" << std::endl;
}
