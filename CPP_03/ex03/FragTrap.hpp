/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 09:31:56 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/06 15:24:21 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	 public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		FragTrap (const FragTrap &copy);
		FragTrap &operator=(const FragTrap&);

		void	attack(std::string target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	highFiveGuys(void);
};

#endif
