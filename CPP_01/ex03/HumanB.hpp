/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:21:31 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/03 09:21:31 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.hpp"

class HumanB
{
	 public:
		HumanB(std::string name);
		~HumanB(void);

		Weapon		*weapon;
		std::string	name;

		void		setWeapon(Weapon &weapon);
		void		attack() const;
};
