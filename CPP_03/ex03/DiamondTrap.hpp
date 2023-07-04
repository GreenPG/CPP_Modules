/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:21:04 by gpasquet          #+#    #+#             */
/*   Updated: 2023/07/04 15:41:08 by gpasquet         ###   ########.fr       */
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

		std::string	getClapName() const;
		using		ScavTrap::attack;
		void		whoAmI();

	 private:
		std::string	_name;
		std::string	_clapName;
		using 		FragTrap::_hitPoints;
		using		ScavTrap::_energyPoints;
		using		FragTrap::_attackDamage;
};
