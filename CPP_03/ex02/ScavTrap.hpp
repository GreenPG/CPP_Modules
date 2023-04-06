/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 17:42:11 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/06 09:25:13 by gpasquet         ###   ########.fr       */
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
		void	 takeDamage(unsigned int amount);
		void	 beRepaired(unsigned int amount);
		void	guardGate();
	 private:
		
};

#endif
