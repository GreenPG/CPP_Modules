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

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->_name << " is now in gate keeper mode" << std::endl;
}
