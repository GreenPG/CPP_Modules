/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 17:42:11 by gpasquet          #+#    #+#             */
/*   Updated: 2023/06/28 16:16:43 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	 public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap (const ScavTrap &copy);
		ScavTrap &operator=(const ScavTrap&);

		void	attack(std::string target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	guardGate();
		
		/* Getter */
		int			getHitPoints() const;
		int			getEnergyPoints() const;
		int			getAttackDamage() const;
		std::string	getName() const;
	 private:
		int		_hitPoints;
		int		_energyPoints;
		int		_attackDamage;
};

#endif
