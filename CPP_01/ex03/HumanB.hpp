/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:21:31 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/07 09:58:49 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB
{
	 public:
		HumanB(std::string name);
		~HumanB(void);

		void		setWeapon(Weapon &weapon);
		void		attack() const;
	private:
		Weapon		*weapon;
		std::string	name;
};

#endif
