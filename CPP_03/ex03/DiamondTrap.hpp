/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:21:04 by gpasquet          #+#    #+#             */
/*   Updated: 2023/06/29 09:48:05 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	 public:
		DiamondTrap();
		DiamondTrap(std::string name);
		~DiamondTrap();
		DiamondTrap (const DiamondTrap &copy);
		DiamondTrap &operator=(const DiamondTrap&);

		void	attack(std::string target);
		void	whoAmI(void);
		
		/* Getter */
		int			getHitPoints() const;
		int			getEnergyPoints() const;
		int			getAttackDamage() const;
		std::string	getName() const;
		std::string	getClapName() const;
	 private:
		std::string	_name;
		std::string	_clapName;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
};
