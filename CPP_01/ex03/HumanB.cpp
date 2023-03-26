#include <iostream>
#include "HumanB.hpp"


HumanB::HumanB(std::string name) : name(name) {
	this->weapon = NULL;
}

HumanB::~HumanB(void) {

}

void		HumanB::setWeapon(Weapon *weapon) {
	this->weapon = weapon;
}

void		HumanB::attack() const {
	if (!this->weapon)
		std::cout << this->name << " attacks with their fists" << std::endl;
	else {
		std::string weaponType = this->weapon->getType();
		std::cout << this->name << " attacks with their " << weaponType << std::endl;
	}
}
