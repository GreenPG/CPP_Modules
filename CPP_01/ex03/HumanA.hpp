/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:21:23 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/03 09:21:24 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.hpp"

class HumanA
{
	 public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);

		std::string	name;
		Weapon		&weapon;

		void		attack() const;
	 private:
		
};
