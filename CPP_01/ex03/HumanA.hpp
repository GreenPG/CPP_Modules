/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 09:21:23 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/07 09:58:21 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA
{
	 public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);


		void		attack() const;
	 private:
		std::string	name;
		Weapon		&weapon;
};

#endif
