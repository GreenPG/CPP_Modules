#include <string>
#include <iostream>

class ClapTrap
{
	 public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap (const ClapTrap &copy);
		ClapTrap &operator=(const ClapTrap&);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		
		/* Getters */
		std::string	getName() const;
		int			getHitPoints() const;
		int			getEnergyPoints() const;
		int			getAttackDamage() const;
	 private:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
};
