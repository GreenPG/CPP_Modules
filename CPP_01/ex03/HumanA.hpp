#include <string>
#include "Weapon.hpp"

class HumanA
{
	 public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);

		std::string	name;
		Weapon		&weapon;

		void		attack() const;
	 private:
		
};
