/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:21:04 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/06 16:47:25 by gpasquet         ###   ########.fr       */
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
	 protected:
		std::string	_name;
		std::string	_clapTrapName;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
};
