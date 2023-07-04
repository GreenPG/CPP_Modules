/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 09:31:56 by gpasquet          #+#    #+#             */
/*   Updated: 2023/07/04 15:20:16 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	 public:
		FragTrap();
		FragTrap(std::string name);
		~FragTrap();
		FragTrap (const FragTrap &copy);
		FragTrap &operator=(const FragTrap&);

		void	highFiveGuys(void);

};

#endif
