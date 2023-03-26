#include <iostream>
#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {
}

HumanA::~HumanA(void) {

}

void		HumanA::attack() const {
	std::string	weaponType = this->weapon.getType();
	std::cout << this->name << " attacks with their " << weaponType << std::endl;
}

