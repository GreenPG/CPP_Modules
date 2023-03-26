#include <string>
#include "Weapon.hpp"

class HumanB
{
	 public:
		HumanB(std::string name);
		~HumanB(void);

		Weapon		*weapon;
		std::string	name;

		void		setWeapon(Weapon *weapon);
		void		attack() const;
	 private:
		
};
