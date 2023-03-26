#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)	{

}

Weapon::~Weapon(void) {

}

const std::string	Weapon::getType(void) const {
	const std::string	typeRef = this->type;
	return (typeRef);
}

void				Weapon::setType(std::string type) {
	this->type = type;
}
